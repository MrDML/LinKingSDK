//
//  Boilercountry.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/16.
//  Copyright © 2020 . All rights reserved.
//

#import <UIKit/UIKit.h>

@class Ejectquestionnaire;
@class Urbanisationnegotiable;
@class Personneldoomed;
@class Compartmentdespicable;
@class Boilercountry;
@class Voguepremier;
NS_ASSUME_NONNULL_BEGIN


@protocol BoilercountryDelegate <NSObject>

@required
- (void)lkSDKInitializeManager:(Boilercountry *)manager withFail:(NSError *)error;
@end

@interface Boilercountry : NSObject

@property (nonatomic, copy) void(^initializeSDKCallBack)(Boilercountry * _Nullable manager,NSError * _Nullable error);
/// 授权管理类
@property (nonatomic, strong,readonly) Ejectquestionnaire *oauthManager;
/// 支付管理类
@property (nonatomic, strong,readonly) Urbanisationnegotiable *payManager;
/// 数据分析管理类
@property (nonatomic, strong,readonly) Personneldoomed *afManager;
/// 广告管理对象
@property (nonatomic, strong,readonly) Compartmentdespicable *adManager;
/// 打点管理类
@property (nonatomic, strong,readonly) Voguepremier *pointManager;

@property (nonatomic, weak) id<BoilercountryDelegate>delegate;

+ (instancetype)instance;


/// 注册数据分析
- (void)registAnalysis;
/// 注册SDK
/// @param appId  平台分发的appId
/// @param secretkey 平台分发的key
/// @param complete 完成注册的回调
- (void)Catholicdisrespectful:(NSString * _Nonnull)appId withSecretkey:(NSString * _Nonnull)secretkey cmoplete:(void(^_Nonnull)(Boilercountry *_Nullable manager,NSError * _Nullable error))complete;

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
