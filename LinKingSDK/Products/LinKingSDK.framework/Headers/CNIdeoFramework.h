

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CNIdeoFramework : NSObject<NSSecureCoding,NSCoding>

@property (nonatomic, strong) NSNumber     *real_name_switch;

@property (nonatomic, copy) NSNumber       *real_name_success;

@property (nonatomic, copy) NSNumber       *pay_limit;
@property (nonatomic, strong) NSDictionary *mqtt_config;
@property (nonatomic, copy) NSString       *ready_type;
@property (nonatomic, copy) NSString       *pay_type;
@property (nonatomic, strong) NSNumber     *mode_debug;
@property (nonatomic, strong) NSNumber     *wsy;
@property (nonatomic, strong) NSDictionary *sdk_config;
@property (nonatomic, strong) NSDictionary *wx_config;
@property (nonatomic, strong) NSDictionary *auth_config;
@property (nonatomic, strong) NSDictionary *point_config;
@property (nonatomic, strong) NSDictionary *ad_config_ios;
@property (nonatomic, strong) NSDictionary *share_info;
@property (nonatomic, strong) NSDictionary *updateGame;
@property (nonatomic, copy)   NSString *wx_service_num; 
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
+ (CNIdeoFramework *)getSDKConfig;
+ (void)setSDKConfig:(CNIdeoFramework *)config;
+ (void)removeSDKConfig;

+ (NSDictionary *)getMQttSettingFromConfig;

+ (BOOL)isMqttCheck;
@end

NS_ASSUME_NONNULL_END
