

#import "CNResponseFrameworkController.h"
@class CNSe;
NS_ASSUME_NONNULL_BEGIN

@interface CNPwdController : CNResponseFrameworkController
@property (nonatomic, assign) BOOL agreement;
@property (nonatomic,copy)void(^appleLoginCallBack)(NSError *error);
@property (nonatomic,copy)void(^changeAccountCallBack)(void);
@property(nonatomic, copy)void(^thirdLoginAction)(UIButton *sender);
@property (nonatomic,copy)void(^loginCompleteCallBack)(CNSe *_Nullable user,NSError * _Nullable error);
- (void)setCloseView:(BOOL)isclose;
@end

NS_ASSUME_NONNULL_END
