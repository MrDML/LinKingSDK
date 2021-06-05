







#import <Foundation/Foundation.h>
@class CNInfoLegacy;
NS_ASSUME_NONNULL_BEGIN

@interface CNError : NSObject
@property (nonatomic,strong) CNInfoLegacy *_Nullable client;
+ (instancetype)shared;

- (void)connectMQTT;


- (void)disconnectMQTT;
@end

NS_ASSUME_NONNULL_END
