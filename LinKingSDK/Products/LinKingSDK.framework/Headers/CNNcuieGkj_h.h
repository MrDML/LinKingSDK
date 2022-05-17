

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CNNcuieGkj_h : NSObject<NSSecureCoding,NSCoding>
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
@property (nonatomic, strong) NSNumber *thirdOpenPay;
@property (nonatomic, strong) NSNumber *rechargePay;
@property (nonatomic, strong) NSString *webPayBaseUrl;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
+ (CNNcuieGkj_h *)getSDKConfig;
+ (void)setSDKConfig:(CNNcuieGkj_h *)config;
+ (void)removeSDKConfig;
+ (NSDictionary *)getMQttSettingFromConfig;
+ (BOOL)isMqttCheck;
@end

NS_ASSUME_NONNULL_END
