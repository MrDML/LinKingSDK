

#import "CNYzv_0Controller.h"
@class CNZjGwlv_B;
NS_ASSUME_NONNULL_BEGIN

@interface CNShbgOhz_7dController : CNYzv_0Controller
@property (nonatomic, assign) BOOL agreement;
@property (nonatomic,copy)void(^appleLoginCallBack)(NSError *error);
@property (nonatomic,copy)void(^changeAccountCallBack)(void);
@property(nonatomic, copy)void(^thirdLoginAction)(UIButton *sender);
@property (nonatomic,copy)void(^loginCompleteCallBack)(CNZjGwlv_B *_Nullable user,NSError * _Nullable error);
- (void)setCloseView:(BOOL)isclose;
@end

NS_ASSUME_NONNULL_END
