
#import <UIKit/UIKit.h>

@class CNTsMz_W;
@class CNYam_5;
@class CNUaqLj_l;
@class CNRlUa_4V;
@class CNYsTo_UU;
@class CNBnzys_oJc;
@class CNLd_K;
NS_ASSUME_NONNULL_BEGIN


@protocol LKSDKManagerDelegate <NSObject>

@required
- (void)lkSDKInitializeManager:(CNYsTo_UU *)manager withFail:(NSError *)error;
@end

@interface CNYsTo_UU : NSObject

@property (nonatomic, copy) void(^initializeSDKCallBack)(CNYsTo_UU * _Nullable manager,NSError * _Nullable error);
@property (nonatomic, strong,readonly) CNTsMz_W *oauthManager;
@property (nonatomic, strong,readonly) CNYam_5 *payManager;
@property (nonatomic, strong,readonly) CNUaqLj_l *afManager;
@property (nonatomic, strong,readonly) CNRlUa_4V *adManager;
@property (nonatomic, strong,readonly) CNLd_K *adFace;
@property (nonatomic, strong,readonly) CNBnzys_oJc *pointManager;

@property (nonatomic, weak) id<LKSDKManagerDelegate>delegate;

+ (instancetype)instance;


- (void)registAnalysis;
- (void)registLinKingSDKAppID:(NSString * _Nonnull)appId withSecretkey:(NSString * _Nonnull)secretkey cmoplete:(void(^_Nonnull)(CNYsTo_UU *_Nullable manager,NSError * _Nullable error))complete;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *_Nullable)launchOptions;

- (void)applicationWillTerminate:(UIApplication *)application;
- (void)applicationDidBecomeActive:(UIApplication *)application;
- (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url;

- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

- (BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void(^)(NSArray<id<UIUserActivityRestoring>> * __nullable restorableObjects))restorationHandler;

- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options;

- (void)scene:(UIScene *)scene continueUserActivity:(NSUserActivity *)userActivity  API_AVAILABLE(ios(13.0)) API_AVAILABLE(ios(13.0));

- (void)scene:(UIScene *)scene openURLContexts:(NSSet<UIOpenURLContext *> *)URLContexts API_AVAILABLE(ios(13.0));


@end

NS_ASSUME_NONNULL_END
