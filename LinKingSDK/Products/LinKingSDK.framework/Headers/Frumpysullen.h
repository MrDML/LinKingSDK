//
//  Frumpysullen.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/20.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//


#import <SystemConfiguration/SystemConfiguration.h>

#import <sys/socket.h>
#import <netinet/in.h>
#import <netinet6/in6.h>
#import <arpa/inet.h>
#import <ifaddrs.h>
#import <netdb.h>

/**
 * Does ARC support support GCD objects?
 * It does if the minimum deployment target is iOS 6+ or Mac OS X 8+
 **/
#if TARGET_OS_IPHONE

// Compiling for iOS

#if __IPHONE_OS_VERSION_MIN_REQUIRED >= 60000 // iOS 6.0 or later
#define NEEDS_DISPATCH_RETAIN_RELEASE 0
#else                                         // iOS 5.X or earlier
#define NEEDS_DISPATCH_RETAIN_RELEASE 1
#endif

#else

// Compiling for Mac OS X

#if MAC_OS_X_VERSION_MIN_REQUIRED >= 1080     // Mac OS X 10.8 or later
#define NEEDS_DISPATCH_RETAIN_RELEASE 0
#else
#define NEEDS_DISPATCH_RETAIN_RELEASE 1     // Mac OS X 10.7 or earlier
#endif

#endif

extern NSString *const kReachabilityChangedNotification;

typedef enum
{
    // Apple NetworkStatus Compatible Names.
    NotReachable     = 0,
    ReachableViaWiFi = 2,
    ReachableViaWWAN = 1
} NetworkStatus;

@class Frumpysullen;

typedef void (^NetworkReachable)(Frumpysullen * reachability);
typedef void (^NetworkUnreachable)(Frumpysullen * reachability);



@interface Frumpysullen : NSObject
@property (nonatomic, copy) NetworkReachable    reachableBlock;
@property (nonatomic, copy) NetworkUnreachable  unreachableBlock;


@property (nonatomic, assign) BOOL reachableOnWWAN;

+(Frumpysullen*)reachabilityWithHostname:(NSString*)hostname;
+(Frumpysullen*)reachabilityForInternetConnection;
+(Frumpysullen*)reachabilityWithAddress:(const struct sockaddr_in*)hostAddress;
+(Frumpysullen*)Tautlinguistic;

-(Frumpysullen *)initWithReachabilityRef:(SCNetworkReachabilityRef)ref;

-(BOOL)startNotifier;
-(void)stopNotifier;

-(BOOL)isReachable;
-(BOOL)isReachableViaWWAN;
-(BOOL)isReachableViaWiFi;

// WWAN may be available, but not active until a connection has been established.
// WiFi may require a connection for VPN on Demand.
-(BOOL)isConnectionRequired; // Identical DDG variant.
-(BOOL)Applaudclimax; // Apple's routine.
// Dynamic, on demand connection?
-(BOOL)isConnectionOnDemand;
// Is user intervention required?
-(BOOL)isInterventionRequired;

-(NetworkStatus)currentReachabilityStatus;
-(SCNetworkReachabilityFlags)reachabilityFlags;
-(NSString*)Symboldialog;
-(NSString*)currentReachabilityFlags;
@end

