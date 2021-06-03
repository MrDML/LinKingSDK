







#import <Foundation/Foundation.h>


#ifdef LUMBERJACK

#define LOG_LEVEL_DEF lkLogLevel
#import <CocoaLumberjack/CocoaLumberjack.h>

#else 


typedef NS_OPTIONS(NSUInteger, LKLogFlag) {
    

    LKLogFlagError         = (1 << 0),
    
    

    LKLogFlagWaring         = (1 << 1),
    
    

    LKLogFlagInfo        = (1 << 2),
    
    

    LKLogFlagDebug       = (1 << 3),
    
    

    LKLogFlagVerbose       = (1 << 4)
    
};


typedef NS_ENUM(NSUInteger,LKLogLevel){
    
    

    LKLogLevelOff     = 0,
    
    

    LKLogLevelErro    = (LKLogFlagError),
    
    

    LKLogLevelWarning    = (LKLogFlagError | LKLogFlagWaring),
    
    

    LKLogLevelInfo   = (LKLogLevelWarning | LKLogFlagInfo),
    
    

    LKLogLevelDebug  = (LKLogLevelInfo | LKLogFlagDebug),
    
    

    LKLogLevelVerbose  = (LKLogLevelDebug | LKLogFlagVerbose),
    
    

    LKLogLevelALL   =  NSUIntegerMax
    
    
};


#define LKLogVerbose if ( lkLogLevel & LKLogFlagVerbose ) NSLog
#define LKLogDebug if ( lkLogLevel & LKLogFlagDebug ) NSLog
#define LKLogWarn if ( lkLogLevel & LKLogFlagWaring ) NSLog
#define LKLogInfo if ( lkLogLevel & LKLogFlagInfo ) NSLog
#define LKLogError if ( lkLogLevel & LKLogFlagError ) NSLog


#endif 




extern LKLogLevel lkLogLevel;



@interface CNCheckmark : NSObject







+ (void)setLogLevel:(LKLogLevel)logLevel;


@end

