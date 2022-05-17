

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CNKz_CLL : NSObject

@property (nonatomic, copy) void(^bannerAdViewDidLoadCallBack)(void);
@property (nonatomic, copy) void(^bannerAdViewDidLoadFailCallBack)(NSError * _Nullable error);
@property (nonatomic, copy) void(^bannerAdViewRenderCallBack)(void);
@property (nonatomic, copy) void(^bannerAdViewRenderFailCallBack)(NSError * _Nullable error);
@property (nonatomic, copy) void(^bannerAdViewVisibleCallBack)(void);
@property (nonatomic, copy) void(^bannerAdViewDidClickCallBack)(void);
@property (nonatomic, copy) void(^bannerAdViewCloseReasonCallBack)(void);
@property (nonatomic, copy) void(^bannerAdViewDidCloseOtherControllerCallBack)(void);

@property (nonatomic, copy) void(^interstitialAdViewDidLoadCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdViewDidLoadFailCallBack)(NSError * _Nullable error);
@property (nonatomic, copy) void(^interstitialAdViewRenderCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdViewRenderFailCallBack)(NSError * _Nullable error);
@property (nonatomic, copy) void(^interstitialAdViewVisibleCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdViewDidClickCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdViewWillCloseCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdViewDidCloseCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdViewDidCloseOtherControllerCallBack)(void);

@property (nonatomic, copy) void(^rewardAdViewDidLoadCallBack)(void);
@property (nonatomic, copy) void(^rewardAdViewDidLoadFailCallBack)(NSError * _Nullable error);
@property (nonatomic, copy) void(^rewardAdViewRenderCallBack)(void);
@property (nonatomic, copy) void(^rewardAdViewRenderFailCallBack)(NSError * _Nullable error);
@property (nonatomic, copy) void(^rewardAdViewDidDownLoadCallBack)(void);
@property (nonatomic, copy) void(^rewardAdViewWillVisibleCallBack)(void);
@property (nonatomic, copy) void(^rewardAdViewDidVisibleCallBack)(void);
@property (nonatomic, copy) void(^rewardAdViewDidClickCallBack)(void);
@property (nonatomic, copy) void(^rewardAdViewWillCloseCallBack)(void);
@property (nonatomic, copy) void(^rewardAdViewDidCloseCallBack)(void);
@property (nonatomic, copy) void(^rewardAdViewDidClickSkipCallBack)(void);
@property (nonatomic, copy) void(^rewardAdViewDidPlayFinishCallBack)(NSError * _Nullable error);
@property (nonatomic, copy) void(^rewardAdViewRewardDidSucceedCallBack)(void);
@property (nonatomic, copy) void(^rewardAdViewRewardDidFailCallBack)(void);
@property (nonatomic, copy) void(^rewardAdViewDidCloseOtherControllerCallBack)(void);

@property (nonatomic, copy) void(^fullscreenAdViewDidLoadCallBack)(void);
@property (nonatomic, copy) void(^fullscreenAdViewDidLoadFailCallBack)(NSError * _Nullable error);
@property (nonatomic, copy) void(^fullscreenAdViewRenderCallBack)(void);
@property (nonatomic, copy) void(^fullscreenAdViewRenderFailCallBack)(NSError * _Nullable error);
@property (nonatomic, copy) void(^fullscreenAdViewDidDownLoadCallBack)(void);
@property (nonatomic, copy) void(^fullscreenAdViewWillVisibleCallBack)(void);
@property (nonatomic, copy) void(^fullscreenAdViewDidVisibleCallBack)(void);
@property (nonatomic, copy) void(^fullscreenAdViewDidClickCallBack)(void);
@property (nonatomic, copy) void(^fullscreenAdViewWillCloseCallBack)(void);
@property (nonatomic, copy) void(^fullscreenAdViewDidCloseCallBack)(void);
@property (nonatomic, copy) void(^fullscreenAdViewDidClickSkipCallBack)(void);
@property (nonatomic, copy) void(^fullscreenAdViewDidPlayFinishCallBack)(NSError * _Nullable error);
@property (nonatomic, copy) void(^fullscreenAdViewRewardDidSucceedCallBack)(void);
@property (nonatomic, copy) void(^fullscreenAdViewRewardDidFailCallBack)(void);
@property (nonatomic, copy) void(^fullscreenAdViewDidCloseOtherControllerCallBack)(void);



+ (instancetype)shared;
- (void)initializeTitokAdConfig;

- (void)initializationTittokBannerRootViewController:(UIViewController *)viewController superView:(UIView *)superView frame:(CGRect)frame;
- (void)showTittokBanner;
- (void)removeBannerViewFromSuperView;


- (void)initializationTittokInterstitialAd:(UIViewController *)viewController;
- (void)showTittokInterstitialAd;


- (void)initializationTittokRewardVideoAd:(UIViewController *)viewController;
- (void)showTittokRewardVideoAd;


- (void)initializationTittokFullScreenVideoAd:(UIViewController *)viewController;;

- (void)showTittokFullScreenVideoAd;



@end


NS_ASSUME_NONNULL_END
