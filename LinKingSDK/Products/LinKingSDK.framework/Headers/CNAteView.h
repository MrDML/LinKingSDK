

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CNAteView : UIView
+ (instancetype)instanceRegisterView;
@property (nonatomic, copy)void(^closeAlterViewCallBack)(void);
@property (nonatomic, copy)void(^skipCallBack)(void);
@property (nonatomic, copy)void(^registerCallBack)(void);

@end

NS_ASSUME_NONNULL_END
