//
//  LKPointManager.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/27.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol LKPointManagerDelegate <NSObject>

@optional
- (void)activatePointWithFail:(NSError *)error;



@end

@interface LKPointManager : NSObject

@property(nonatomic, assign) id <LKPointManagerDelegate> delegate;
+ (instancetype)shared;
// 激活打点
- (void)activatePointWithComplete:(void(^)(NSError * _Nullable error))complete;
// 标准打点
- (void)standardLogEventName:(NSString *)eventName withParameters:(NSDictionary * _Nullable)params complete:(void(^_Nullable)(NSError * _Nullable error))complete;
- (void)standardLogEventName:(NSString *)eventName complete:(void(^_Nullable)(NSError *_Nullable error))complete;

// 自定义打点
- (void)customeLogEventName:(NSString *)eventName withParameters:(NSDictionary * _Nullable)params complete:(void(^_Nullable)(NSError *_Nullable error))complete;
- (void)customeLogEventName:(NSString *)eventName complete:(void(^_Nullable)(NSError *_Nullable error))complete;
// 广告打点
- (void)adLogEventName:(NSString *)eventName withParameters:(NSDictionary *_Nullable)params complete:(void(^_Nullable)(NSError *_Nullableerror))complete;
@end

NS_ASSUME_NONNULL_END
