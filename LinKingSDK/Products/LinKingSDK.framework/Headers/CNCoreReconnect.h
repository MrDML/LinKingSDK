







#import <UIKit/UIKit.h>
#import "CNEcurityLogin.h"

NS_ASSUME_NONNULL_BEGIN

@protocol CNCoreReconnect <NSObject>


- (void)initBannerAdWithrootViewController:(UIViewController * _Nonnull)viewController superView:(UIView * _Nullable)superView;

- (void)showBanner;

- (void)removeBannerViewFromSuperView;


- (void)initInterstitialAdWithrootViewController:(UIViewController * _Nonnull)viewController;

- (void)showInterstitialAd;


- (void)initRewardVideoAdWithrootViewController:(UIViewController * _Nonnull)viewController;

- (void)showRewardVideoAd;

@optional


- (void)setAdContext:(CNEcurityLogin<CNEcurityLogin>* _Nullable)context;


@end

@interface CNCoreReconnect : NSObject

@end

NS_ASSUME_NONNULL_END
