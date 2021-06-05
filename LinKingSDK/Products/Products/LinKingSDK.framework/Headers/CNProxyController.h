

#import "CNResponseFrameworkController.h"
@class CNSe;
NS_ASSUME_NONNULL_BEGIN

@interface CNProxyController : CNResponseFrameworkController
@property (nonatomic,copy)void(^loginCompleteCallBack)(CNSe * _Nullable user,NSError * _Nullable error);
@property (nonatomic,copy)void(^closePayCallBack)(void);
@property (nonatomic,copy)void(^closeCallBack)(void);

@property (nonatomic,copy)void(^realNameCompeleteCallBack)(BOOL isCancel,NSError * _Nullable error);
@property (nonatomic, assign) BOOL isShowClose;


@property (nonatomic, assign) BOOL isRealNameFail;

@end

NS_ASSUME_NONNULL_END
