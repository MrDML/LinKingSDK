
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CNNc_DA9Controller : UIViewController
@property (nonatomic, copy) NSString * webURL;
@property (nonatomic, copy) NSString * productId;
@property (nonatomic, strong) NSDictionary *parames;
@property (nonatomic, copy) void(^payHandler)(NSInteger type);
@end

NS_ASSUME_NONNULL_END
