







#import <UIKit/UIKit.h>

#import "CNAnimatedUtton.h"
typedef NS_ENUM(NSInteger, LK_ADTYPE) {
    LK_ADTYPE_REWARDVIDEO = 0,
    LK_ADTYPE_INTERSTITAL = 1,
    LK_ADTYPE_BANNER = 2,
};


typedef NS_ENUM(NSInteger,LK_PAYUSERTYPE) {
    LK_PAYUSERTYPE_UNDEFINED = 0,  
    LK_PAYUSERTYPE_PAY = 1,        
    LK_PAYUSERTYPE_NOPAY = 2       
};

@protocol LKAdFaceDelegate <NSObject>

@optional


- (void)bannerAdDidLoadFail:(NSError * _Nullable)error;

- (void)bannerAdDidFinishLoading;

- (void)bannerAdDidClose;

- (void)bannerAdDidClick;

- (void)bannerAdDidVisible;




- (void)rewardAdDidLoadFail:(NSError * _Nullable)error;


- (void)rewardAdDidVisibleFail:(NSError * _Nullable)error;

- (void)rewardAdDidFinishLoading;

- (void)rewardAdDidVisible;

- (void)rewardAdDidClose;

- (void)rewardAdDidClick;

- (void)rewardAdWinReward;


@optional


- (void)interstitialAdDidLoadFail:(NSError * _Nullable)error;


- (void)interstitialAdDidVisibleFail:(NSError * _Nullable)error;

- (void)interstitialAdDidFinishLoading;

- (void)interstitialAdDidVisible;

- (void)interstitialAdDidClose;

- (void)interstitialAdDidClick;

@end

NS_ASSUME_NONNULL_BEGIN

@interface CNUtoCoder : CNAnimatedUtton<CNAnimatedUtton>
@property (nonatomic, weak) id <LKAdFaceDelegate>delegate;

+ (instancetype)shared;


- (void)registerAggregateAd;





- (void)initAd:(LK_ADTYPE)type rootViewController:(UIViewController * _Nonnull)viewController superView:(UIView * _Nullable)superView;



- (void)showBannerPayuser:(LK_PAYUSERTYPE)type;

- (void)removeBanner;


- (void)showInterstitialAdPayuser:(LK_PAYUSERTYPE)type;


- (void)showRewardVideoAdPayuser:(LK_PAYUSERTYPE)type;

@end

NS_ASSUME_NONNULL_END
