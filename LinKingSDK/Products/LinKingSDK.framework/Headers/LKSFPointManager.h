//
//  LKSFPointManager.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/27.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol LKSFPointManagerDelegate <NSObject>


@end

@interface LKSFPointManager : NSObject

@property(nonatomic, copy)void(^activatePointCallBack)(NSError * _Nullable error);

@property(nonatomic, copy)void(^standardPointCallBack)(NSError * _Nullable error);

@property(nonatomic, copy)void(^customePointCallBack)(NSError * _Nullable error);

+ (instancetype)shared;
// 激活打点
- (void)activatePointWithComplete:(void(^_Nullable)(NSError * _Nullable error))complete;
/// 标准事件 -
- (void)standardPointEventName:(NSString * _Nullable)eventName withParameters:(NSDictionary *_Nullable)params complete:(void(^_Nullable)(NSError * _Nullable error))complete;

/// 自定义事件 -
- (void)customePointEventName:(NSString *_Nullable)eventName withParameters:(NSDictionary *_Nullable)params complete:(void(^_Nullable)(NSError *_Nullable error))complete;

- (void)adstandardPointEventName:(NSString *)eventName withParameters:(NSDictionary *)params complete:(void(^)(NSError *error))complete;
@end

NS_ASSUME_NONNULL_END
