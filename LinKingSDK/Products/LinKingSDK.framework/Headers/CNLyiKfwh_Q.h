



#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface CNLyiKfwh_Q : NSObject

@property (nonatomic, copy) void(^topOnAdDidFinishLoadingCallBack)(NSString *_Nullable placementID,NSString *adType);
@property (nonatomic, copy) void(^topOnAdDidFailToLoadCallBack)(NSString * _Nullable placementID,NSError * _Nullable error);

@property (nonatomic, copy) void(^rewardedVideoDidClickCallBack)(NSString *_Nullable placementID,NSDictionary *_Nullable extra);
@property (nonatomic, copy) void(^rewardedVideoDidCloseCallBack)(NSString * _Nullable placementID,BOOL reward,NSDictionary *_Nullable extra);
@property (nonatomic, copy) void(^rewardedVideoDidEndPlayingCallBack)(NSString *_Nullable placementID,NSDictionary *_Nullable extra);
@property (nonatomic, copy) void(^rewardedVideoDidFailCallBack)(NSString * _Nullable placementID,NSError * _Nullable error,NSDictionary *_Nullable extra);
@property (nonatomic, copy) void(^rewardedVideoDidRewardSuccessCallBack)(NSString *_Nullable placementID,NSDictionary *_Nullable extra);
@property (nonatomic, copy) void(^rewardedVideoDidStartCallBack)(NSString * _Nullable placementID,NSDictionary *_Nullable extra);


@property (nonatomic, copy) void(^interstitialDidClickCallBack)(NSString *_Nullable placementID,NSDictionary *_Nullable extra);
@property (nonatomic, copy) void(^interstitialDidCloseCallBack)(NSString * _Nullable placementID,NSDictionary *_Nullable extra);
@property (nonatomic, copy) void(^interstitialDidEndPlayingCallBack)(NSString *_Nullable placementID,NSDictionary *_Nullable extra);
@property (nonatomic, copy) void(^interstitialDidFailCallBack)(NSString * _Nullable placementID,NSError * _Nullable error,NSDictionary *_Nullable extra);
@property (nonatomic, copy) void(^interstitialDidShowCallBack)(NSString *_Nullable placementID,NSDictionary *_Nullable extra);
@property (nonatomic, copy) void(^interstitialDidStartCallBack)(NSString *_Nullable placementID,NSDictionary *_Nullable extra);
@property (nonatomic, copy) void(^interstitialFailedToShowCallBack)(NSString * _Nullable placementID,NSError * _Nullable error,NSDictionary *_Nullable extra);


@property (nonatomic, copy) void(^bannerViewDidAutoRefreshCallBack)(NSString *_Nullable placementID,NSDictionary *_Nullable extra);
@property (nonatomic, copy) void(^bannerViewDidCloseCallBack)(NSString * _Nullable placementID,NSDictionary *_Nullable extra);
@property (nonatomic, copy) void(^bannerViewDidClickCallBack)(NSString *_Nullable placementID,NSDictionary *_Nullable extra);
@property (nonatomic, copy) void(^bannerViewDidShowAdCallBack)(NSString * _Nullable placementID,NSDictionary *_Nullable extra);
@property (nonatomic, copy) void(^bannerViewDidTapCloseCallBack)(NSString *_Nullable placementID,NSDictionary *_Nullable extra);
@property (nonatomic, copy) void(^bannerViewFailedToAutoRefreshCallBack)(NSString * _Nullable placementID,NSError * _Nullable error);

+ (instancetype)shared;

- (void)setLogEnabled:(BOOL)enable;

- (void)registerTopOnSDK;
- (void)initializationTopOnRewardVideoAd:(UIViewController *)viewController;
- (void)showToOnRewardVideoAd;

- (void)initializationTopOnInterstitialAd:(UIViewController *)viewController;
- (void)showTopOnInterstitialAd;

- (void)initializationTopOnBannerRootViewController:(UIViewController *)viewController superView:(UIView *)superView;
- (void)showTopOnBanner;
- (void)removeTopOnBannerViewFromSuperView;
- (BOOL)bannerViewAdReady;
- (BOOL)interstitialAdReady;
- (BOOL)rewardVideoAdReady;

@end



NS_ASSUME_NONNULL_END
