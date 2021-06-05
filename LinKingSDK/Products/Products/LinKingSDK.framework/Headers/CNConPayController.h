
#import "CNResponseFrameworkController.h"
@class CNSe;
NS_ASSUME_NONNULL_BEGIN

@interface CNConPayController : CNResponseFrameworkController
@property (nonatomic,copy)void(^appleLoginCallBack)(NSError *error);
@property (nonatomic,copy)void(^bindingAccountCompleteCallBack)(CNSe * _Nullable user,NSError * _Nullable error);
@end

NS_ASSUME_NONNULL_END
