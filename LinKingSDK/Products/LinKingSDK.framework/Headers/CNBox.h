

#import "CNScroll.h"

NS_ASSUME_NONNULL_BEGIN

@interface CNBox : CNScroll
+ (void)bindAccountWithType:(NSString *)type phone:(NSString *)phone thirdToken:(NSString *)thirdToken complete:(void(^_Nullable)(NSError *error))complete;
@end

NS_ASSUME_NONNULL_END
