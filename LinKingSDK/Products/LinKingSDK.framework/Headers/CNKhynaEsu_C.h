
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CNKhynaEsu_C <NSObject>

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


- (void)interstitialAdDidLoadFail:(NSError * _Nullable)error;
- (void)interstitialAdDidVisibleFail:(NSError * _Nullable)error;
- (void)interstitialAdDidFinishLoading;
- (void)interstitialAdDidVisible;
- (void)interstitialAdDidClose;
- (void)interstitialAdDidClick;



@end

@interface CNKhynaEsu_C : NSObject

@end

NS_ASSUME_NONNULL_END
