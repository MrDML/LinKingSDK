
#import "CNScroll.h"

NS_ASSUME_NONNULL_BEGIN

@interface CNSerializationTop : CNScroll
+ (void)fetchSDKConfigComplete:(void(^_Nullable)(NSError *_Nullable error))complete;
+ (void)fetchSDKConfigAppId:(NSString *)appId complete:(void(^_Nullable)(NSError *_Nullable error))complete;
+ (void)fetchMQTTClientIdKey:(NSString *)clientId WithComplete:(void(^)(NSObject *result,NSError *error))complete;
+ (void)fetchMQTTClientIdTokenKeyWithComplete:(void(^)(NSObject *result,NSError *error))complete;
@end

NS_ASSUME_NONNULL_END
