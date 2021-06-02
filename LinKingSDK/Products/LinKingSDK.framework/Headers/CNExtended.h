







#import <Foundation/Foundation.h>
#import "CNCoreReconnect.h"

typedef NS_ENUM(NSInteger, TopOnAdStyle) {
    TopOnAdStyle_Banner = 0,
    TopOnAdStyle_Interstitial,
    TopOnAdStyle_RewardVideo,
};

NS_ASSUME_NONNULL_BEGIN

@interface CNExtended : NSObject<CNCoreReconnect>
+ (instancetype)shared;
@property (nonatomic,assign) TopOnAdStyle style;
- (void)registerTopOnSDK;
- (void)setLogEnabled:(BOOL)enable;
@end

NS_ASSUME_NONNULL_END
