//
//  Voguepremier.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/27.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN


@interface Voguepremier : NSObject


+ (instancetype)shared;


/// 进入游戏
/// @param serverId 区服id
/// @param roleId 角色id
/// @param roleName 角色名
/// @param enterGame 进入游戏（false单区,true多区）
- (void)logEnterGame:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName enterGame:(BOOL)enterGame;

/// 新手引导
/// @param contentId 内容id
/// @param content 内容
/// @param serverId 区服ID
/// @param roleId 角色id
/// @param roleName 角色名
- (void)logTutorial:(NSString *)contentId content:(NSString *)content EventServerId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;

/// 关卡
/// @param stage 关卡
/// @param serverId 区服id
/// @param roleId 角色id
/// @param roleName 角色名
- (void)logStage:(int)stage serverId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;

/// 等级
/// @param level 等级
/// @param serverId 区服Id
/// @param roleId 角色id
/// @param roleName 角色名
- (void)logLevel:(int)level serverId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;

/// 无参自定义事件
/// @param event 事件名
- (void)logEvent:(NSString *)event;

/// 有参自定义事件
/// @param event 事件名
/// @param values 参数
- (void)logEvent:(NSString *)event withValues:(NSDictionary *_Nullable)values;


- (void)adLogEventName:(NSString *)eventName withParameters:(NSDictionary *_Nullable)params complete:(void(^_Nullable)(NSError *_Nullableerror))complete;

@end

NS_ASSUME_NONNULL_END
