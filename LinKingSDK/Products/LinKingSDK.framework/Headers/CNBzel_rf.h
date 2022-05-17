

#import "CNOpabx_Ih.h"

NS_ASSUME_NONNULL_BEGIN

@interface CNBzel_rf : CNOpabx_Ih

+ (void)pointEventName:(NSString *)eventName withTp:(NSString *_Nullable)tp withValues:(NSDictionary *_Nullable)values complete:(void(^_Nullable)(NSError *error))complete;

+ (void)adPointEventName:(NSString * _Nullable)eventName withValues:(NSDictionary * _Nullable)values complete:(void(^_Nullable)(NSError *error))complete;


+ (void)logReportServerWithEvent:(NSString *)event eventName:(NSString *_Nullable)eventName infos:(NSDictionary *_Nullable)infos complete:(void(^_Nullable)(NSError *_Nullable error))complete;

+ (void)logReportServerWithEvent:(NSString *)event eventName:(NSString *)eventName infos:(NSDictionary *_Nullable)infos WithOtherLogInfo:(NSDictionary*_Nullable)logInfors complete:(void(^_Nullable)(NSError *_Nullable error))complete;

+ (void)sls_adPointEventName:(NSString *)eventName withValues:(NSDictionary * _Nullable)values complete:(void(^)(NSError *_Nullable error))complete;

+ (void)sls_pointEventName:(NSString *)eventName withTp:(NSString *)tp withValues:(NSDictionary * _Nullable)values complete:(void(^)(NSError * _Nullable error))complete;

+ (NSMutableDictionary *)getReportLogInfo;
@end

NS_ASSUME_NONNULL_END
