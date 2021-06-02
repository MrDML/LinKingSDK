







#import <Foundation/Foundation.h>
#import "CNConcrete.h"
NS_ASSUME_NONNULL_BEGIN


@interface CNLaunch : CNConcrete<CNConcrete>

+ (instancetype)shared;
@property (nonatomic, copy) void(^realVerifyEventHandler)(NSString * _Nullable realVerify);

@end

NS_ASSUME_NONNULL_END
