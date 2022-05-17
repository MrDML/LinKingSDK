
#import <UIKit/UIKit.h>
#import "CNAzbTkyu_Ybu.h"

NS_ASSUME_NONNULL_BEGIN

@protocol CNFrg_jCX <NSObject>

- (void)initBannerAdWithrootViewController:(UIViewController * _Nonnull)viewController superView:(UIView * _Nullable)superView;
- (void)showBanner;
- (void)removeBannerViewFromSuperView;

- (void)initInterstitialAdWithrootViewController:(UIViewController * _Nonnull)viewController;
- (void)showInterstitialAd;

- (void)initRewardVideoAdWithrootViewController:(UIViewController * _Nonnull)viewController;
- (void)showRewardVideoAd;

@optional
- (void)setAdContext:(CNAzbTkyu_Ybu<CNAzbTkyu_Ybu>* _Nullable)context;


@end

@interface CNFrg_jCX : NSObject

@end

NS_ASSUME_NONNULL_END
