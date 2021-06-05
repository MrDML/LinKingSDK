







#import <Foundation/Foundation.h>
#import "CNConcrete.h"
@class MQTTSessionManager;
NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, MQTTSessionState) {
    MQTTSessionStateStarting,
    MQTTSessionStateConnecting,
    MQTTSessionStateError,
    MQTTSessionStateConnected,
    MQTTSessionStateClosing,
    MQTTSessionStateClosed
};

@protocol CNInfoLegacy

@required



- (NSDictionary *)mqttSettings;


- (NSString *)getObserverTopic;


- (void)connectWithDisconnectHandler:(void(^)(NSError *error))connectHandler;


- (void)disconnectWithDisconnectHandler:(void(^)(NSError *error))connectHandler;


- (void)send:(NSString *)message;

@optional

@property (nonatomic, copy) void(^messageHandler)(NSData *data,NSString *topic,BOOL retained);

@property (nonatomic, copy) void(^stateChangeHandler)(MQTTSessionState state);


- (void)MQTTHandleMessage:(NSData *)data onTopic:(NSString *)topic retained:(BOOL)retained;


- (void)MQTTHandleState:(MQTTSessionState)state;
@end

@interface CNInfoLegacy : NSObject<CNInfoLegacy>
@property (strong, nonatomic) MQTTSessionManager *manager;


- (void)addMQTTObserver:(NSObject<CNConcrete>*)obejct;


- (void)removeMQTTObserver:(NSObject<CNConcrete> *)object;

- (void)removeALLObserver;
@property (nonatomic,strong,readonly) NSMutableArray *observes;
@end

NS_ASSUME_NONNULL_END
