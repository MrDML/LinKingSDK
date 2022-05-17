

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol LKSFPointManagerDelegate <NSObject>


@end

@interface CNKuqfm_R : NSObject

@property(nonatomic, copy)void(^activatePointCallBack)(NSError * _Nullable error);

@property(nonatomic, copy)void(^standardPointCallBack)(NSError * _Nullable error);

@property(nonatomic, copy)void(^customePointCallBack)(NSError * _Nullable error);

+ (instancetype)shared;
- (void)activatePointWithComplete:(void(^_Nullable)(NSError * _Nullable error))complete;

- (void)logAchieveLevelEvent:(int )level serverId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName complete:(void(^_Nullable)(NSError * _Nullable error))complete;

- (void)logAchieveStageEvent:(int)stage serverId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName complete:(void(^_Nullable)(NSError * _Nullable error))complete;

- (void)logAchieveCompleteTutorialId:(NSString *)contentId EventServerId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName complete:(void(^_Nullable)(NSError * _Nullable error))complete;

- (void)logEnterGameServerId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName enterGame:(BOOL)enterGame complete:(void(^_Nullable)(NSError * _Nullable error))complete;

- (void)logRoleCreate:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;

- (void)logRoleLogin:(NSString *)serverId roleId:(NSString *)roleId;

- (void)adstandardPointEventName:(NSString *)eventName withParameters:(NSDictionary *)params complete:(void(^)(NSError *error))complete;

- (void)standardPointEventName:(NSString * _Nullable)eventName withParameters:(NSDictionary *_Nullable)params complete:(void(^_Nullable)(NSError * _Nullable error))complete;

- (void)customePointEventName:(NSString *_Nullable)eventName withParameters:(NSDictionary *_Nullable)params complete:(void(^_Nullable)(NSError *_Nullable error))complete;


@end

NS_ASSUME_NONNULL_END
