#import "KeyboardViews+iOS.h"
#if UNITY_XCODE_PROJECT_TYPE_SWIFT
#import <UnityRuntime/UnityInternalInterface.h>
#endif


#if PLATFORM_IOS


static const unsigned kToolBarHeight = 40;


static CGFloat SingleLineSystemButtonsSpace()
{
    // Gather round boys, let's hear the story of apple ingenious api.
    // Did you see UIBarButtonItem above? oh the marvel of design
    // Maybe you thought it will have some connection to UIView or something?
    //   Yes, internally, in private members, hidden like dirty laundry in a room of a youngster
    // But, you may ask, why do we care? Oh, easy - sometimes you want to use non-english language
    // And in these languages, not good enough to be english, done/cancel items can have different sizes
    // And we insist on having input field size set because, yes, we cannot quite do a layout inside UIToolbar
    //   [because there are no views we can actually touch, thanks for asking]
    // Obviously, localizing system strings is also well hidden, and what works now might stop working tomorrow
    // That's why we keep UIBarButtonSystemItemDone/UIBarButtonSystemItemCancel above
    //   and try to translate "Done"/"Cancel" in a way that "should" work
    //   if localization fails we will still have "some" values (coming from english)
    UIFont* font = [UIFont systemFontOfSize: kUnityKeyboardSingleLineFontSize];
    NSBundle* uikitBundle = [NSBundle bundleForClass: UIApplication.class];
    NSString* doneStr   = [uikitBundle localizedStringForKey: @"Done" value: nil table: nil];
    NSString* cancelStr = [uikitBundle localizedStringForKey: @"Cancel" value: nil table: nil];

    // mind you, all of that is highly empirical.
    // we assume space between items to be 18 [both between buttons and on the sides]
    // we also assume that button width would be more or less the title width exactly (it should be quite close though)

    // some language fonts (i.e korean, vietnamese..) can have non integer width (i.e 34.5999), thus we round up the width to fit the buttons
    const CGFloat doneW   = ceil([doneStr   sizeWithAttributes: @{NSFontAttributeName: font}].width);
    const CGFloat cancelW = ceil([cancelStr sizeWithAttributes: @{NSFontAttributeName: font}].width);

    return doneW + cancelW + 3 * 18;
}


@interface AdjustableWidthTextField : UITextField

@property (nonatomic) CGFloat width;

@end


@implementation AdjustableWidthTextField

- (instancetype)init
{
    self = [super initWithFrame:CGRectZero];
    self.width = 0;
    self.translatesAutoresizingMaskIntoConstraints = NO;

    [NSLayoutConstraint activateConstraints:@[
        [self.topAnchor constraintEqualToAnchor:self.topAnchor],
        [self.bottomAnchor constraintEqualToAnchor:self.bottomAnchor],
        [self.leadingAnchor constraintEqualToAnchor:self.leadingAnchor],
        [self.trailingAnchor constraintEqualToAnchor:self.trailingAnchor],
    ]];
    return self;
}

- (CGSize)intrinsicContentSize
{
    CGSize baseSize = [super intrinsicContentSize];
    return CGSizeMake(self.width, baseSize.height);
}

@end



@interface UIToolbar (UnityKeyboardToolbar)
@end

@implementation UIToolbar (UnityKeyboardToolbar)

- (instancetype)initWithItems: (NSArray*)items
{
    // Default position ensures the input view slides from the bottom of the screen together with the keyboard
    CGSize windowSize = UnityGetGLView().bounds.size;
    self = [self initWithFrame: CGRectMake(0, windowSize.height, windowSize.width, kToolBarHeight)];
    UnitySetViewTouchProcessing(self, touchesIgnored);
    self.hidden = NO;
    self.items = items;
    return self;
}

@end


// -----------------------------------


@implementation UnitySingleLineEditView
{
    CGFloat _singleLineSystemButtonsSpace;
    AdjustableWidthTextField* _textField;
}

@synthesize inputView = _textField;

- (NSString*)getText
{
    return _textField.text;
}

- (void)setText: (NSString*)newText
{
    _textField.text = newText;
}

- (UITextField*)singlelineEditView
{
    return _textField;
}

+ (instancetype)createWithButtonSetup:(UnityKeyboardButtonSetup)setup
{
    auto textField = [AdjustableWidthTextField new];
    textField.font = [UIFont systemFontOfSize: kUnityKeyboardSingleLineFontSize];
    textField.clearButtonMode = UITextFieldViewModeWhileEditing;
    textField.autoresizingMask = UIViewAutoresizingFlexibleWidth;
    textField.borderStyle = UITextBorderStyleRoundedRect;
    auto inputField = [[UIBarButtonItem alloc] initWithCustomView: textField];
    auto done = [[UIBarButtonItem alloc] initWithBarButtonSystemItem: UIBarButtonSystemItemDone target: setup.target action: setup.doneAction];
    auto cancel = [[UIBarButtonItem alloc] initWithBarButtonSystemItem: UIBarButtonSystemItemCancel target: setup.target action: setup.cancelAction];
    auto toolbar = [[UnitySingleLineEditView alloc] initWithItems:@[inputField, done, cancel]];
    toolbar->_singleLineSystemButtonsSpace = SingleLineSystemButtonsSpace();
    toolbar->_textField = textField;
    return toolbar;
}

- (void)positionInputWithPosition:(CGPoint)position offsetY:(CGFloat)offsetY width:(CGFloat)width safeArea:(UIEdgeInsets)safeArea
{
    const auto xPos = position.x;
    const auto yPos = position.y - kToolBarHeight - offsetY;
    self.frame  = CGRectMake(xPos, yPos, width, kToolBarHeight);

    const auto safeAreaInsetLeft = safeArea.left;
    const auto safeAreaInsetRight = safeArea.right;
    _textField.width = width - safeAreaInsetLeft - safeAreaInsetRight - _singleLineSystemButtonsSpace;
    [_textField invalidateIntrinsicContentSize];
}

@end


// -----------------------------------


@implementation UnityMultilineEditView
{
    UITextView* _input;
    UIView* _buttonToolbar;
}

@synthesize inputView = _input;

- (UITextView*) multilineEditView
{
    return _input;
}

- (NSString*)getText
{
    return _input.text;
}

- (void)setText:(NSString *)newText
{
    _input.text = newText;
}

+ (instancetype)createWithButtonSetup: (UnityKeyboardButtonSetup)setup
{
    return [[UnityMultilineEditView alloc] initWithButtonSetup: setup];
}

- (instancetype)initWithButtonSetup: (UnityKeyboardButtonSetup)setup
{
    self = [super init];

    auto done = [[UIBarButtonItem alloc] initWithBarButtonSystemItem: UIBarButtonSystemItemDone target: setup.target action: setup.doneAction];
    auto cancel = [[UIBarButtonItem alloc] initWithBarButtonSystemItem: UIBarButtonSystemItemCancel target: setup.target action: setup.cancelAction];
    auto viewToolbar = [[UIToolbar alloc] initWithItems:@[done, cancel]];

    auto input = [UITextView new];
    // For some unknown reason, the `textView` has visual issues when
    // using Dark Mode (some parts of the view become transparent). See case 1367091.
    // However, setting alpha to a value different than 1 fixes the issue.
    input.alpha = 0.99;
    input.font = [UIFont systemFontOfSize: 18.0]; // Why is this different from single line?

    [self addSubview: input];
    [self addSubview: viewToolbar];

    _input = input;
    _buttonToolbar = viewToolbar;
    const auto unitySize = UnityGetGLView().bounds.size;
    [self positionInputWithPosition: CGPointMake(0, unitySize.height) offsetY: 0 width: unitySize.width safeArea: UIEdgeInsetsMake(0, 0, 0, 0)];

    return self;
}

- (void)positionInputWithPosition:(CGPoint)position offsetY:(CGFloat)offsetY width:(CGFloat)width safeArea:(UIEdgeInsets)safeArea
{
    const auto safeAreaInsetLeft = safeArea.left;
    const auto safeAreaInsetRight = safeArea.right;
    const auto inputHeight = MultilineInputFieldHeight();
    auto height = kToolBarHeight + inputHeight;
    width = width - safeAreaInsetLeft - safeAreaInsetRight;
    const auto xPos = position.x + safeAreaInsetLeft;
    const auto yPos = position.y - height - offsetY;
    const auto unityViewHeight = UnityGetGLView().frame.size.height;
    height = unityViewHeight - yPos;

    auto frame = CGRectMake(xPos, yPos, width, height);
    self.frame = frame;

    _input.frame = CGRectMake(0, 0, frame.size.width, inputHeight);
    _buttonToolbar.frame = CGRectMake(0, inputHeight, frame.size.width, kToolBarHeight);
}

@end


#endif
