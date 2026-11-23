#pragma once

#import <UIKit/UIKit.h>


extern const unsigned kUnityKeyboardSingleLineFontSize;

CGFloat MultilineInputFieldHeight();


struct UnityKeyboardButtonSetup
{
    id target;
    SEL doneAction;
    SEL cancelAction;
};


@protocol UnityKeyboardEditView

@property (readonly) UIView<UITextInput>* inputView;
@property (getter=getText, setter=setText:) NSString* text;
- (void)positionInputWithPosition:(CGPoint)position offsetY:(CGFloat)offsetY width:(CGFloat)width safeArea:(UIEdgeInsets)safeArea;

@end



@protocol UnitySingleLineEdit

- (UITextField*)singlelineEditView;

@end


#if PLATFORM_IOS || PLATFORM_VISIONOS

@protocol UnityMultilineEdit

- (UITextView*)multilineEditView;

@end

#endif
