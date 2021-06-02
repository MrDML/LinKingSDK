







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
NS_ASSUME_NONNULL_BEGIN

@interface CNLibtoolPolicy : NSObject
+ (void)setDefaultLog;
+ (void)setAppsFlyerisDebug:(BOOL)isDebug;
+ (void)setMQTTLogLevel:(LKMQTTLogLevel)logLevel;
@end

NS_ASSUME_NONNULL_END
