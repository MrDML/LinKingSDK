//
//  LKLog.h
//  LinKingSDK
//
//  Created by leon on 2021/5/26.
//  Copyright © 2021 dml1630@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>

// 如果项目中使用了第三方的日志框架
#ifdef LUMBERJACK

#define LOG_LEVEL_DEF lkLogLevel
#import <CocoaLumberjack/CocoaLumberjack.h>

#else /* LUMBERJACK */

typedef NS_OPTIONS(NSUInteger, LKLogFlag) {
    /**
       0000 0001 LKLogFlagError
     */
    LKLogFlagError         = (1 << 0),
    
    /**
       0000 0010 LKLogFlagWaring
     */
    LKLogFlagWaring         = (1 << 1),
    
    /**
       0000 0100 LKLogFlagInfo
     */
    LKLogFlagInfo        = (1 << 2),
    
    /**
       0000 1000 LKLogDebug
     */
    LKLogFlagDebug       = (1 << 3),
    
    /**
       0001 0000 LKLogDebug
     */
    LKLogFlagVerbose       = (1 << 4)
    
};


typedef NS_ENUM(NSUInteger,LKLogLevel){
    
    /* 关闭日志 */
    LKLogLevelOff     = 0,
    
    /* 仅仅是错误日志 */
    LKLogLevelErro    = (LKLogFlagError),
    
    /* 错误和警告日志 */
    LKLogLevelWarning    = (LKLogFlagError | LKLogFlagWaring),
    
    /* 错误和警告，提示 日志 */
    LKLogLevelInfo   = (LKLogLevelWarning | LKLogFlagInfo),
    
    /* 错误和警告，提示 , debug 日志 */
    LKLogLevelDebug  = (LKLogLevelInfo | LKLogFlagDebug),
    
    /* 错误和警告，提示 , debug,Verbose 日志 */
    LKLogLevelVerbose  = (LKLogLevelDebug | LKLogFlagVerbose),
    
    /* 所有日志 */
    LKLogLevelALL   =  NSUIntegerMax
    
    
};


#ifdef DEBUG

#define LKLogVerbose if ( lkLogLevel & LKLogFlagVerbose ) NSLog
#define LKLogDebug if ( lkLogLevel & LKLogFlagDebug ) NSLog
#define LKLogWarn if ( lkLogLevel & LKLogFlagWaring ) NSLog
#define LKLogInfo if ( lkLogLevel & LKLogFlagInfo ) NSLog
#define LKLogError if ( lkLogLevel & LKLogFlagError ) NSLog


#else

#define LKLogVerbose(...)
#define LKLogDebug(...)
#define LKLogWarn(...)
#define LKLogInfo(...)
#define LKLogError(...)

#endif


#endif /* LUMBERJACK */



extern LKLogLevel lkLogLevel;



@interface LKLog : NSObject



/// 设置日志级别
/// @param logLevel logLevel description
/**
 LKLogLevelOff
 LKLogLevelErro
 LKLogLevelWarning
 LKLogLevelInfo
 LKLogLevelDebug
 LKLogLevelVerbose
 LKLogLevelALL
 */
+ (void)setLogLevel:(LKLogLevel)logLevel;


@end

