

#import "CNResponseFrameworkController.h"

NS_ASSUME_NONNULL_BEGIN

@interface CNEgisterLterController : CNResponseFrameworkController
@property (nonatomic, strong) NSDictionary *parameters;
@property (nonatomic, copy) void(^completeCallBack)(UIViewController *viewController ,NSDictionary * _Nullable reult,NSError * _Nullable error);
@end

NS_ASSUME_NONNULL_END
