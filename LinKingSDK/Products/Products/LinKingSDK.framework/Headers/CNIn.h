#import <UIKit/UIKit.h>
#import "LKRealNameVerify.h"
NS_ASSUME_NONNULL_BEGIN

@class CNSe;
@protocol LKOauthManagerDelegate <NSObject>

- (void)logoutSDKCallback;
- (void)changeAccountCallBack;
@end

@interface CNIn : NSObject
+ (instancetype)instance;
@property (nonatomic, strong) UIViewController *viewController;
@property (nonatomic, weak) id <LKOauthManagerDelegate>delegate;
@property (nonatomic,copy)void(^bindingAccountCompleteCallBack)(CNSe * _Nullable user,NSError *_Nullable error);


@property (nonatomic,copy)void(^realNameCompleteCallBack)(BOOL isSuccess,CNSe * _Nullable user,NSError *_Nullable error);

- (BOOL)isRealName;

- (void)showRealNameViewRootViewController:(UIViewController *)viewController complete:(void(^)(BOOL isCancel,NSError * _Nullable error))complete;

- (RealVerifyState)getRealVerifyState;



- (void)loginWithDashboardRootViewController:(UIViewController *)viewController complete:(void(^)(CNSe * _Nullable user,NSError *_Nullable error))complete;



- (void)loginApiWithRootViewController:(UIViewController *_Nullable)viewController complete:(void(^)(CNSe * _Nullable user,NSError * _Nullable error))complete;


- (void)showFloatViewDashboard:(UIViewController *)viewController;

- (void)hiddenFloatViewDashboard;

- (void)logOutSDK;

@end

NS_ASSUME_NONNULL_END
