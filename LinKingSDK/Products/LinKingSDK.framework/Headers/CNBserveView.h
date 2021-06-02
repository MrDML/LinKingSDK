
#import <UIKit/UIKit.h>

@class CNHotoToolbarView;
NS_ASSUME_NONNULL_BEGIN

@interface CNBserveView : UIView

@property(nonatomic, copy)void(^closeAlterViewCallBack)(void);
@property (weak, nonatomic) IBOutlet CNHotoToolbarView *tableView;
+ (instancetype)instanceIssueStyleView;
@end

NS_ASSUME_NONNULL_END
