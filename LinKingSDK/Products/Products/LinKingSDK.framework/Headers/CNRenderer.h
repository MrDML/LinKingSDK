

#import "CNScroll.h"

NS_ASSUME_NONNULL_BEGIN

@interface CNRenderer : CNScroll
+ (void)fetchUserIconcomplete:(void(^_Nullable)(NSError *error,NSArray *data,NSString *icon))complete;
+ (void)sureFixUserIconWithIconId:(NSString *)iconId Complete:(void(^_Nullable)(NSError *error))complete;
@end

NS_ASSUME_NONNULL_END
