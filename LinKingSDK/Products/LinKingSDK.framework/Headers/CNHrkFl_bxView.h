

#import <UIKit/UIKit.h>

@class CNUwwg_DView;
NS_ASSUME_NONNULL_BEGIN

@interface CNHrkFl_bxView : UIView
@property (weak, nonatomic) IBOutlet UILabel *label_month;
@property (weak, nonatomic) IBOutlet UILabel *label_year;
@property (weak, nonatomic) IBOutlet UIButton *button_close;
@property (weak, nonatomic) IBOutlet CNUwwg_DView *tableView;
@property (nonatomic, copy) void (^closeAlterViewCallBack)(UIButton *button);
@property (nonatomic, copy) void (^selectDateCallBack)(UIButton *button);
+ (instancetype)instanceOrderView;

@end

NS_ASSUME_NONNULL_END
