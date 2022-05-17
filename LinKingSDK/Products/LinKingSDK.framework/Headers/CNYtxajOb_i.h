

#import <SystemConfiguration/SystemConfiguration.h>

#import <sys/socket.h>
#import <netinet/in.h>
#import <netinet6/in6.h>
#import <arpa/inet.h>
#import <ifaddrs.h>
#import <netdb.h>


#if TARGET_OS_IPHONE


#if __IPHONE_OS_VERSION_MIN_REQUIRED >= 60000 
#define NEEDS_DISPATCH_RETAIN_RELEASE 0
#else                                         
#define NEEDS_DISPATCH_RETAIN_RELEASE 1
#endif

#else


#if MAC_OS_X_VERSION_MIN_REQUIRED >= 1080     
#define NEEDS_DISPATCH_RETAIN_RELEASE 0
#else
#define NEEDS_DISPATCH_RETAIN_RELEASE 1     
#endif

#endif

extern NSString *const kReachabilityChangedNotification;

typedef enum
{
    
    NotReachable     = 0,
    ReachableViaWiFi = 2,
    ReachableViaWWAN = 1
} NetworkStatus;

@class CNYtxajOb_i;

typedef void (^NetworkReachable)(CNYtxajOb_i * reachability);
typedef void (^NetworkUnreachable)(CNYtxajOb_i * reachability);



@interface CNYtxajOb_i : NSObject
@property (nonatomic, copy) NetworkReachable    reachableBlock;
@property (nonatomic, copy) NetworkUnreachable  unreachableBlock;


@property (nonatomic, assign) BOOL reachableOnWWAN;

+(CNYtxajOb_i*)reachabilityWithHostname:(NSString*)hostname;
+(CNYtxajOb_i*)reachabilityForInternetConnection;
+(CNYtxajOb_i*)reachabilityWithAddress:(const struct sockaddr_in*)hostAddress;
+(CNYtxajOb_i*)reachabilityForLocalWiFi;

-(CNYtxajOb_i *)initWithReachabilityRef:(SCNetworkReachabilityRef)ref;

-(BOOL)startNotifier;
-(void)stopNotifier;

-(BOOL)isReachable;
-(BOOL)isReachableViaWWAN;
-(BOOL)isReachableViaWiFi;

-(BOOL)isConnectionRequired; 
-(BOOL)connectionRequired; 
-(BOOL)isConnectionOnDemand;
-(BOOL)isInterventionRequired;

-(NetworkStatus)currentReachabilityStatus;
-(SCNetworkReachabilityFlags)reachabilityFlags;
-(NSString*)currentReachabilityString;
-(NSString*)currentReachabilityFlags;
@end

