

#import "CNScroll.h"

NS_ASSUME_NONNULL_BEGIN

@interface CNEd : CNScroll
+ (void)authWithName:(NSString *)name IdNumber:(NSString *)number complete:(void(^_Nullable)(NSDictionary *_Nullable result,NSError *_Nullable error))complete;



+ (void)checkRealNameInfoWithComplete:(void(^)(NSDictionary *result,NSError *error))complete;




+ (void)checkSessionTokenWithComplete:(void(^)(NSDictionary *result,NSError *error))complete;



+ (void)checkAntiAddictionWithComplete:(void(^)(NSDictionary *result,NSError *error))complete;
@end

NS_ASSUME_NONNULL_END
