#include "Keyboard.h"
#import "KeyboardViews.h"
#import "KeyboardViews+iOS.h"
#import "KeyboardViews+iOS+Glass.h"
#import "KeyboardViews+tvOS+visionOS.h"
#import "UnityTrampolineInterface.h"

#if UNITY_XCODE_PROJECT_TYPE_SWIFT
#import <UnityAPI/UnityCoreInterface.h>
#else
#include "DisplayManager.h"
#include "UnityAppController.h"
#endif
#import <GameController/GameController.h>

#ifndef FILTER_EMOJIS_IOS_KEYBOARD
#define FILTER_EMOJIS_IOS_KEYBOARD 0
#endif


static KeyboardDelegate*    _keyboard = nil;

static bool                 _shouldHideInput = false;
static bool                 _shouldHideInputChanged = false;


const unsigned kUnityKeyboardSingleLineFontSize = 20;

CGFloat MultilineInputFieldHeight()
{
    // use smaller area for iphones and bigger one for ipads
    return UnityDeviceDPI() > 300 ? 75 : 100;
}


@implementation KeyboardDelegate
{
    // UI handling
    // in case of single line we use UITextField inside UIToolbar
    // in case of multi-line input we use UITextView with UIToolbar as accessory view
    // tvOS does not support multiline input thus only UITextField option is implemented
    // tvOS does not support UIToolbar so we rely on tvOS default processing
#if PLATFORM_IOS || PLATFORM_VISIONOS
    UIView<UnityKeyboardEditView, UnityMultilineEdit>* _multilineView;
#endif
    UIView<UnityKeyboardEditView, UnitySingleLineEdit>* _singleLineView;

    // editView is the "root" view for keyboard: UIToolbar [single-line] or UITextView [multi-line]
    UIView<UnityKeyboardEditView>* editView;
    // dummy view used for positioning editView when the on-screen keyboard is floating
    UIView*         dummyAccessoryPositionView;
    CGSize          cachedUnityViewSize;
    CGPoint         cachedAccessoryPosition;

    KeyboardShowParam cachedKeyboardParam;

    CGRect          _area;
    CGRect          lastKeyboardRect;
    NSString*       initialText;

    UIKeyboardType  keyboardType;

    BOOL            _multiline;
    BOOL            _inputHidden;
    BOOL            _active;
    UnityKeyboardStatus _status;
    int             _characterLimit;

    // not pretty but seems like easiest way to keep "we are rotating" status
    BOOL            _rotating;
    NSRange         _hiddenSelection;
    NSRange         _selectionRequest;
}

@synthesize area;
@synthesize active      = _active;
@synthesize status      = _status;
@synthesize text;
@synthesize selection;
@synthesize hasUsedDictation;

- (void)setPendingSelectionRequest
{
    if (_selectionRequest.location != NSNotFound)
    {
        _keyboard.selection = _selectionRequest;
        _selectionRequest.location = NSNotFound;
    }
}

- (BOOL)textFieldShouldReturn:(UITextField*)textFieldObj
{
    [self textInputDone: nil];
    return YES;
}

- (void)textInputDone:(id)sender
{
    if (_status == kUnityKeyboardStatusVisible)
    {
        _status = kUnityKeyboardStatusDone;
        // Done, initial text is gone, replace it so that just in case we don't have old thing cached
        if (auto text = self.currentTextEditor.text)
            initialText = text;
        UnityKeyboard_StatusChanged(_status);
    }
    [self hide];
}

- (void)becomeFirstResponder
{
    if (_status == kUnityKeyboardStatusVisible)
    {
        [editView.inputView becomeFirstResponder];
    }
}

- (void)textInputCancel:(id)sender
{
    _status = kUnityKeyboardStatusCanceled;
    UnityKeyboard_StatusChanged(_status);
    [self hide];
}

- (void)textInputLostFocus
{
    if (_status == kUnityKeyboardStatusVisible)
    {
        _status = kUnityKeyboardStatusLostFocus;
        UnityKeyboard_StatusChanged(_status);
    }
    [self hide];
}

- (void)textViewDidChange:(UITextView *)textView
{
  if (textView.markedTextRange == nil && textView.text.length > _characterLimit && _characterLimit != 0)
  {
    textView.text = [textView.text substringToIndex: _characterLimit];
  }

  UnityKeyboard_TextChanged(textView.text);
}

- (void)textFieldDidChange:(UITextField*)textField
{
  if (textField.markedTextRange == nil && textField.text.length > _characterLimit && _characterLimit != 0)
  {
    textField.text = [textField.text substringToIndex: _characterLimit];
  }

  UnityKeyboard_TextChanged(textField.text);
}

- (BOOL)textViewShouldBeginEditing:(UITextView*)view
{
    return YES;
}

#if PLATFORM_IOS || PLATFORM_VISIONOS
- (void)textInputModeDidChange:(NSNotification*)notification
{
    [self setPendingSelectionRequest];
    NSString* language = self.currentTextEditor.inputView.textInputMode.primaryLanguage;
    [self reportLayout:language];
    // Apple reports back the primary language of the current keyboard text input mode using BCP 47 language code i.e "en-GB"
    // but this also (undocumented) will return "dictation" when using voice dictation and "emoji" when using the emoji keyboard.
    if ([language isEqualToString: @"dictation"])
    {
        hasUsedDictation = YES;
    }
}

- (void)keyboardWillShow:(NSNotification *)notification
{
    if (notification.userInfo == nil || editView == nil)
        return;

    [self setPendingSelectionRequest];
    [self positionInput];

#if !UNITY_XCODE_PROJECT_TYPE_SWIFT
    auto appController = GetAppController();
    if (@available(iOS 16, tvOS 16, *)) {}
    else if (!appController.didResignActive) // A workaround for iPadOS 15 to fully animate keyboard after going from detached to docked
        [editView.inputView reloadInputViews];
#endif
}

- (void)reportLayout:(NSString*)layout
{
    // Under some conditions keyboardDidShow is sent multiple times in a row
    // only report layout to Unity if it actually changed
    // to avoid possibly expensive consequences
    static NSString* lastReportedLayout = nil;

    if (lastReportedLayout != layout)
    {
        lastReportedLayout = layout;
        UnityKeyboard_LayoutChanged(layout);
    }
}

- (void)keyboardDidShow:(NSNotification*)notification
{
    _active = YES;
    [self reportLayout:self.currentTextEditor.inputView.textInputMode.primaryLanguage];
}

- (void)keyboardWillHide:(NSNotification*)notification
{
    if (_keyboard)
    {
        // Reset selection to avoid selection graphics staying on the screen
        if (_keyboard.selection.length > 0)
        {
            NSRange range = NSMakeRange(_keyboard.text.length, 0);
            _keyboard.selection = range;
        }
    }
    [self reportLayout:nil];
    [self systemHideKeyboard];
}

- (void)keyboardDidHide:(NSNotification*)notification
{
    // The audio engine starts and restarts by listening to AVAudioSessionInterruptionNotifications, However
    // Apple does *not* guarantee that the AVAudioSessionInterruptionTypeEnded will be sent, especially if
    // the app is in the foreground - This can happen when using the dictate function on the keyboard
    // so we send the notification ourselves to ensure the audio restarts.
    if (hasUsedDictation)
    {
        hasUsedDictation = NO;
        [[NSNotificationCenter defaultCenter] postNotificationName: AVAudioSessionInterruptionNotification
         object: [AVAudioSession sharedInstance]
         userInfo: @{AVAudioSessionInterruptionTypeKey: [NSNumber numberWithUnsignedInteger: AVAudioSessionInterruptionTypeEnded]}];
    }
}

- (void)keyboardDidChangeFrame:(NSNotification*)notification
{
    CGRect srcRect  = [[notification.userInfo objectForKey: UIKeyboardFrameEndUserInfoKey] CGRectValue];
    CGRect rect     = [UnityGetRenderingView() convertRect: srcRect fromView: nil];

    [self reportLayout:editView.inputView.textInputMode.primaryLanguage];
    [self positionInput];
    lastKeyboardRect = rect;
}

- (void)positionInput
{
    /*
    The logic in this function and everywhere around it is extremely fragile
    When changing make sure to test:
     - Area API
     - Orientation changes
     - Size changes in Stage Manager
     - Split Screen
     - Ducking/Undocking the keyboard
     - All the combinations of all of the above
    */

    if ([self hasExternalKeyboard])
    {
        [self systemHideKeyboard];
        _active = NO;
        return;
    }

    if (!editView.inputView.isFirstResponder)
    {
        _area = CGRectMake(0, 0, 0, 0);
        _active = NO;  // in case of floating keyboard this looks to be the only place to detect it closed
        return;
    }
    UIView* unityView = UnityGetRenderingView();
    CGRect unityViewRect = unityView.frame;
    const UIEdgeInsets unityViewInsets = unityView.safeAreaInsets;
    CGRect accessoryRect = [dummyAccessoryPositionView.superview convertRect: dummyAccessoryPositionView.frame toView: unityView];
    float width = unityViewRect.size.width;
    float xPos = accessoryRect.origin.x;
    float yPos = accessoryRect.origin.y;
    const float safeAreaInsetLeft = unityViewInsets.left;
    const float safeAreaInsetRight = unityViewInsets.right;
    const float safeAreaInsetBottom = unityViewInsets.bottom;

    if (_rotating || yPos == 0)
    {
        // hacky way to reposition input view just before the screen rotation animation starts
        // this way position animates nicely throughout the screen rotation animation
        yPos = unityViewRect.size.height - safeAreaInsetBottom;
        if (_rotating)
            xPos = safeAreaInsetLeft;
    }

    // Only add safe area offset if the input bar is placed at the bottom of the view
    float offsetY = yPos == unityViewRect.size.height ? safeAreaInsetBottom : 0;

    [editView positionInputWithPosition: CGPointMake(xPos, yPos) offsetY: offsetY width: width safeArea: unityViewInsets];
    [self updateInputHidden];
    // updating area of the keyboard
    _area = CGRectMake(xPos, yPos, width - safeAreaInsetLeft - safeAreaInsetRight, unityViewRect.size.height - yPos);
    if (!editView.hidden)
        _area = CGRectUnion(_area, editView.frame);
    _active = YES;  // at this point input field is first responder, so keyboard is active
}

#endif

+ (void)Initialize
{
    NSAssert(_keyboard == nil, @"[KeyboardDelegate Initialize] called after creating keyboard");
    if (!_keyboard)
        _keyboard = [[KeyboardDelegate alloc] init];
}

+ (KeyboardDelegate*)Instance
{
    if (!_keyboard)
        _keyboard = [[KeyboardDelegate alloc] init];

    return _keyboard;
}

+ (void)Destroy
{
    _keyboard = nil;
}

- (id)init
{
    NSAssert(_keyboard == nil, @"You can have only one instance of KeyboardDelegate");
    self = [super init];
    if (self)
    {
        auto nc = NSNotificationCenter.defaultCenter;

#if PLATFORM_TVOS || PLATFORM_VISIONOS
        _singleLineView = [UnitySingleLineEditView new];
#endif
#if PLATFORM_VISIONOS
        _multilineView = [UnityMultilineEditView new];
#endif

#if PLATFORM_IOS
        UnityKeyboardButtonSetup buttonSetup;
        buttonSetup.target = self;
        buttonSetup.doneAction = @selector(textInputDone:);
        buttonSetup.cancelAction = @selector(textInputCancel:);

        // Default position ensures the input view slides from the bottom of the screen together with the keyboard
        CGSize windowSize = [UnityGetGLView() bounds].size;

        _singleLineView = [KeyboardDelegate createSinglelineEditWithButtonSetup: buttonSetup];
        _multilineView = [KeyboardDelegate createMultilineEditWithButtonSetup: buttonSetup];

        dummyAccessoryPositionView = [[UIView alloc] initWithFrame: CGRectMake(0, windowSize.height, 0, 0)];
        dummyAccessoryPositionView.backgroundColor = [UIColor clearColor];
        dummyAccessoryPositionView.userInteractionEnabled = NO;
        dummyAccessoryPositionView.translatesAutoresizingMaskIntoConstraints = NO;

        _multilineView.multilineEditView.inputAccessoryView = dummyAccessoryPositionView;
        _singleLineView.singlelineEditView.inputAccessoryView = dummyAccessoryPositionView;
#endif

        _singleLineView.singlelineEditView.delegate = self;
        _singleLineView.hidden = YES;

#if PLATFORM_IOS || PLATFORM_VISIONOS
        _multilineView.multilineEditView.delegate = self;
        _multilineView.hidden = YES;

        [nc addObserver: self selector: @selector(keyboardWillShow:) name: UIKeyboardWillShowNotification object: nil];
        [nc addObserver: self selector: @selector(keyboardDidShow:) name: UIKeyboardDidShowNotification object: nil];
        [nc addObserver: self selector: @selector(keyboardWillHide:) name: UIKeyboardWillHideNotification object: nil];
        [nc addObserver: self selector: @selector(keyboardDidHide:) name: UIKeyboardDidHideNotification object: nil];
        [nc addObserver: self selector: @selector(keyboardDidChangeFrame:) name: UIKeyboardDidChangeFrameNotification object: nil];
        [nc addObserver: self selector: @selector(textInputModeDidChange:) name: UITextInputCurrentInputModeDidChangeNotification object: nil];

        [_singleLineView.inputView addTarget: self action: @selector(textFieldDidChange:) forControlEvents: UIControlEventEditingChanged];
#endif

        [nc addObserver: self selector: @selector(keyboardDidConnect:) name: GCKeyboardDidConnectNotification object: nil];
        [nc addObserver: self selector: @selector(textInputDone:) name: UITextFieldTextDidEndEditingNotification object: nil];
        [nc addObserver: self selector: @selector(textInputDone:) name: UITextViewTextDidEndEditingNotification object: nil];
    }

    return self;
}

#if PLATFORM_IOS
+ (UIView<UnityKeyboardEditView, UnityMultilineEdit>*)createMultilineEditWithButtonSetup: (UnityKeyboardButtonSetup)setup
{
#if PLATFORM_IOS && UNITY_HAS_IOSSDK_26_0
    if (@available(iOS 26.0, *))
    {
        return [UnityMultilineEditViewSDK26 createWithButtonSetup: setup];
    }
#endif

    return [UnityMultilineEditView createWithButtonSetup: setup];
}

+ (UIView<UnityKeyboardEditView, UnitySingleLineEdit>*)createSinglelineEditWithButtonSetup: (UnityKeyboardButtonSetup)setup
{
#if PLATFORM_IOS && UNITY_HAS_IOSSDK_26_0
    if (@available(iOS 26.0, *))
    {
        return [UnitySingleLineEditViewSDK26 createWithButtonSetup: setup];
    }
#endif

    return [UnitySingleLineEditView createWithButtonSetup: setup];
}
#endif

- (void)updateInputPosition
{
#if PLATFORM_IOS
    // Needed for updating keyboard when resizing the view in stage manager and orientation change

    if (!self.active)
        return;
    if (editView == nil || editView.inputView.isFirstResponder == NO)
    {
        // fix the state, no input active edit view means keyboard is not active
        _active = NO;
        _area = CGRectMake(0, 0, 0, 0);
        return;
    }
    if (editView.hidden == YES)
        return;  // hidden input, no positioning required

    auto unityView = UnityGetGLView();
    const auto unitySize = unityView.frame.size;
    const auto accessoryPos = [dummyAccessoryPositionView.superview convertRect:dummyAccessoryPositionView.frame toView:unityView].origin;
    if (cachedUnityViewSize.width == unitySize.width && cachedUnityViewSize.height == unitySize.height
        && cachedAccessoryPosition.x == accessoryPos.x && cachedAccessoryPosition.y == accessoryPos.y)
        return;

    cachedUnityViewSize = unitySize;
    cachedAccessoryPosition = accessoryPos;
    [self positionInput];
    // after rotation accessory position gets a bit off on iPhone iOS 26, reloading fixes it
    [editView.inputView reloadInputViews];
#endif
}

- (void)keyboardDidConnect:(NSNotification *)notification {
    [self systemHideKeyboard];
}

- (void)setTextInputTraits:(id<UITextInputTraits>)traits
    withParam:(KeyboardShowParam)param
{
    UITextAutocapitalizationType capitalization = [KeyboardDelegate capitalizationForKeyboardParam: param];

    if (!_inputHidden)
        traits.secureTextEntry = param.secure;
    if (param.secure)
    {
        traits.autocorrectionType = UITextAutocorrectionTypeNo;
        traits.spellCheckingType  = UITextSpellCheckingTypeNo;
        traits.autocapitalizationType = UITextAutocapitalizationTypeNone;
    }
    else
    {
        traits.autocorrectionType = param.autocorrectionType;
        traits.spellCheckingType  = param.spellcheckingType;
        traits.autocapitalizationType = capitalization;
    }
    traits.keyboardType = param.keyboardType;
    traits.keyboardAppearance = param.appearance;
}

+ (UITextAutocapitalizationType)capitalizationForKeyboardParam:(KeyboardShowParam)param
{
    if (param.secure)
        return UITextAutocapitalizationTypeNone;

    UITextAutocapitalizationType capitalization;
    switch (param.keyboardType)
    {
        case UIKeyboardTypeURL:
        case UIKeyboardTypeEmailAddress:
        case UIKeyboardTypeWebSearch:
            capitalization = UITextAutocapitalizationTypeNone;
            break;
        default:
            capitalization = UITextAutocapitalizationTypeSentences;
    }

    return capitalization;
}

- (void)setKeyboardParams:(KeyboardShowParam)param
{
#if PLATFORM_IOS
    if (@available(iOS 26, *))
    {
        if (UIDevice.currentDevice.userInterfaceIdiom == UIUserInterfaceIdiomPad)
        {
            // iOS bug: number/phone pad have special behavior that leads to crash with floating keyboard in windowed mode
            //   input field activation shows minimalist overlay bubble, tapping ouside which dismissed it
            //   the keyboard only opens on tapping the input field again,
            //    but if accessory view is set on field, it crashes inside Apple code
            // plus did not find a way to detect when first bubble is dismissed (it's keyboard close from our perspective)
            switch (param.keyboardType)
            {
                case UIKeyboardTypeDecimalPad:
                case UIKeyboardTypePhonePad:
                case UIKeyboardTypeNumberPad:
                    param.keyboardType = UIKeyboardTypeNumbersAndPunctuation;
                    break;
                default:
                    break;
            }
        }
    }
#endif

    [NSObject cancelPreviousPerformRequestsWithTarget: self];
    if (cachedKeyboardParam.multiline != param.multiline ||
        cachedKeyboardParam.secure != param.secure ||
        cachedKeyboardParam.keyboardType != param.keyboardType ||
        cachedKeyboardParam.autocorrectionType != param.autocorrectionType ||
        cachedKeyboardParam.appearance != param.appearance)
    {
        [self hideUIDelayed];
    }

    cachedKeyboardParam = param;

    if (_active)
        [self hide];

    initialText = param.text ? [[NSString alloc] initWithUTF8String: param.text] : @"";

    _characterLimit = param.characterLimit;

#if PLATFORM_IOS || PLATFORM_VISIONOS
    _multiline = param.multiline;
    if (_multiline)
    {
        [self setTextInputTraits: _multilineView.inputView withParam: param];
    }
    else
    {
        if (param.oneTimeCode)
            _singleLineView.singlelineEditView.textContentType = UITextContentTypeOneTimeCode;

        [self setTextInputTraits: _singleLineView.inputView withParam: param];
        _singleLineView.singlelineEditView.placeholder = [NSString stringWithUTF8String: param.placeholder];
    }

    // editView is a "container" for both signle and multiline now and is never expected to be a textField
    editView = _multiline ? _multilineView : _singleLineView;

    // Initially hide input fields in case external keyboard is connected.
    // This is needed for certain cases where external keyboard is connected
    // and soft keyboard is reopened without closing it first.
    // If external keyboard does not exist, these values will be updated by keyboardWillShow
    editView.hidden = YES;

#else // PLATFORM_TVOS
    [self setTextInputTraits: _singleLineView.inputView withParam: param];
    _singleLineView.singlelineEditView.placeholder = [NSString stringWithUTF8String: param.placeholder];
    editView = _singleLineView;
#endif

    [self shouldHideInput: _shouldHideInput];

    [KeyboardDelegate Instance].text = initialText;

    _status = kUnityKeyboardStatusVisible;
    UnityKeyboard_StatusChanged(_status);
    _active = !self.hasExternalKeyboard;
    _selectionRequest.location = NSNotFound;
}

// we need to show/hide keyboard to react to orientation too, so extract we extract UI fiddling

- (void)showUI
{
    // if we unhide everything now the input will be shown smaller then needed quickly (and resized later)
    // so unhide only when keyboard is actually shown (we will update it when reacting to ios notifications)
    [NSObject cancelPreviousPerformRequestsWithTarget: self];
    if (!editView.inputView.isFirstResponder)
    {
        editView.hidden = YES;

        UIView* unityView = UnityGetRenderingView();
        [unityView addSubview: editView];
        [editView.inputView becomeFirstResponder];


#if PLATFORM_TVOS
        // make keyboard usable via controller by allowing exit to home temporarily
        // val 3, as second lowest bit indicates a temporary disable
        if (UnityGetAppleTVRemoteAllowExitToMenu() == 0)
            UnitySetAppleTVRemoteAllowExitToMenu(3);
#endif
    }

    // we need to reload input views when switching the keyboard type for already active keyboard
    // otherwise the changed traits may not be immediately applied
    editView.hidden = self.inputHidden;
    [editView.inputView reloadInputViews];
}

- (BOOL)inputHidden
{
    if (self.hasExternalKeyboard)
        return YES;
    return _inputHidden;
}

- (void)hideUI
{
    [NSObject cancelPreviousPerformRequestsWithTarget: self];
    [self performSelector: @selector(hideUIDelayed) withObject: nil afterDelay: 0.05]; // to avoid unnecessary hiding
}

- (void)hideUIDelayed
{
    [editView.inputView resignFirstResponder];

    [editView removeFromSuperview];
    editView.hidden = YES;

    // Keyboard notifications are not supported on tvOS so keyboardWillHide: will never be called which would set _active to false.
    // To work around that limitation we will update _active from here.
    #if PLATFORM_TVOS
    BOOL wasActive = _active;
    _active = editView.isFirstResponder;
    // if closing, restore exit value to what it was (getter ignores temp value and returns what it is meant to be)
    if (!_active && wasActive)
        UnitySetAppleTVRemoteAllowExitToMenu(UnityGetAppleTVRemoteAllowExitToMenu());
    #endif
}

- (void)systemHideKeyboard
{
    // when we are rotating os will bombard us with keyboardWillHide: and keyboardDidChangeFrame:
    // ignore all of them (we do it here only to simplify code: we call systemHideKeyboard only from these notification handlers)
    if (_rotating)
        return;

    _active = editView.isFirstResponder;
    editView.hidden = YES;
    // Default position ensures the input view slides from the bottom of the screen together with the keyboard
    CGSize windowSize = [UnityGetRenderingView() frame].size;
    editView.frame = CGRectMake(0, windowSize.height, editView.frame.size.width, editView.frame.size.height);
    _area = CGRectMake(0, 0, 0, 0);
    lastKeyboardRect = CGRectMake(0, 0, 0, 0);
}

- (void)show
{
    _status = kUnityKeyboardStatusVisible;
    [self showUI];
}

- (void)hide
{
    [self hideUI];
}

- (void)updateInputHidden
{
    if (_shouldHideInputChanged)
    {
        [self shouldHideInput: _shouldHideInput];
        _shouldHideInputChanged = false;
    }

    self.getTextField.returnKeyType = _inputHidden ? UIReturnKeyDone : UIReturnKeyDefault;
    editView.hidden = self.inputHidden;
    [self setTextInputTraits: self.getTextField withParam: cachedKeyboardParam];

    #if PLATFORM_IOS

    // accessibility setup for input view
    // if Unity Accessibility module is used with custom hierarchy, we need to manually manipulate elements
    UIView* unityView = UnityGetGLView();
    NSArray* accessibleElements = unityView.accessibilityElements;
    BOOL editViewAccessible = [accessibleElements containsObject:editView];
    // avoid manipulating if already correct: accessible when input is shown, not otherwise
    if (editViewAccessible == _inputHidden)
    {
        NSMutableArray* newAccessibleElements = accessibleElements.mutableCopy;
        if (_inputHidden)
            [newAccessibleElements removeObject:editView];
        else
            [newAccessibleElements addObject:editView];
        unityView.accessibilityElements = newAccessibleElements;
    }

    #endif
}

- (CGRect)queryArea
{
    return _area;
}

- (id<UnityKeyboardEditView>)currentTextEditor
{
#if !PLATFORM_TVOS
    if (_multiline)
        return _multilineView;
#endif
    return _singleLineView;
}

- (NSRange)querySelection
{
    auto textInput = self.currentTextEditor.inputView;

    UITextPosition* beginning = textInput.beginningOfDocument;

    UITextRange* selectedRange = textInput.selectedTextRange;
    UITextPosition* selectionStart = selectedRange.start;
    UITextPosition* selectionEnd = selectedRange.end;

    const NSInteger location = [textInput offsetFromPosition: beginning toPosition: selectionStart];
    const NSInteger length = [textInput offsetFromPosition: selectionStart toPosition: selectionEnd];

    return NSMakeRange(location, length);
}

- (void)assignSelection:(NSRange)range
{
    auto textInput = self.currentTextEditor.inputView;

    UITextPosition* begin = [textInput beginningOfDocument];
    UITextPosition* caret = [textInput positionFromPosition: begin offset: range.location];
    UITextPosition* select = [textInput positionFromPosition: caret offset: range.length];
    UITextRange* textRange = [textInput textRangeFromPosition: caret toPosition: select];

    [textInput setSelectedTextRange: textRange];
    if (_inputHidden)
        _hiddenSelection = range;
    _selectionRequest = range;
}

+ (void)StartReorientation
{
    if (_keyboard && _keyboard.active)
    {
        _keyboard->_rotating = YES;
    }
}

+ (void)FinishReorientation
{
    if (_keyboard && _keyboard.active)
    {
        _keyboard->_rotating = NO;
#if PLATFORM_IOS || PLATFORM_VISIONOS
        _keyboard->editView.hidden = _keyboard.inputHidden;
#endif
    }
}

- (NSString*)getText
{
    if (_status == kUnityKeyboardStatusCanceled)
        return initialText;

    return self.currentTextEditor.text;
}

- (void)setText:(NSString*)newText
{
    self.currentTextEditor.text = newText;

    // for hidden selection place cursor at the end when text changes
    _hiddenSelection.location = newText.length;
    _hiddenSelection.length = 0;
}

- (void)setKeyboardText:(NSString*)newText
{
    initialText = newText;
    self.text = newText;
}

- (void)shouldHideInput:(BOOL)hide
{
    if (hide)
    {
        switch (keyboardType)
        {
            case UIKeyboardTypeDefault:                 hide = YES; break;
            case UIKeyboardTypeASCIICapable:            hide = YES; break;
            case UIKeyboardTypeNumbersAndPunctuation:   hide = YES; break;
            case UIKeyboardTypeURL:                     hide = YES; break;
            case UIKeyboardTypeNumberPad:               hide = NO;  break;
            case UIKeyboardTypePhonePad:                hide = NO;  break;
            case UIKeyboardTypeNamePhonePad:            hide = NO;  break;
            case UIKeyboardTypeEmailAddress:            hide = YES; break;
            case UIKeyboardTypeTwitter:                 hide = YES; break;
            case UIKeyboardTypeWebSearch:               hide = YES; break;
            case UIKeyboardTypeDecimalPad:              hide = NO; break;
            default:                                    hide = NO;  break;
        }
    }

    _inputHidden = hide;
}

- (BOOL)hasExternalKeyboard
{
    return [GCKeyboard coalescedKeyboard] != nil;
}

- (UITextField*)getTextField
{
    return _singleLineView.singlelineEditView;
}

static bool StringContainsEmoji(NSString *string);
- (BOOL)textField:(UITextField*)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString*)string_
{
    BOOL stringContainsEmoji = NO;

#if FILTER_EMOJIS_IOS_KEYBOARD
    stringContainsEmoji = StringContainsEmoji(string_);
#endif

    if (range.length + range.location > textField.text.length)
        return NO;

    return [self currentText: textField.text shouldChangeInRange: range replacementText: string_] && !stringContainsEmoji;
}

- (BOOL)textView:(UITextView*)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString*)text_
{
    BOOL stringContainsEmoji = NO;

#if FILTER_EMOJIS_IOS_KEYBOARD
    stringContainsEmoji = StringContainsEmoji(text_);
#endif

    if (range.length + range.location > textView.text.length)
        return NO;

    return [self currentText: textView.text shouldChangeInRange: range replacementText: text_] && !stringContainsEmoji;
}

- (BOOL)currentText:(NSString*)currentText shouldChangeInRange:(NSRange)range  replacementText:(NSString*)text_
{
    NSUInteger newLength = currentText.length + (text_.length - range.length);

    if (newLength > _characterLimit && _characterLimit != 0 && newLength >= currentText.length)
    {
        // If the user inserts any emoji that exceeds the character limit it should quickly reject it, else it'll crash. We need to check regardless of FILTER_EMOJIS_IOS_KEYBOARD status as sometimes this method gets called before we've filtered out an emoji.
        if (StringContainsEmoji(text_))
            return NO;

        NSString* newReplacementText = @"";
        if ((currentText.length - range.length) < _characterLimit)
            newReplacementText = [text_ substringWithRange: NSMakeRange(0, _characterLimit - (currentText.length - range.length))];

        NSString* newText = [currentText stringByReplacingCharactersInRange: range withString: newReplacementText];
        self.currentTextEditor.text = newText;

        // If we're trying to exceed the max length of the field BUT the text can merge into
        // precomposed characters then we should allow the input.
        NSString* precomposedNewText = [currentText precomposedStringWithCompatibilityMapping];
        __block int count = 0;
        [precomposedNewText enumerateSubstringsInRange: NSMakeRange(0, [precomposedNewText length]) options: NSStringEnumerationByComposedCharacterSequences
         usingBlock: ^(NSString *inSubstring, NSRange inSubstringRange, NSRange inEnclosingRange, BOOL *outStop) {
             count++;
         }];
        // count of characters of precomposed string will equal the character limit
        // if there has been characters merged bringing us under the limit.
        return count <= _characterLimit;
    }
    else
    {
        if (_inputHidden && _hiddenSelection.length > 0)
        {
            NSString* newText = [currentText stringByReplacingCharactersInRange: _hiddenSelection withString: text_];
            self.currentTextEditor.text = newText;
            _hiddenSelection.location = _hiddenSelection.location + text_.length;
            _hiddenSelection.length = 0;
            self.selection = _hiddenSelection;
            return NO;
        }

        _hiddenSelection.location = range.location + text_.length;
        _hiddenSelection.length = 0;
        return YES;
    }
}

@end

//==============================================================================
//
//  Swift Interface:

extern "C" void KeyboardStartReorientation()
{
    [KeyboardDelegate StartReorientation];
}

extern "C" void KeyboardFinishReorientation()
{
    [KeyboardDelegate FinishReorientation];
}

extern "C" void KeyboardUpdatePosition()
{
    [KeyboardDelegate.Instance updateInputPosition];
}

//==============================================================================
//
//  Unity Interface:

extern "C" void UnityKeyboard_Create(unsigned keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, const char* text, const char* placeholder, int characterLimit)
{
#if PLATFORM_TVOS
    // Not supported. The API for showing keyboard for editing multi-line text is not available on tvOS
    multiline = false;
#endif

    static const UIKeyboardType keyboardTypes[] =
    {
        UIKeyboardTypeDefault,
        UIKeyboardTypeASCIICapable,
        UIKeyboardTypeNumbersAndPunctuation,
        UIKeyboardTypeURL,
        UIKeyboardTypeNumberPad,
        UIKeyboardTypePhonePad,
        UIKeyboardTypeNamePhonePad,
        UIKeyboardTypeEmailAddress,
        UIKeyboardTypeDefault, // Default is used in case Wii U specific NintendoNetworkAccount type is selected (indexed at 8 in UnityEngine.TouchScreenKeyboardType)
        UIKeyboardTypeTwitter,
        UIKeyboardTypeWebSearch,
        UIKeyboardTypeDecimalPad,
        UIKeyboardTypeNumberPad, // Keyboard type 12, OneTimeCode, does not directly translate to a UIKeyboardType.
    };

    const auto maxKeyboardType = sizeof(keyboardTypes) /  sizeof(UIKeyboardTypeDefault) - 1;
    if (keyboardType > maxKeyboardType)
    {
        assert(false && "Unsupported keyboard type");
        keyboardType = 0;
    }

    // on iOS 15, QuickType bar was decoupled from autocorrection (so it still shows candidates)
    // for a principle of "the least surprise" we keep it coupled internally, so autocorrection == spellchecking
    // TODO: should we expose the control of it?
    KeyboardShowParam param =
    {
        text, placeholder,
        keyboardTypes[keyboardType],
        autocorrection ? UITextAutocorrectionTypeDefault : UITextAutocorrectionTypeNo,
        autocorrection ? UITextSpellCheckingTypeDefault : UITextSpellCheckingTypeNo,
        alert ? UIKeyboardAppearanceAlert : UIKeyboardAppearanceDefault,
        multiline, secure,
        characterLimit,
        keyboardType == 12
    };

    [[KeyboardDelegate Instance] setKeyboardParams: param];
}

extern "C" void UnityKeyboard_Show()
{
    // do not send hide if didnt create keyboard
    // TODO: probably assert?
    if (!_keyboard)
        return;

    [[KeyboardDelegate Instance] show];
}

extern "C" void UnityKeyboard_Hide()
{
    // do not send hide if didnt create keyboard
    // TODO: probably assert?
    if (!_keyboard)
        return;

    [[KeyboardDelegate Instance] textInputLostFocus];
}

extern "C" void UnityKeyboard_SetText(const char* text)
{
    [KeyboardDelegate.Instance setKeyboardText:[NSString stringWithUTF8String:text]];
}

extern "C" NSString* UnityKeyboard_GetText()
{
    return [KeyboardDelegate Instance].text;
}

extern "C" bool UnityKeyboard_IsActive()
{
    return _keyboard && _keyboard.active;
}

extern "C" UnityKeyboardStatus UnityKeyboard_Status()
{
    return _keyboard ? _keyboard.status : kUnityKeyboardStatusCanceled;
}

extern "C" void UnityKeyboard_SetInputHidden(bool hidden)
{
    if (_shouldHideInput == hidden)
        return;

    _shouldHideInput        = hidden;
    _shouldHideInputChanged = true;

    // update hidden status only if keyboard is on screen to avoid showing input view out of nowhere
    if (_keyboard && _keyboard.active)
        [_keyboard updateInputHidden];
}

extern "C" bool UnityKeyboard_IsInputHidden()
{
    return _shouldHideInput;
}

extern "C" void UnityKeyboard_GetRect(float& x, float& y, float& w, float& h)
{
    CGRect area = _keyboard ? _keyboard.area : CGRectMake(0, 0, 0, 0);

    unsigned renderingWidth, renderingHeight;
    UnityGetRenderingResolution(&renderingWidth, &renderingHeight);

    // convert to unity coord system
    float   multX   = (float)renderingWidth / UnityGetRenderingView().bounds.size.width;
    float   multY   = (float)renderingHeight / UnityGetRenderingView().bounds.size.height;

    x = 0;
    y = area.origin.y * multY;
    w = area.size.width * multX;
    h = area.size.height * multY;
}

extern "C" void UnityKeyboard_SetCharacterLimit(unsigned characterLimit)
{
    [KeyboardDelegate Instance].characterLimit = characterLimit;
}

extern "C" bool UnityKeyboard_CanGetSelection()
{
    return _keyboard;
}

extern "C" void UnityKeyboard_GetSelection(int* location, int* length)
{
    if (_keyboard)
    {
        NSRange selection = _keyboard.selection;

        *location = (int)selection.location;
        *length = (int)selection.length;
    }
    else
    {
        *location = 0;
        *length = 0;
    }
}

extern "C" bool UnityKeyboard_CanSetSelection()
{
    return _keyboard;
}

extern "C" void UnityKeyboard_SetSelection(int location, int length)
{
    if (_keyboard)
    {
        _keyboard.selection = NSMakeRange(location, length);
    }
}

//==============================================================================
//
//  Emoji Filtering: unicode magic

static bool StringContainsEmoji(NSString *string)
{
    __block BOOL returnValue = NO;

    [string enumerateSubstringsInRange: NSMakeRange(0, string.length)
 options: NSStringEnumerationByComposedCharacterSequences
 usingBlock:^(NSString* substring, NSRange substringRange, NSRange enclosingRange, BOOL* stop)
    {
        const unichar hs = [substring characterAtIndex: 0];
        const unichar ls = substring.length > 1 ? [substring characterAtIndex: 1] : 0;

            #define IS_IN(val, min, max) (((val) >= (min)) && ((val) <= (max)))

        if (IS_IN(hs, 0xD800, 0xDBFF))
        {
            if (substring.length > 1)
            {
                const int uc = ((hs - 0xD800) * 0x400) + (ls - 0xDC00) + 0x10000;

                // Musical: [U+1D000, U+1D24F]
                // Enclosed Alphanumeric Supplement: [U+1F100, U+1F1FF]
                // Enclosed Ideographic Supplement: [U+1F200, U+1F2FF]
                // Miscellaneous Symbols and Pictographs: [U+1F300, U+1F5FF]
                // Supplemental Symbols and Pictographs: [U+1F900, U+1F9FF]
                // Emoticons: [U+1F600, U+1F64F]
                // Transport and Map Symbols: [U+1F680, U+1F6FF]
                if (IS_IN(uc, 0x1D000, 0x1F9FF))
                    returnValue = YES;
            }
        }
        else if (substring.length > 1 && ls == 0x20E3)
        {
            // emojis for numbers: number + modifier ls = U+20E3
            returnValue = YES;
        }
        else
        {
            if (        // Latin-1 Supplement
                hs == 0x00A9 || hs == 0x00AE
                // General Punctuation
                ||  hs == 0x203C || hs == 0x2049
                // Letterlike Symbols
                ||  hs == 0x2122 || hs == 0x2139
                // Arrows
                ||  IS_IN(hs, 0x2194, 0x2199) || IS_IN(hs, 0x21A9, 0x21AA)
                // Miscellaneous Technical
                ||  IS_IN(hs, 0x231A, 0x231B) || IS_IN(hs, 0x23E9, 0x23F3) || IS_IN(hs, 0x23F8, 0x23FA) || hs == 0x2328 || hs == 0x23CF
                // Geometric Shapes
                ||  IS_IN(hs, 0x25AA, 0x25AB) || IS_IN(hs, 0x25FB, 0x25FE) || hs == 0x25B6 || hs == 0x25C0
                // Miscellaneous Symbols
                ||  IS_IN(hs, 0x2600, 0x2604) || IS_IN(hs, 0x2614, 0x2615) || IS_IN(hs, 0x2622, 0x2623) || IS_IN(hs, 0x262E, 0x262F)
                ||  IS_IN(hs, 0x2638, 0x263A) || IS_IN(hs, 0x2648, 0x2653) || IS_IN(hs, 0x2665, 0x2666) || IS_IN(hs, 0x2692, 0x2694)
                ||  IS_IN(hs, 0x2696, 0x2697) || IS_IN(hs, 0x269B, 0x269C) || IS_IN(hs, 0x26A0, 0x26A1) || IS_IN(hs, 0x26AA, 0x26AB)
                ||  IS_IN(hs, 0x26B0, 0x26B1) || IS_IN(hs, 0x26BD, 0x26BE) || IS_IN(hs, 0x26C4, 0x26C5) || IS_IN(hs, 0x26CE, 0x26CF)
                ||  IS_IN(hs, 0x26D3, 0x26D4) || IS_IN(hs, 0x26D3, 0x26D4) || IS_IN(hs, 0x26E9, 0x26EA) || IS_IN(hs, 0x26F0, 0x26F5)
                ||  IS_IN(hs, 0x26F7, 0x26FA)
                ||  hs == 0x260E || hs == 0x2611 || hs == 0x2618 || hs == 0x261D || hs == 0x2620 || hs == 0x2626 || hs == 0x262A
                ||  hs == 0x2660 || hs == 0x2663 || hs == 0x2668 || hs == 0x267B || hs == 0x267F || hs == 0x2699 || hs == 0x26C8
                ||  hs == 0x26D1 || hs == 0x26FD
                // Dingbats
                ||  IS_IN(hs, 0x2708, 0x270D) || IS_IN(hs, 0x2733, 0x2734) || IS_IN(hs, 0x2753, 0x2755)
                ||  IS_IN(hs, 0x2763, 0x2764) || IS_IN(hs, 0x2795, 0x2797)
                ||  hs == 0x2702 || hs == 0x2705 || hs == 0x270F || hs == 0x2712 || hs == 0x2714 || hs == 0x2716 || hs == 0x271D
                ||  hs == 0x2721 || hs == 0x2728 || hs == 0x2744 || hs == 0x2747 || hs == 0x274C || hs == 0x274E || hs == 0x2757
                ||  hs == 0x27A1 || hs == 0x27B0 || hs == 0x27BF
                // CJK Symbols and Punctuation
                ||  hs == 0x3030 || hs == 0x303D
                // Enclosed CJK Letters and Months
                ||  hs == 0x3297 || hs == 0x3299
                // Supplemental Arrows-B
                ||  IS_IN(hs, 0x2934, 0x2935)
                // Miscellaneous Symbols and Arrows
                ||  IS_IN(hs, 0x2B05, 0x2B07) || IS_IN(hs, 0x2B1B, 0x2B1C) || hs == 0x2B50 || hs == 0x2B55
            )
            {
                returnValue = YES;
            }
        }

            #undef IS_IN
    }];

    return returnValue;
}
