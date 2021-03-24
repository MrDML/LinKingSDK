//
//  Lackeytango.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/29.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Lackeytango : NSObject<NSSecureCoding,NSCoding>
@property (nonatomic, copy) NSString       *ready_type;
@property (nonatomic, copy) NSString       *pay_type;
@property (nonatomic, strong) NSNumber     *mode_debug;
@property (nonatomic, strong) NSNumber     *wsy;
@property (nonatomic, strong) NSNumber       *real_name_switch;
@property (nonatomic, strong) NSDictionary *sdk_config;
@property (nonatomic, strong) NSDictionary *wx_config;
@property (nonatomic, strong) NSDictionary *auth_config;
@property (nonatomic, strong) NSDictionary *point_config;
@property (nonatomic, strong) NSDictionary *ad_config_ios;
@property (nonatomic, strong) NSDictionary *share_info;
@property (nonatomic, strong) NSDictionary *updateGame;
@property (nonatomic, copy)   NSString *wx_service_num; 
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
+ (Lackeytango *)Standardizesacrilegious;
+ (void)setSDKConfig:(Lackeytango *)config;
+ (void)Predictionemploy;
@end

NS_ASSUME_NONNULL_END
