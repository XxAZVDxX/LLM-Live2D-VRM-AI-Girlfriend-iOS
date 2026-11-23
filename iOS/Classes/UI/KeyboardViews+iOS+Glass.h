#pragma once

#import "KeyboardViews.h"

#if PLATFORM_IOS


API_AVAILABLE(ios(26))
@interface UnityGlassView : UIVisualEffectView

@property UIView* innerView;

@end


API_AVAILABLE(ios(26))
@interface UnitySingleLineEditViewSDK26 : UIView<UnityKeyboardEditView, UnitySingleLineEdit>

+ (instancetype)createWithButtonSetup:(UnityKeyboardButtonSetup)setup;

@end


API_AVAILABLE(ios(26))
@interface UnityMultilineEditViewSDK26 : UnityGlassView<UnityKeyboardEditView, UnityMultilineEdit>

+ (instancetype)createWithButtonSetup: (UnityKeyboardButtonSetup)setup;

@end


#endif
