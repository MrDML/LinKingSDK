

#import <UIKit/UIKit.h>

@class AFHTTPSessionManager;
NS_ASSUME_NONNULL_BEGIN

@interface CNWgoi_oJS : NSObject
+(AFHTTPSessionManager *)sharedHttpSessionManager;
+ (void)getWithURLString:(NSString *)urlString success:(void(^)(id responseObject))success failure:(void(^)(NSError * _Nullable error))failure;

+ (void)getFromPhpithURLString:(NSString *)urlString success:(void(^)(id responseObject))success failure:(void(^)(NSError * _Nullable error))failure;

+ (void)postNormalWithURLString:(NSString *)urlString parameters:(NSDictionary *)parameters HTTPHeaderField:(NSDictionary *)headerField success:(void(^)(id responseObject))success failure:(void(^)(NSError * _Nullable error))failure;

+ (void)postWithURLString:(NSString *)urlString parameters:(NSDictionary *)parameters success:(void(^)(id responseObject))success failure:(void(^)(NSError * _Nullable error))failure;

+ (void)postFormDataWithURLString:(NSString *)urlString parameters:(NSDictionary *)parameters HTTPHeaderField:(NSDictionary *)headerField success:(void(^)(id responseObject))success failure:(void(^)(NSError *error))failure;

+ (void)postWithURLString:(NSString *)urlString parameters:(NSDictionary *)parameters HTTPHeaderField:(NSDictionary *)headerField success:(void(^)(id responseObject))success failure:(void(^)(NSError * _Nullable error))failure;

+ (void)uploadWithURLString:(NSString *)urlString withImages:(NSArray<UIImage *>*)images parameters:(NSDictionary *)parameters HTTPHeaderField:(NSDictionary *)headerField complete:(void(^)(NSError * _Nullable error,  NSDictionary * _Nullable responseObj))complete;
@end

NS_ASSUME_NONNULL_END
