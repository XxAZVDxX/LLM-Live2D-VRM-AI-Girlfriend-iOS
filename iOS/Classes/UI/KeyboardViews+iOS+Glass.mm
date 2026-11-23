#import "KeyboardViews+iOS+Glass.h"
#if UNITY_XCODE_PROJECT_TYPE_SWIFT
#import <UnityRuntime/UnityInternalInterface.h>
#endif

#if PLATFORM_IOS

static const unsigned kButtonHeight = 48;
static const unsigned kButtonSpacing = 10;
static const unsigned kButtonSpacingMultiline = 16;
static const unsigned kButtonHeightMultiline = 44;
static const unsigned kVerticalGapMultiline = 10;


@implementation UnityGlassView
{
    CGFloat _xPadding, _yPadding;
}

+ (instancetype)createForView:(UIView*)view
{
    return [UnityGlassView createForView: view xPadding: 0 yPadding: 0];
}

+ (instancetype)createForView:(UIView*)view xPadding:(CGFloat)xpadding yPadding:(CGFloat)ypadding
{
    return [[UnityGlassView alloc] initWithView: view xPadding: xpadding yPadding: ypadding];
}

- (instancetype)initWithView:(UIView*)view  xPadding:(CGFloat)xpadding yPadding:(CGFloat)ypadding
{
#if PLATFORM_IOS && UNITY_HAS_IOSSDK_26_0
    UIGlassEffect *glass = [UIGlassEffect effectWithStyle: UIGlassEffectStyleRegular];
    self = [self initWithEffect: glass];
    _innerView = view;
    _xPadding = xpadding;
    _yPadding = ypadding;
    [self.contentView addSubview: view];
    return self;
#else
    return nil;
#endif
}

- (void)setFrame:(CGRect)frame
{
    [super setFrame: frame];
    auto innerViewFrame = self.bounds;
    innerViewFrame.origin = CGPointMake(_xPadding, _yPadding);
    innerViewFrame.size.width = frame.size.width - _xPadding * 2;
    innerViewFrame.size.height = frame.size.height - _yPadding * 2;
    _innerView.frame = innerViewFrame;
}

@end


// -----------------------------------


@implementation UnitySingleLineEditViewSDK26
{
    UnityGlassView* _editView;
    UIView* _buttonView;
}

+ (instancetype)createWithButtonSetup:(UnityKeyboardButtonSetup)setup
{
    return [[UnitySingleLineEditViewSDK26 alloc] initWithButtonSetup: setup];
}

- (instancetype)initWithButtonSetup:(UnityKeyboardButtonSetup)setup
{
    self = [super init];

    auto textField = [UITextField new];
    textField.frame = CGRectMake(0, 0, 0, kButtonHeight);
    textField.font = [UIFont systemFontOfSize: kUnityKeyboardSingleLineFontSize];
    textField.clearButtonMode = UITextFieldViewModeWhileEditing;

    _editView = [UnityGlassView createForView: textField xPadding: 12 yPadding: 0];
    _editView.layer.cornerRadius = kButtonHeight / 2;
    [self addSubview: _editView];

    auto cancel = [UnitySingleLineEditViewSDK26 cancelButtonWithSetup: setup size: kButtonHeight];
    auto done = [UnitySingleLineEditViewSDK26 doneButtonWithSetup: setup size: kButtonHeight];
    auto doneFrame = done.frame;
    doneFrame.origin.x = kButtonHeight + kButtonSpacing;
    done.frame = doneFrame;
    auto stack = [[UIView alloc] initWithFrame: CGRectMake(0, 0, kButtonHeight + doneFrame.origin.x, kButtonHeight)];
    [stack addSubview: cancel];
    [stack addSubview: done];
    _buttonView = stack;
    [self addSubview: stack];

    // place at the bottom of the screen, otherwise it's zero size in the corner and animates down on first show
    auto unityViewSize = UnityGetGLView().frame.size;
    [self positionInputWithPosition: CGPointMake(0, unityViewSize.height) offsetY: 0 width: unityViewSize.width safeArea: UIEdgeInsetsMake(0, 0, 0, 0)];

    return self;
}

+ (UIButton*)glassButtonWithIcon: (NSString*)iconName target: (id)target action: (SEL)action size: (unsigned)size
{
    const auto buttonSize = CGRectMake(0, 0, size, size);
    auto button = [UIButton systemButtonWithImage: [UIImage systemImageNamed:iconName] target: target action: action];
    button.frame = buttonSize;
    return button;
}

+ (UIView*)doneButtonWithSetup: (UnityKeyboardButtonSetup)setup size: (unsigned)size
{
#if PLATFORM_IOS && UNITY_HAS_IOSSDK_26_0
    auto done = [UnitySingleLineEditViewSDK26 glassButtonWithIcon:@"checkmark" target:setup.target action:setup.doneAction size:size];
    done.configuration = UIButtonConfiguration.prominentGlassButtonConfiguration;
    done.accessibilityLabel = @"done";
    done.accessibilityHint = @"Input is done";
    return done;
#else
    return nil;
#endif
}

+ (UIView*)cancelButtonWithSetup: (UnityKeyboardButtonSetup)setup size: (unsigned)size
{
#if PLATFORM_IOS && UNITY_HAS_IOSSDK_26_0
    auto cancel = [UnitySingleLineEditViewSDK26 glassButtonWithIcon:@"xmark" target:setup.target action:setup.cancelAction size:size];
    cancel.configuration = UIButtonConfiguration.glassButtonConfiguration;
    cancel.accessibilityLabel = @"cancel";
    cancel.accessibilityHint = @"Cancel input";
    return cancel;
#else
    return nil;
#endif
}

- (UIView<UITextInput>*)inputView
{
    return (UIView<UITextInput>*)_editView.innerView;
}

- (NSString*)getText
{
    return self.singlelineEditView.text;
}

- (void)setText: (NSString*)newText
{
    self.singlelineEditView.text = newText;
}

- (UITextField*)singlelineEditView
{
    return (UITextField*)self.inputView;
}

- (void)positionInputWithPosition:(CGPoint)position offsetY:(CGFloat)offsetY width:(CGFloat)width safeArea:(UIEdgeInsets)safeArea
{
    const auto safeAreaInsetLeft = safeArea.left;
    const auto safeAreaInsetRight = safeArea.right;

    const auto xPos = position.x + safeAreaInsetLeft;
    // subtract button spacing to have a same gap from keyboard or screen bottom as from sides
    const auto yPos = position.y - kButtonHeight - offsetY - kButtonSpacing;
    width = width - safeAreaInsetLeft - safeAreaInsetRight;
    self.frame  = CGRectMake(xPos, yPos, width, kButtonHeight);

    auto buttonViewFrame = _buttonView.frame;
    buttonViewFrame.origin.x = width - buttonViewFrame.size.width - kButtonSpacing;
    _buttonView.frame = buttonViewFrame;

    width = width - buttonViewFrame.size.width - kButtonSpacing * 3;
    auto editFrame = _editView.frame;
    editFrame.origin.x = kButtonSpacing;
    editFrame.size.width = width;
    _editView.frame = CGRectMake(editFrame.origin.x, editFrame.origin.y, width, kButtonHeight);
}

@end


// -----------------------------------


API_AVAILABLE(ios(26))
@interface UnityMultilineEditLayoutSDK26 : UIView

@property (readonly) UITextView* input;
@property (readonly) CGFloat requiredHeight;

@end

@implementation UnityMultilineEditLayoutSDK26
{
    UIView* _doneButton;
    UIView* _cancelButton;
}

+ (instancetype)createWithButtonSetup: (UnityKeyboardButtonSetup)setup
{
    return [[UnityMultilineEditLayoutSDK26 alloc] initWithButtonSetup: setup];
}

- (instancetype)initWithButtonSetup: (UnityKeyboardButtonSetup)setup
{
    self = [super init];

    _cancelButton = [UnitySingleLineEditViewSDK26 cancelButtonWithSetup:setup size:kButtonHeightMultiline];
    _doneButton = [UnitySingleLineEditViewSDK26 doneButtonWithSetup:setup size:kButtonHeightMultiline];
    _input = [UITextView new];
    _input.backgroundColor = UIColor.clearColor;
    _input.alpha = 0.99;
    _input.font = [UIFont systemFontOfSize: kUnityKeyboardSingleLineFontSize];
    const auto cancelFrame = _cancelButton.frame;
    const auto inputTop = cancelFrame.origin.y + cancelFrame.size.height + kVerticalGapMultiline;
    _input.frame = CGRectMake(0, inputTop, 0, MultilineInputFieldHeight());

    [self addSubview: _cancelButton];
    [self addSubview: _doneButton];
    [self addSubview: _input];

    return self;
}

- (void)setFrame: (CGRect)frame
{
    [super setFrame: frame];
    auto doneFrame = _doneButton.frame;
    doneFrame.origin.x = frame.size.width - doneFrame.size.width;
    _doneButton.frame = doneFrame;

    auto inputFrame = _input.frame;
    inputFrame.size.width = frame.size.width;
    _input.frame = inputFrame;
}

- (CGFloat)requiredHeight
{
    const auto inputFrame = _input.frame;
    return inputFrame.origin.y + inputFrame.size.height;
}

@end


// -----------------------------------


@implementation UnityMultilineEditViewSDK26

- (UnityMultilineEditLayoutSDK26*)layout
{
    return (UnityMultilineEditLayoutSDK26*)self.innerView;
}

- (UIView<UITextInput>*)inputView
{
    return self.layout.input;
}

- (UITextView*)multilineEditView
{
    return self.layout.input;
}

- (NSString*)getText
{
    return self.multilineEditView.text;
}

- (void)setText:(NSString *)newText
{
    self.multilineEditView.text = newText;
}

+ (instancetype)createWithButtonSetup: (UnityKeyboardButtonSetup)setup
{
    return [[UnityMultilineEditViewSDK26 alloc] initWithButtonSetup: setup];
}

- (instancetype)initWithButtonSetup: (UnityKeyboardButtonSetup)setup
{
    auto layout = [UnityMultilineEditLayoutSDK26 createWithButtonSetup: setup];
    self = [super initWithView: layout xPadding: kButtonSpacingMultiline yPadding: kButtonSpacingMultiline];
    self.layer.cornerRadius = kButtonHeightMultiline / 2 + kButtonSpacingMultiline;

    // place at the bottom of the screen, otherwise it's zero size in the corner and animates down on first show
    auto unityViewSize = UnityGetGLView().frame.size;
    [self positionInputWithPosition: CGPointMake(0, unityViewSize.height) offsetY: 0 width: unityViewSize.width safeArea: UIEdgeInsetsMake(0, 0, 0, 0)];

    return self;
}

- (void)positionInputWithPosition:(CGPoint)position offsetY:(CGFloat)offsetY width:(CGFloat)width safeArea:(UIEdgeInsets)safeArea
{
    const auto safeAreaInsetLeft = safeArea.left;
    const auto safeAreaInsetRight = safeArea.right;
    const auto height = self.layout.requiredHeight + kButtonSpacingMultiline * 2;
    width = width - safeAreaInsetLeft - safeAreaInsetRight;
    const auto xPos = position.x + safeAreaInsetLeft;
    const auto yPos = position.y - height - offsetY;

    auto frame = CGRectMake(xPos, yPos, width, UnityGetGLView().bounds.size.height - yPos);
    self.frame = frame;
}

@end


#endif
