







#import <UIKit/UIKit.h>

@class CNConcreteView;
@class CNExtSpinnerController;

@protocol ITDatePickerControllerDelegate <NSObject>



- (void)datePickerController:(nonnull CNExtSpinnerController *)datePickerController
             didSelectedDate:(nonnull NSDate *)date
                  dateString:(nonnull NSString *)dateString;

@end




@interface CNExtSpinnerController : UIViewController

@property (nonatomic) NSInteger tag;



@property (nullable ,copy, nonatomic) NSArray *leftItems;



@property (nullable, copy, nonatomic) NSArray *rightItems;





@property (nonnull, strong, nonatomic, readonly) CNConcreteView *datePickerView;



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





@interface CNConcreteView : UIView



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




@interface CNWork : NSObject
<UIViewControllerAnimatedTransitioning>



@property (nonatomic, getter=isPresenting) BOOL presenting;



+ (nonnull instancetype)animationWithPresenting:(BOOL)isPresenting;

@end
