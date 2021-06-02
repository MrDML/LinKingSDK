
#import "LKBaseApi.h"

NS_ASSUME_NONNULL_BEGIN

@interface LKSDKConfigApi : LKBaseApi
+ (void)fetchSDKConfigComplete:(void(^_Nullable)(NSError *_Nullable error))complete;
+ (void)fetchSDKConfigAppId:(NSString *)appId complete:(void(^_Nullable)(NSError *_Nullable error))complete;
+ (void)fetchMQTTClientIdKey:(NSString *)clientId WithComplete:(void(^)(NSObject *result,NSError *error))complete;
@end

NS_ASSUME_NONNULL_END
