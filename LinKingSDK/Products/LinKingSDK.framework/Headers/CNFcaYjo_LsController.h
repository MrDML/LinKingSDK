

#import "CNYzv_0Controller.h"
@class CNZjGwlv_B;
NS_ASSUME_NONNULL_BEGIN

@interface CNFcaYjo_LsController : CNYzv_0Controller
@property (nonatomic,copy)void(^loginCompleteCallBack)(CNZjGwlv_B * _Nullable user,NSError * _Nullable error);
@property (nonatomic,copy)void(^closePayCallBack)(void);
@property (nonatomic,copy)void(^closeCallBack)(void);
@property (nonatomic,copy)void(^realNameCompeleteCallBack)(BOOL isCancel,NSError * _Nullable error);
@property (nonatomic, assign) BOOL isShowClose;

@property (nonatomic, assign) BOOL isRealNameFail;

@end

NS_ASSUME_NONNULL_END
