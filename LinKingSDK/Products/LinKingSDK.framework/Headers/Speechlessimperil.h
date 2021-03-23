//
//  Speechlessimperil.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/16.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Implementationantagonist;
@class Believebatter;
@class Landlockedbottle;
@class Slagpresidency;
@class Speechlessimperil;
@class Demarcateincentive;
NS_ASSUME_NONNULL_BEGIN


@protocol SpeechlessimperilDelegate <NSObject>

@required
- (void)lkSDKInitializeManager:(Speechlessimperil *)manager withFail:(NSError *)error;
@end

@interface Speechlessimperil : NSObject

@property (nonatomic, copy) void(^initializeSDKCallBack)(Speechlessimperil * _Nullable manager,NSError * _Nullable error);
/// 授权管理类
@property (nonatomic, strong,readonly) Implementationantagonist *oauthManager;
/// 支付管理类
@property (nonatomic, strong,readonly) Believebatter *payManager;
/// 数据分析管理类
@property (nonatomic, strong,readonly) Landlockedbottle *afManager;
/// 广告管理对象
@property (nonatomic, strong,readonly) Slagpresidency *adManager;
/// 打点管理类
@property (nonatomic, strong,readonly) Demarcateincentive *pointManager;

@property (nonatomic, weak) id<SpeechlessimperilDelegate>delegate;

+ (instancetype)instance;


/// 注册数据分析
- (void)registAnalysis;
/// 注册SDK
/// @param appId  平台分发的appId
/// @param secretkey 平台分发的key
/// @param complete 完成注册的回调
- (void)Automationprecaution:(NSString * _Nonnull)appId withSecretkey:(NSString * _Nonnull)secretkey cmoplete:(void(^_Nonnull)(Speechlessimperil *_Nullable manager,NSError * _Nullable error))complete;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *_Nullable)launchOptions;

- (void)applicationWillTerminate:(UIApplication *)application;

- (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url;

- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

- (BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void(^)(NSArray<id<UIUserActivityRestoring>> * __nullable restorableObjects))restorationHandler;

- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options;

- (void)scene:(UIScene *)scene continueUserActivity:(NSUserActivity *)userActivity  API_AVAILABLE(ios(13.0)) API_AVAILABLE(ios(13.0));

- (void)scene:(UIScene *)scene openURLContexts:(NSSet<UIOpenURLContext *> *)URLContexts API_AVAILABLE(ios(13.0));


@end

NS_ASSUME_NONNULL_END
