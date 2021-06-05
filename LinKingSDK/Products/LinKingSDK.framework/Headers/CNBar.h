
#import <UIKit/UIKit.h>

@class CNIn;
@class CNEachabilityIsible;
@class CNAteCoders;
@class CNAddictionProcessor;
@class CNBar;
@class CNDividerEyboard;
@class CNUtoCoder;
NS_ASSUME_NONNULL_BEGIN


@protocol LKSDKManagerDelegate <NSObject>

@required
- (void)lkSDKInitializeManager:(CNBar *)manager withFail:(NSError *)error;
@end

@interface CNBar : NSObject

@property (nonatomic, copy) void(^initializeSDKCallBack)(CNBar * _Nullable manager,NSError * _Nullable error);

@property (nonatomic, strong,readonly) CNIn *oauthManager;

@property (nonatomic, strong,readonly) CNEachabilityIsible *payManager;

@property (nonatomic, strong,readonly) CNAteCoders *afManager;

@property (nonatomic, strong,readonly) CNAddictionProcessor *adManager;

@property (nonatomic, strong,readonly) CNUtoCoder *adFace;

@property (nonatomic, strong,readonly) CNDividerEyboard *pointManager;

@property (nonatomic, weak) id<LKSDKManagerDelegate>delegate;

+ (instancetype)instance;



- (void)registAnalysis;




- (void)registLinKingSDKAppID:(NSString * _Nonnull)appId withSecretkey:(NSString * _Nonnull)secretkey cmoplete:(void(^_Nonnull)(CNBar *_Nullable manager,NSError * _Nullable error))complete;

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
