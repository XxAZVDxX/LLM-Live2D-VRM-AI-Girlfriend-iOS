#pragma once

#import "KeyboardViews.h"

#if PLATFORM_IOS

@interface UnitySingleLineEditView : UIToolbar<UnityKeyboardEditView, UnitySingleLineEdit>

+ (instancetype)createWithButtonSetup:(UnityKeyboardButtonSetup)setup;

@end


@interface UnityMultilineEditView : UIView<UnityKeyboardEditView, UnityMultilineEdit>

+ (instancetype)createWithButtonSetup: (UnityKeyboardButtonSetup)setup;

@end

#endif
