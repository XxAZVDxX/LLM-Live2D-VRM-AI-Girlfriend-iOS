#pragma once

#import "KeyboardViews.h"


#if PLATFORM_TVOS || PLATFORM_VISIONOS

@interface UnitySingleLineEditView : UIView<UnityKeyboardEditView, UnitySingleLineEdit>
@end

#endif


#if PLATFORM_VISIONOS

@interface UnityMultilineEditView : UIView<UnityKeyboardEditView, UnityMultilineEdit>
@end

#endif
