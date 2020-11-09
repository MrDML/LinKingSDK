//
//  LKAdManager.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/28.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>


@class LKTitokExpressManager;
@class LKYLHAdManager;
typedef NS_ENUM(NSInteger,LKPLATFORM) {
    LKPLATFORM_NONE,
    LKPLATFORM_Titok,
    LKPLATFORM_YLH,
    LKPLATFORM_TopOn
};

typedef NS_ENUM(NSInteger,LKTOPONAdTYPE) {
    LKTOPONAdTYPE_NONE,
    LKTOPONAdTYPE_Banner,
    LKTOPONAdTYPE_Interstitial,
    LKTOPONAdTYPE_RewardVideo
};

NS_ASSUME_NONNULL_BEGIN
@protocol LKAdManagerDelegate <NSObject>

@optional


///  加载成功
/// @param platform 平台类型
/// @param manager 平台管理对象
- (void)bannerAdDidLoadPlatform:(LKPLATFORM)platform subManager:(id)manager;
///  加载失败
/// @param platform 平台类型
/// @param manager 平台管理对象
/// @param error 加载错误信息
- (void)bannerAdPlatform:(LKPLATFORM)platform subManager:(id)manager didLoadFail:(NSError * _Nullable)error;
/// Banner是否显示成功
/// @param platform 平台类型
/// @param manager 平台管理对象
- (void)bannerAdDidVisiblePlatform:(LKPLATFORM)platform subManager:(id)manager;
/// Banner点击
/// @param platform 平台类型
/// @param manager 平台管理对象
- (void)bannerAdDidClickPlatform:(LKPLATFORM)platform subManager:(id)manager;
/// Banner关闭
/// @param platform 平台类型
/// @param manager 平台管理对象
- (void)bannerAdDidClosePlatform:(LKPLATFORM)platform subManager:(id)manager;



/// 加载成功
/// @param platform 平台类型
/// @param manager 平台管理对象
- (void)rewardAdDidLoadPlatform:(LKPLATFORM)platform subManager:(id)manager;

/// 加载失败
/// @param platform 平台类型
/// @param manager 平台管理对象
/// @param error 加载错误信息
- (void)rewardAdPlatform:(LKPLATFORM)platform subManager:(id)manager didLoadFail:(NSError * _Nullable)error;
/// 激励视频赢得奖励
/// @param platform 平台类型
/// @param manager 平台管理对象
/// @param error 错误信息
- (void)rewardAdWinRewardPlatform:(LKPLATFORM)platform subManager:(id)manager withFail:(NSError * _Nullable)error;
/// 激励视频关闭
/// @param platform 平台类型
/// @param manager 平台管理对象
- (void)rewardAdDidClosePlatform:(LKPLATFORM)platform subManager:(id)manager;

/// 激励视频点击
/// @param platform 平台类型
/// @param manager 平台管理对象
- (void)rewardAdDidClickPlatform:(LKPLATFORM)platform subManager:(id)manager;
/// 激励视频显示
/// @param platform 平台类型
/// @param manager 平台管理对象
- (void)rewardAdDidVisiblePlatform:(LKPLATFORM)platform subManager:(id)manager;




/// 加载成功
/// @param platform 平台类型
/// @param manager 平台管理对象
- (void)interstitialAdDidLoadPlatform:(LKPLATFORM)platform subManager:(id)manager;

/// 加载失败
/// @param platform 平台类型
/// @param manager 平台管理对象
/// @param error 错误信息
- (void)interstitialAdPlatform:(LKPLATFORM)platform subManager:(id)manager didLoadFail:(NSError * _Nullable)error;

/// 插屏广告显示成功
/// @param platform 平台类型
/// @param manager 平台管理对象
- (void)interstitialAdDidVisiblePlatform:(LKPLATFORM)platform subManager:(id)manager;


/// 插屏广告点击
/// @param platform 平台类型
/// @param manager 平台管理对象
- (void)interstitialAdDidClickPlatform:(LKPLATFORM)platform subManager:(id)manager;

/// 插屏广告关闭
/// @param platform 平台类型
/// @param manager 平台管理对象
- (void)interstitialAdDidClosePlatform:(LKPLATFORM)platform subManager:(id)manager;





/// 加载成功
/// @param platform 平台类型
/// @param manager 平台管理对象
- (void)fullScreenAdDidLoadPlatform:(LKPLATFORM)platform subManager:(id)manager;
/// 加载失败
/// @param platform 平台类型
/// @param manager 平台管理对象
/// @param error 错误信息
- (void)fullScreenAdPlatform:(LKPLATFORM)platform subManager:(id)manager didLoadFail:(NSError * _Nullable)error;
/// 全屏视频赢得奖励
/// @param platform 平台类型
/// @param manager 平台管理对象
/// @param error 错误信息
- (void)fullScreenAdWinRewardPlatform:(LKPLATFORM)platform subManager:(id)manager withFail:(NSError * _Nullable)error;
/// 全屏视频关闭
/// @param platform 平台类型
/// @param manager 平台管理对象
- (void)fullScreenAdDidClosePlatform:(LKPLATFORM)platform subManager:(id)manager;

/// 激励视频点击
/// @param platform 平台类型
/// @param manager 平台管理对象
- (void)fullScreenAdDidClickPlatform:(LKPLATFORM)platform subManager:(id)manager;
/// 全屏视频显示
/// @param platform 平台类型
/// @param manager 平台管理对象
- (void)fullScreenAdDidVisiblePlatform:(LKPLATFORM)platform subManager:(id)manager;

/// 全屏视频跳过
/// @param platform 平台类型
/// @param manager 平台管理对象
- (void)fullScreenAdSkipPlatform:(LKPLATFORM)platform subManager:(id)manager;




/// MARK: TOPON

-(void)didFinishLoadingADWithPlacementID:(NSString *)placementID withAdType:(LKTOPONAdTYPE)adType;

-(void)didFailToLoadADWithPlacementID:(NSString* )placementID error:(NSError *)error;

- (void)rewardedVideoDidClickForPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

- (void)rewardedVideoDidCloseForPlacementID:(NSString *)placementID rewarded:(BOOL)rewarded extra:(NSDictionary *)extra;

- (void)rewardedVideoDidEndPlayingForPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

- (void)rewardedVideoDidFailToPlayForPlacementID:(NSString *)placementID error:(NSError *)error extra:(NSDictionary *)extra;

- (void)rewardedVideoDidRewardSuccessForPlacemenID:(NSString *)placementID extra:(NSDictionary *)extra;

- (void)rewardedVideoDidStartPlayingForPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;



- (void)interstitialDidClickForPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

- (void)interstitialDidCloseForPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

- (void)interstitialDidEndPlayingVideoForPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

- (void)interstitialDidFailToPlayVideoForPlacementID:(NSString *)placementID error:(NSError *)error extra:(NSDictionary *)extra;
- (void)interstitialDidShowForPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

- (void)interstitialDidStartPlayingVideoForPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

- (void)interstitialFailedToShowForPlacementID:(NSString *)placementID error:(NSError *)error extra:(NSDictionary *)extra;


- (void)bannerViewDidAutoRefreshWithPlacement:(NSString *)placementID extra:(NSDictionary *)extra;

- (void)bannerViewDidClickWithPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

- (void)bannerViewDidCloseWithPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

- (void)bannerViewDidShowAdWithPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

- (void)bannerViewDidTapCloseButtonWithPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

- (void)bannerViewDidfailedToAutoRefreshWithPlacementID:(NSString *)placementID error:(NSError *)error;



@end


@interface LKAdManager : NSObject
@property (nonatomic, assign,readonly) LKPLATFORM platform;
@property (nonatomic, strong,readonly) LKTitokExpressManager *titoManager;
@property (nonatomic, strong,readonly) LKYLHAdManager *YLHManager;
@property (nonatomic, weak) id <LKAdManagerDelegate>delegate;



+ (instancetype)shared;

/// 注册广告
- (void)registerAd;

/// 注册广告
- (void)registerAggregateAd;

/// 初始化Banner广告
- (void)initializationBannerRootViewController:(UIViewController *)viewController superView:(UIView *)superView platform:(LKPLATFORM)platform;
/// 展示Banner广告
- (void)showBanner;
/// 移除Banner
- (void)removeBannerViewFromSuperView;

/// 初始化插屏广告
- (void)initializationInterstitialAd:(UIViewController *)viewController platform:(LKPLATFORM)platform;
/// 展现插屏
- (void)showInterstitialAd;

/// 初始化激励视频广告
- (void)initializationRewardVideoAd:(UIViewController *)viewController platform:(LKPLATFORM)platform;
/// 展示激励视频广告
- (void)showRewardVideoAd;

/// 初始化全屏
- (void)initializationFullScreenVideoAd:(UIViewController *)viewController platform:(LKPLATFORM)platform;
/// 展示全屏广告
- (void)showFullScreenVideoAd;


/// 适用于聚合广告
- (BOOL)bannerViewAdReady;
- (BOOL)interstitialAdReady;
- (BOOL)rewardVideoAdReady;

@end

NS_ASSUME_NONNULL_END
