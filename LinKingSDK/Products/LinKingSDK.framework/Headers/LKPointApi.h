//
//  LKPointApi.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/27.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "LKBaseApi.h"

NS_ASSUME_NONNULL_BEGIN

@interface LKPointApi : LKBaseApi

/// 打点事件接口
/// @param eventName <#eventName description#>
/// @param values <#values description#>
/// @param complete <#complete description#>
+ (void)pointEventName:(NSString *)eventName withTp:(NSString *_Nullable)tp withValues:(NSDictionary *_Nullable)values complete:(void(^_Nullable)(NSError *error))complete;

/// 广告打点
/// @param eventName <#eventName description#>
/// @param values <#values description#>
/// @param complete <#complete description#>
+ (void)adPointEventName:(NSString * _Nullable)eventName withValues:(NSDictionary * _Nullable)values complete:(void(^_Nullable)(NSError *error))complete;
@end

NS_ASSUME_NONNULL_END
