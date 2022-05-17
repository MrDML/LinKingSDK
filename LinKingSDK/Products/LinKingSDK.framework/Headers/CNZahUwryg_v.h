
#import <Foundation/Foundation.h>
typedef NS_ENUM(NSUInteger,LKMQTTLogLevel){
    
    
    LKMQTTLogLevelOff     = 0,
    
    
    LKMQTTLogLevelErro  ,
    
    
    LKMQTTLogLevelWarning   ,
    
    
    LKMQTTLogLevelInfo  ,
    
    
    LKMQTTLogLevelDebug ,
    
    
    LKMQTTLogLevelVerbose,
    
    
    LKMQTTLogLevelALL   =  NSUIntegerMax
    
    
};

typedef NS_ENUM(NSUInteger,LKThirdLogLevel) {
    
    LKThirdLogLevelOff = 0,
    
    LKThirdLogLevelOn = 1
};

NS_ASSUME_NONNULL_BEGIN

@interface CNZahUwryg_v : NSObject
+ (void)setThirdLog:(LKThirdLogLevel)level;
+ (void)setDefaultLog;
+ (void)setAppsFlyerisDebug:(BOOL)isDebug;
+ (void)setMQTTLogLevel:(LKMQTTLogLevel)logLevel;
@end

NS_ASSUME_NONNULL_END
