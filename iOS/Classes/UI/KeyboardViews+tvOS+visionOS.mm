#import "KeyboardViews+tvOS+visionOS.h"


#if PLATFORM_TVOS || PLATFORM_VISIONOS


static const unsigned kToolBarHeight = 40;


@implementation UnitySingleLineEditView
{
    UITextField* _textField;
}

@synthesize inputView = _textField;

- (instancetype)init
{
    self = [super init];
    _textField = [UITextField new];
    [self addSubview: _textField];
    return self;
}

- (UITextField*)singlelineEditView
{
    return _textField;
}

- (NSString*)getText
{
    return _textField.text;
}

- (void)setText:(NSString *)text
{
    _textField.text = text;
}

- (void)positionInputWithPosition:(CGPoint)position offsetY:(CGFloat)offsetY width:(CGFloat)width safeArea:(UIEdgeInsets)safeArea
{
    const auto xPos = position.x;
    const auto yPos = position.y - kToolBarHeight - offsetY;
    self.frame  = CGRectMake(xPos, yPos, width, kToolBarHeight);
    _textField.frame = CGRectMake(0, 0, width, kToolBarHeight);
}

@end

#endif

#if PLATFORM_VISIONOS

@implementation UnityMultilineEditView
{
    UITextView* _textView;
}

@synthesize inputView = _textView;

- (instancetype)init
{
    self = [super init];
    _textView = [UITextView new];
    [self addSubview: _textView];
    return self;
}

- (UITextView*)multilineEditView
{
    return _textView;
}

- (NSString*)getText
{
    return _textView.text;
}

- (void)setText:(NSString *)text
{
    _textView.text = text;
}

- (void)positionInputWithPosition:(CGPoint)position offsetY:(CGFloat)offsetY width:(CGFloat)width safeArea:(UIEdgeInsets)safeArea
{
}

@end

#endif
