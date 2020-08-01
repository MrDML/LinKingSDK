//
//  LKApplePay.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/22.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LKProduct;
typedef enum {
    SIAPPurchSuccess = 0,       // 购买成功
    SIAPPurchFailed = 1,        // 购买失败
    SIAPPurchCancle = 2,        // 取消购买
    SIAPPurchVerFailed = 3,     // 订单校验失败
    SIAPPurchVerSuccess = 4,    // 订单校验成功
    SIAPPurchNotArrow = 5,      // 不允许内购
    SIAPPurchNoGoods = 6,       // 没有商品
}SIAPPurchType;
@protocol LKApplePayDelegate <NSObject>
@optional

/// 创建订单成功回调
/// @param isSuccess isSuccess description
/// @param error error description
- (void)storePayCreateOrderIsSuccess:(BOOL)isSuccess withError:(NSError *_Nullable)error;

/// 支付成功回调
/// @param isSuccess isSuccess description
/// @param error error description
- (void)storePayFinishPay:(BOOL)isSuccess withError:(NSError *_Nullable)error;

/// 取消支付回调
- (void)storePayCancelPay;

/// 请求商品列表接口
/// @param request request 有效商品集合
/// @param invalidProductIdentifiers 无效商品集合
/// @param error error description
- (void)productsRequest:(NSArray <LKProduct *>*_Nullable)request invalidProductIdentifiers:(NSArray<NSString *> *_Nullable)invalidProductIdentifiers didFailWithError:(NSError *_Nullable)error;

@end
typedef void (^IAPCompletionHandle)(SIAPPurchType type,NSData * _Nullable  data);
NS_ASSUME_NONNULL_BEGIN

@interface LKApplePay : NSObject
@property (nonatomic, weak) id <LKApplePayDelegate> delegate;

+ (instancetype)shared;
/// 拉取所有商品信息
- (void)requestProductDatasComplete:(void(^)(NSError *error, NSArray*results))complete;
//开始内购
- (void)startPurchWithID:(NSString *)purchID parames:(NSDictionary *)parames completeHandle:(IAPCompletionHandle)handle;
// 查询订阅
- (void)querysubscribeProduct:(NSString *)productId Complete:(void(^)(NSError *error, NSDictionary*results))complete;


@end

NS_ASSUME_NONNULL_END
