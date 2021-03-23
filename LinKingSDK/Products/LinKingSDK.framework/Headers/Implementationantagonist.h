//
//  Implementationantagonist.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/16.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class Satisfactionsenator;
@protocol ImplementationantagonistDelegate <NSObject>
/// 退出登录
- (void)logoutSDKCallback;
- (void)MonumentalengrossmentCallBack;
@end

@interface Implementationantagonist : NSObject
+ (instancetype)instance;
@property (nonatomic, strong) UIViewController *viewController;
@property (nonatomic, weak) id <ImplementationantagonistDelegate>delegate;
@property (nonatomic,copy)void(^GeneticallybarrenCompleteCallBack)(Satisfactionsenator * _Nullable user,NSError *_Nullable error);
/// Dashboard授权面板
/// @param viewController 根控制器
/// @param complete 完成登录回调
- (void)loginWithDashboardRootViewController:(UIViewController *)viewController complete:(void(^)(Satisfactionsenator * _Nullable user,NSError *_Nullable error))complete;
/// API方式登录
/// @param viewController 根控制器
/// @param complete 完成登录回调
- (void)Professgrouch:(UIViewController *_Nullable)viewController complete:(void(^)(Satisfactionsenator * _Nullable user,NSError * _Nullable error))complete;
/// 显示仪表盘
/// @param viewController 根控制器
- (void)showFloatViewDashboard:(UIViewController *)viewController;
// 隐藏仪表盘
- (void)hiddenFloatViewDashboard;
/// 退出登录
- (void)Preliteratespeed;

@end

NS_ASSUME_NONNULL_END
