

#import <UIKit/UIKit.h>
@class CNDependencyView;
NS_ASSUME_NONNULL_BEGIN

@interface CNDependencyHexView : UIView
@property (weak, nonatomic) IBOutlet CNDependencyView *tableview;
+ (instancetype)instanceIssueServiceView;
@property(nonatomic, copy)void(^closeAlterViewCallBack)(void);

@end

NS_ASSUME_NONNULL_END
