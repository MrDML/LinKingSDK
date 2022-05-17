
#import <UIKit/UIKit.h>

@class CNSwgEvx_WView;
@class CNCxqdMbjn_gController;

@protocol ITDatePickerControllerDelegate <NSObject>


- (void)datePickerController:(nonnull CNCxqdMbjn_gController *)datePickerController
             didSelectedDate:(nonnull NSDate *)date
                  dateString:(nonnull NSString *)dateString;

@end



@interface CNCxqdMbjn_gController : UIViewController

@property (nonatomic) NSInteger tag;


@property (nullable ,copy, nonatomic) NSArray *leftItems;


@property (nullable, copy, nonatomic) NSArray *rightItems;



@property (nonnull, strong, nonatomic, readonly) CNSwgEvx_WView *datePickerView;


@property (nonnull, strong, nonatomic, readonly) UIView *backgroundView;


@property (nullable, weak, nonatomic) id<ITDatePickerControllerDelegate> delegate;


@property (nullable, weak, nonatomic) NSDate *maximumDate;


@property (nullable, weak, nonatomic) NSDate *defaultDate;


@property (nullable, weak, nonatomic) NSDate *minimumDate;


@property (nonatomic, getter = isShowToday) BOOL showToday;


@property (nonatomic) NSInteger defaultYear;


@property (nonatomic) NSInteger defaultMonth;


- (void)refreshData;

@end




@interface CNSwgEvx_WView : UIView


@property (nullable, weak, nonatomic) id<ITDatePickerControllerDelegate> delegate;


@property (nullable, copy, nonatomic) NSArray *leftItems;


@property (nullable, copy, nonatomic) NSArray *rightItems;


@property (nullable, copy, nonatomic) NSDate *maximumDate;


@property (nullable, copy, nonatomic) NSDate *defaultDate;


@property (nullable, copy, nonatomic) NSDate *minimumDate;


@property (nonatomic, getter = isShowToday) BOOL showToday;


@property (nonatomic) NSInteger defaultYear;


@property (nonatomic) NSInteger defaultMonth;


- (void)refreshData;

@end



@interface CNPciedSign_5 : NSObject
<UIViewControllerAnimatedTransitioning>


@property (nonatomic, getter=isPresenting) BOOL presenting;


+ (nonnull instancetype)animationWithPresenting:(BOOL)isPresenting;

@end
