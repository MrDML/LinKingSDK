
#import "CNResponseFrameworkController.h"

NS_ASSUME_NONNULL_BEGIN

@interface CNTransportController : CNResponseFrameworkController

@property (nonatomic,copy) NSString *result;

@property (nonatomic,copy) NSString * _Nullable error;

@property (nonatomic,copy) NSString * _Nullable orderNum;

@property (nonatomic,copy) NSString * _Nullable banner;

@end

NS_ASSUME_NONNULL_END
