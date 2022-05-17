

#import "CNOpabx_Ih.h"

NS_ASSUME_NONNULL_BEGIN

@interface CNBedlz_PTT : CNOpabx_Ih
+ (void)fetchRestPwdCheckCodeByPhone:(NSString *)phone isNewUserComplete:(void(^_Nullable)(NSError *error))complete;
+ (void)resetPasswordWithIphone:(NSString *)iphone code:(NSString *)code newPassword:(NSString *)nPwd surePassword:(NSString *)sPwd complete:(void(^_Nullable)(NSError *error))complete;
+ (void)fixPasswordWithOldPassword:(NSString *)oldPwd newPassword:(NSString *)newPwd complete:(void(^_Nullable)(NSError *error))complete;
@end

NS_ASSUME_NONNULL_END
