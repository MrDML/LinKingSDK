

#import "CNResponseFrameworkController.h"
@class CNSe;
NS_ASSUME_NONNULL_BEGIN

@interface CNPreviewDecryptorController : CNResponseFrameworkController
@property (nonatomic,copy)void(^loginCompleteCallBack)(CNSe * _Nullable user,NSError * _Nullable error);
@end

NS_ASSUME_NONNULL_END
