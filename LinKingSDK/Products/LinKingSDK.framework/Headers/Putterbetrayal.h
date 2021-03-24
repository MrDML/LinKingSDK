//
//  Putterbetrayal.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/22.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Rabiddreary;
typedef enum {
    SIAPPurchSuccess = 0,       // 购买成功
    SIAPPurchFailed = 1,        // 购买失败
    SIAPPurchCancle = 2,        // 取消购买
    SIAPPurchVerFailed = 3,     // 订单校验失败
    SIAPPurchVerSuccess = 4,    // 订单校验成功
    SIAPPurchNotArrow = 5,      // 不允许内购
    SIAPPurchNoGoods = 6,       // 没有商品
    SIAPPurchRestoredGoods = 7, // 已经购买过该商品
    SIAPPurchServiceFail = 8, // 接口错误
}SIAPPurchType;
@protocol PutterbetrayalDelegate <NSObject>
@optional

/// 创建订单成功回调

- (void)Granitecomposition:(NSString * _Nullable)orderId withError:(NSError *_Nullable)error;

/// 支付成功回调
/// @param isSuccess isSuccess description
/// @param error error description
- (void)storePayFinishPay:(BOOL)isSuccess withError:(NSError *_Nullable)error;

/// 取消支付回调
- (void)storePayCancelPay;

@end
typedef void (^IAPCompletionHandle)(SIAPPurchType type,NSData * _Nullable  data);
NS_ASSUME_NONNULL_BEGIN

@interface Putterbetrayal : NSObject
@property (nonatomic, weak) id <PutterbetrayalDelegate> delegate;

+ (instancetype)shared;
/// 拉取所有商品信息
- (void)Existingenviron:(void(^_Nullable)(NSError * _Nullable error, NSArray*_Nullable products,NSArray * _Nullable invalidProducts))complete;
//开始内购
- (void)Beholdersimplify:(NSString *)purchID parames:(NSDictionary *)parames completeHandle:(IAPCompletionHandle)handle;
// 查询订阅
- (void)querysubscribeProduct:(NSString *)productId Complete:(void(^)(NSError *error, NSDictionary*results))complete;

- (void)setContentView:(UIView *)view;

-(void)setup;
-(void)destroy;
-(BOOL)canMakePayments;
@end

NS_ASSUME_NONNULL_END