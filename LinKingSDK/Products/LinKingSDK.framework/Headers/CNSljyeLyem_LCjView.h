

#import <UIKit/UIKit.h>

@class CNVe_hView;
NS_ASSUME_NONNULL_BEGIN

@interface CNSljyeLyem_LCjView : UIView
@property (weak, nonatomic) IBOutlet CNVe_hView *textView;
@property (weak, nonatomic) IBOutlet UILabel *label_count;
@property (weak, nonatomic) IBOutlet UIView *view_picture;
@property (weak, nonatomic) IBOutlet UITextField *textfield_iphone;
@property (weak, nonatomic) IBOutlet UIButton *button_checkbox;
@property (weak, nonatomic) IBOutlet UIButton *button_commit;
@property (weak, nonatomic) IBOutlet UILabel *label_imageCount;
@property (nonatomic, copy) void(^closeAlterViewCallBack)(void);
@property (nonatomic, copy) void(^checkBoxCallBack)(UIButton *sender);
@property (nonatomic, copy) void(^commitCallBack)(void);
+ (instancetype)instanceSubmitIssueView;
- (void)setLKSuperView:(UIView *)superView;

@end

NS_ASSUME_NONNULL_END
