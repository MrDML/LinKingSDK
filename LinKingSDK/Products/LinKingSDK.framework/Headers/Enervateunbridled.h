//
//  Enervateunbridled.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/28.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Enervateunbridled : NSObject


///  横屏广告回调
// 加载
@property (nonatomic, copy) void(^bannerAdViewDidLoadCallBack)(void);
@property (nonatomic, copy) void(^bannerAdViewDidLoadFailCallBack)(NSError * _Nullable error);
// 展现
@property (nonatomic, copy) void(^bannerAdViewVisibleCallBack)(void);
// 点击
@property (nonatomic, copy) void(^bannerAdViewDidClickCallBack)(void);
// 关闭原因
@property (nonatomic, copy) void(^bannerAdViewCloseCallBack)(void);
// 点击之后将要modal
@property (nonatomic, copy) void(^bannerAdViewWillPresentFullScreenModalCallBack)(void);
// 点击之后已经modal
@property (nonatomic, copy) void(^bannerAdViewDidPresentFullScreenModalCallBack)(void);
// 应用进入后台回调
@property (nonatomic, copy) void(^bannerAdViewWillLeaveApplicationCallBack)(void);
// 即将关闭
@property (nonatomic, copy) void(^bannerAdViewWillDismissFullScreenModalCallBack)(void);
// 已经关闭
@property (nonatomic, copy) void(^bannerAdViewDidDismissFullScreenModalCallBack)(void);


///  插屏广告回调
// 加载
@property (nonatomic, copy) void(^interstitialAdViewDidLoadCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdViewDidLoadFailCallBack)(NSError * _Nullable error);
// 插屏2.0广告曝光回调
@property (nonatomic, copy) void(^interstitialAdViewVisibleCallBack)(void);
//  插屏2.0广告点击回调
@property (nonatomic, copy) void(^interstitialAdViewDidClickCallBack)(void);
// 关闭原因
@property (nonatomic, copy) void(^interstitialAdViewCloseCallBack)(void);
// 插屏2.0广告将要展示回调
// 插屏2.0广告即将展示回调该函数
@property (nonatomic, copy) void(^interstitialAdViewWillPresentScreenCallBack)(void);
// 呈现失败
@property (nonatomic, copy) void(^interstitialAdViewToPresentFailCallBack)(NSError * _Nullable error);
// 插屏2.0广告视图展示成功回调
// 插屏2.0广告展示成功回调该函数
@property (nonatomic, copy) void(^interstitialAdViewDidPresentScreenCallBack)(void);

// 当点击下载应用时会调用系统程序打开
@property (nonatomic, copy) void(^interstitialAdViewWillLeaveApplicationCallBack)(void);

// 点击插屏2.0广告以后即将弹出全屏广告页
@property (nonatomic, copy) void(^interstitialAdViewWillPresentFullScreenModalCallBack)(void);
// 点击插屏2.0广告以后弹出全屏广告页
@property (nonatomic, copy) void(^interstitialAdViewDidPresentFullScreenModalCallBack)(void);

// 全屏广告页将要关闭
@property (nonatomic, copy) void(^interstitialAdViewWillDismissFullScreenModalCallBack)(void);
// 全屏广告页被关闭
@property (nonatomic, copy) void(^interstitialAdViewDidDismissFullScreenModalCallBack)(void);
// 插屏2.0广告展示结束回调
// 插屏2.0广告展示结束回调该函数
@property (nonatomic, copy) void(^interstitialAdViewDidDismissScreenModalCallBack)(void);
// 插屏2.0视频广告 player 播放状态更新回调
@property (nonatomic, copy) void(^interstitialAdViewPlayerStatusChangedCallBack)(void);
//  插屏2.0视频广告详情页 WillPresent 回调
@property (nonatomic, copy) void(^interstitialAdViewWillPresentVideoVCCallBack)(void);
// 插屏2.0视频广告详情页 DidPresent 回调
@property (nonatomic, copy) void(^interstitialAdViewDidPresentVideoVCCallBack)(void);
// 插屏2.0视频广告详情页 WillDismiss 回调
@property (nonatomic, copy) void(^interstitialAdViewWillDismissVideoVCCallBack)(void);
// 插屏2.0视频广告详情页 DidDismiss 回调
@property (nonatomic, copy) void(^interstitialAdViewDidDismissVideoVCCallBack)(void);


//  激励广告回调
// 加载
@property (nonatomic, copy) void(^rewardVideoAdViewDidLoadCallBack)(void);
@property (nonatomic, copy) void(^rewardVideoAdViewDidLoadFailCallBack)(NSError * _Nullable error);
// 视频数据下载成功回调，已经下载过的视频会直接回调
@property (nonatomic, copy) void(^rewardVideoAdViewDownLoadCallBack)(void);
// 即将展现
@property (nonatomic, copy) void(^rewardVideoAdViewWillVisibleCallBack)(void);
// 已经展现
@property (nonatomic, copy) void(^rewardVideoAdViewDidVisibleCallBack)(void);
// 已经关闭
@property (nonatomic, copy) void(^rewardVideoAdViewDidCloseCallBack)(void);
// 点击
@property (nonatomic, copy) void(^rewardVideoAdViewDidClickCallBack)(void);
// 达到领取条件
@property (nonatomic, copy) void(^rewardVideoAdViewDidRewardEffectiveCallBack)(void);
// 播放完成
@property (nonatomic, copy) void(^rewardVideoAdViewDidPlayFinishCallBack)(void);

+ (instancetype)shared;

/// 初始化GD
- (void)initializeGDAdConfig;

/// 初始化Banner广告
- (void)initializationGDBannerRootViewController:(UIViewController *)viewController superView:(UIView *)superView frame:(CGRect)frame;
/// 展示Banner广告
- (void)showGDBanner;
/// 移除Banner
- (void)removeGDBannerViewFromSuperView;

/// 初始化插屏广告
- (void)initializationGDInterstitialAd:(UIViewController *)viewController;
/// 展现插屏
- (void)showGDInterstitialAd;

/// 初始化激励视频广告
- (void)initializationGDRewardVideoAd:(UIViewController *)viewController;
/// 展示激励视频广告
- (void)showGDRewardVideoAd;



@end

NS_ASSUME_NONNULL_END
