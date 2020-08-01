//
//  LKAFManager.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/27.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@protocol LKAFManagerDelegate <NSObject>
- (void)onConversionDataFail:(nonnull NSError *)error;
- (void)onConversionDataSuccess:(nonnull NSDictionary *)conversionInfo;
@optional
- (void)onAppOpenAttribution:(NSDictionary*) attributionData;
- (void)onAppOpenAttributionFailure:(NSError *)error;
@end
@interface LKAFManager : NSObject

@property (nonatomic, weak) id<LKAFManagerDelegate>delegate;
/// 实例
+ (instancetype)shared;
/// 注册AF (PS:SDK启动时会进行自动注册无需在进行调用)
- (void)registAppsFlyer;
/// 用于追踪游戏等级事件
/// @param level 等级
/// @param score 得分
- (void)applicationLevel:(NSInteger)level score:(CGFloat)score;
/// 用于追踪付款信息配置状态
/// @param success 是否成功
- (void)applicationAddPaymentInfoSuccess:(BOOL)success;
/// 用于追踪付款信息配置状态
/// @param price 价格
/// @param type 商品类型
/// @param currency 货币类型
/// @param goodsId 商品id
/// @param content 商品描述
/// @param quantity 商品数量
- (void)applicationAddGoodsCartWithPrice:(NSNumber *)price goodsType:(NSString *)type currency:(NSString *)currency goodsId:(NSString *)goodsId content:(NSString *)content quantity:(int)quantity;

/// 用于追踪特定商品的“添加到愿望清单”事件
/// @param price 价格
/// @param type 类型
/// @param goodsId 物品id
/// @param content 详细描述
/// @param currency 货币类型
/// @param quantity 数量
- (void)applicationAddWishlistWithPrice:(NSNumber *)price goodsType:(NSString *)type goodsId:(NSString *)goodsId content:(NSString *)content currency:(NSString *)currency quantity:(int)quantity;

/// 用于追踪用户注册方式
/// @param style 注册方式
- (void)applicationCompleteRegistrationStyle:(NSString *)style;

/// 用于追踪教程完成情况
/// @param success 是否成功
/// @param userId 用户id
/// @param desc 描述
- (void)applicationTutorialCompletionWithSuccess:(BOOL)success userId:(NSString *)userId desc:(NSString *)desc;

/// 用于追踪结账事件
/// @param price 价格
/// @param contentType 商品类型
/// @param contentId 商品id
/// @param quantity 商品数量
/// @param payment 支付方式（信息）
/// @param currency 货币类型
- (void)applicationInitiatedCheckoutWithPrice:(NSNumber *)price contentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content  quantity:(int)quantity payment:(NSString *)payment currency:(NSString *)currency;

/// 用于追踪购买事件（及相关收入）
/// @param price 价格
/// @param type 订单了类型
/// @param currency 货币类型 USD
/// @param orderId 订单Id
/// @param desc 描述
/// @param quantity 数量
- (void)applicationPurchaseWithPrice:(NSNumber *)price type:(NSString *)type currency:(NSString *)currency orderId:(NSString *)orderId desc:(NSString *)desc quantity:(int)quantity;

/// 用于追踪付费订阅购买
/// @param price 价格
- (void)applicationSubscribeWithPrice:(NSNumber *)price;

/// 用于追踪产品的免费试用的开始
/// @param price 价格
/// @param currency 货币类型
- (void)applicationStartTrialWithPrice:(NSNumber *)price currency:(NSString *)currency;

/// 用于追踪应用/商品评级事件
/// @param rating 当前评级
/// @param contentType 评级类型
/// @param contentId 评级id
/// @param content 评级内容
/// @param maxRating 最大评级
- (void)applicationWithRating:(CGFloat)rating contentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content maxRating:(CGFloat)maxRating;

/// 用于追踪搜索事件
/// @param contentType 搜索类别
/// @param searchWords 搜索关键字
/// @param success 是否搜索成功
- (void)applicationSearchWithContentType:(NSString *)contentType searchWords:(NSString *)searchWords success:(BOOL)success;

/// 用于追踪积分花费事件
/// @param price 价格
/// @param contentType 事件类型
/// @param contentId 事件id
/// @param content 事件内容
- (void)applicationSpentCreditsWithPrice:(NSNumber *)price ContentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content;

/// 用于追踪成就解锁事件
/// @param desc 详细描述
- (void)applicationAchievementUnlockedWithDesc:(NSString *)desc;

/// 用于追踪内容视图事件
/// @param price 价格
/// @param contentType 内容类型
/// @param contentId 内容id
/// @param content 内容描述
/// @param currency 货币类型
- (void)applicationContentViewWithPrice:(NSNumber *)price contentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content currency:(NSString *)currency;

/// 用于追踪列表视图事件
/// @param contentType 列表视图类别
/// @param contentList 列表集合
- (void)applicationListViewWithContentType:(NSString *)contentType contentList:(NSArray *)contentList;

///  用于追踪应用中展示广告的点击次数
- (void)applicationAdclickWithAdStyle:(NSString *)style;

/// 用于追踪应用中展示广告的展示次数
- (void)applicationAdView:(NSString *)style;

/// 用于追踪分享事件
/// @param desc 分享描述
- (void)applicationShareDesc:(NSString*)desc;

/// 用于追踪邀请（社交）事件
- (void)applicationInvite;

///  用于追踪用户的重参与事件
- (void)applicationActive;

/// 用于追踪用户登录事件
- (void)applicationLoginStyle:(NSString *)style;

/// 从推送通知打开 用于追踪从推送通知打开应用的事件
- (void)applicationOpenedFromPushNotification;

/// 用于追踪更新事件
/// @param contentId 更新事件Id
- (void)applicationWithContentId:(NSString *)contentId;
@end

NS_ASSUME_NONNULL_END
