







#import <Foundation/Foundation.h>

@class CNSe;
NS_ASSUME_NONNULL_BEGIN

@interface CNTableBase : NSObject
+ (instancetype)shared;
@property (nonatomic, copy )NSString  * _Nullable token;
@property (nonatomic, strong)CNSe * _Nullable user;
@property (nonatomic, copy )NSString  * _Nullable userId;
@end

NS_ASSUME_NONNULL_END
