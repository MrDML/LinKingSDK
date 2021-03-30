//
//  Compartmentdespicable.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/28.
//  Copyright © 2020 . All rights reserved.
//

#import <UIKit/UIKit.h>


@class Skimpcoupon;
@class Barnfondle;
typedef NS_ENUM(NSInteger,LKPLATFORM) {
    LKPLATFORM_NONE,
    LKPLATFORM_Titok,
    LKPLATFORM_YLH,
    LKPLATFORM_TopOn
};

typedef NS_ENUM(NSInteger, LKADTYPE) {
    ADTYPE_REWARDVIDEO = 0,
    ADTYPE_INTERSTITAL = 1,
    ADTYPE_BANNER = 2,
};

NS_ASSUME_NONNULL_BEGIN
@protocol CompartmentdespicableDelegate <NSObject>

@optional


/// 横屏广告加载失败
/// @param error 错误信息
- (void)bannerAdDidLoadFail:(NSError * _Nullable)error;
/// 横屏广告点击关闭
- (void)bannerAdDidClose;
/// 横屏广告点击
- (void)bannerAdDidClick;
/// 横屏广告呈现成功
- (void)bannerAdDidVisible;


/// 激励视频加载失败
/// @param error 错误信息
- (void)rewardAdDidLoadFail:(NSError * _Nullable)error;
/// 激励视频点击关闭
- (void)rewardAdDidClose;
/// 激励视频点击
- (void)rewardAdDidClick;
/// 激励视频呈现成功
- (void)rewardAdDidVisible;
/// 获取奖励
- (void)rewardAdWinReward;


/// 插屏广告加载失败
/// @param error 错误信息
- (void)interstitialAdDidLoadFail:(NSError * _Nullable)error;
/// 插屏广告关闭
- (void)interstitialAdDidClose;
/// 插屏广告点击
- (void)interstitialAdDidClick;
/// 插屏广告呈现成功
- (void)interstitialAdDidVisible;


/// 广告加载成功
- (void)adDidFinishLoading:(LKADTYPE)type;
/// TopOn 广告加载失败
- (void)topOnAdDidFailToLoadFail:(NSError * _Nullable)error;


@end


@interface Compartmentdespicable : NSObject
@property (nonatomic, assign,readonly) LKPLATFORM platform;
@property (nonatomic, weak) id <CompartmentdespicableDelegate>delegate;

+ (instancetype)shared;

/// 注册广告
- (void)Heightenrelapse;

/// 展示横屏
- (void)showBanner;
/// 展现插屏
- (void)showInterstitialAd;
/// 展示激励视频广告
- (void)showRewardVideoAd;

/// 初始化广告
/// @param type 广告类型
/// @param viewController 控制器
/// @param superView 视图
- (void)initAD:(LKADTYPE)type rootViewController:(UIViewController * _Nonnull)viewController superView:(UIView * _Nullable)superView;

@end

NS_ASSUME_NONNULL_END
