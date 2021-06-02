

#import <UIKit/UIKit.h>

@class CNSortView;
NS_ASSUME_NONNULL_BEGIN

@interface CNItemMainView : UIView
@property (weak, nonatomic) IBOutlet UILabel *label_month;
@property (weak, nonatomic) IBOutlet UILabel *label_year;
@property (weak, nonatomic) IBOutlet UIButton *button_close;
@property (weak, nonatomic) IBOutlet CNSortView *tableView;
@property (nonatomic, copy) void (^closeAlterViewCallBack)(UIButton *button);
@property (nonatomic, copy) void (^selectDateCallBack)(UIButton *button);
+ (instancetype)instanceOrderView;

@end

NS_ASSUME_NONNULL_END
