#import <UIKit/UIKit.h>
#import "LKRealNameVerify.h"
NS_ASSUME_NONNULL_BEGIN

@class CNZjGwlv_B;
@protocol LKOauthManagerDelegate <NSObject>
- (void)logoutSDKCallback;
- (void)changeAccountCallBack;
@end

@interface CNTsMz_W : NSObject
+ (instancetype)instance;
@property (nonatomic, strong) UIViewController *viewController;
@property (nonatomic, weak) id <LKOauthManagerDelegate>delegate;
@property (nonatomic,copy)void(^bindingAccountCompleteCallBack)(CNZjGwlv_B * _Nullable user,NSError *_Nullable error);

@property (nonatomic,copy)void(^realNameCompleteCallBack)(BOOL isSuccess,CNZjGwlv_B * _Nullable user,NSError *_Nullable error);
- (BOOL)isRealName;
- (void)showRealNameViewRootViewController:(UIViewController *)viewController complete:(void(^)(BOOL isCancel,NSError * _Nullable error))complete;
- (RealVerifyState)getRealVerifyState;
- (void)loginWithDashboardRootViewController:(UIViewController *)viewController complete:(void(^)(CNZjGwlv_B * _Nullable user,NSError *_Nullable error))complete;
- (void)loginApiWithRootViewController:(UIViewController *_Nullable)viewController complete:(void(^)(CNZjGwlv_B * _Nullable user,NSError * _Nullable error))complete;
- (void)showFloatViewDashboard:(UIViewController *)viewController;
- (void)hiddenFloatViewDashboard;
- (void)logOutSDK;

@end

NS_ASSUME_NONNULL_END
