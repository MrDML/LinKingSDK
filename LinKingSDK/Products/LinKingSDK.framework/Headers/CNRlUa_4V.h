

#import <UIKit/UIKit.h>


@class CNKz_CLL;
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


typedef NS_ENUM(NSInteger,LKPAYUSERTYPE) {
    LK_UNDEFINED = 0,  
    LK_PAY = 1,        
    LK_NOPAY = 2       
};


NS_ASSUME_NONNULL_BEGIN
@protocol LKAdManagerDelegate <NSObject>

@optional


- (void)bannerAdDidLoadFail:(NSError * _Nullable)error;
- (void)bannerAdDidClose;
- (void)bannerAdDidClick;
- (void)bannerAdDidVisible;


- (void)rewardAdDidLoadFail:(NSError * _Nullable)error;
- (void)rewardAdDidClose;
- (void)rewardAdDidClick;
- (void)rewardAdDidVisible;
- (void)rewardAdWinReward;



- (void)interstitialAdDidLoadFail:(NSError * _Nullable)error;
- (void)interstitialAdDidClose;
- (void)interstitialAdDidClick;
- (void)interstitialAdDidVisible;

- (void)adDidFinishLoading:(LKADTYPE)type;

- (void)adDidFailToLoadCallBack:(NSError * _Nullable)error;


@end

@interface CNRlUa_4V : NSObject
@property (nonatomic, assign,readonly) LKPLATFORM platform;
@property (nonatomic, weak) id <LKAdManagerDelegate>delegate;

+ (instancetype)shared;

- (void)registerAggregateAd;

- (void)initAd:(LKADTYPE)type rootViewController:(UIViewController * _Nonnull)viewController superView:(UIView * _Nullable)superView;

- (void)showBanner;
- (void)showInterstitialAd;
- (void)showRewardVideoAd;



- (void)showBannerPayuser:(LKPAYUSERTYPE)type;
- (void)showInterstitialAdPayuser:(LKPAYUSERTYPE)type;
- (void)showRewardVideoAdPayuser:(LKPAYUSERTYPE)type;


@end

NS_ASSUME_NONNULL_END
