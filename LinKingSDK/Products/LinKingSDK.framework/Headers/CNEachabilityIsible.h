

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, PAYTYPE) {
    PAYTYPE_IOS,
};
typedef enum {
    INAPPPurchSuccess = 0,       
    INAPPPurchFailed = 1,        
    INAPPPurchCancle = 2,        
    INAPPPurchVerFailed = 3,     
    INAPPPurchVerSuccess = 4,    
    INAPPPurchNotArrow = 5,      
    INAPPPurchNoGoods = 6,       
    INAPPRestoredGoods = 7, 
    INAPPServiceFail = 8, 
    INAPPReceiptInvalid = 9, 
    INAPPOrderNotExist = 10, 
    INAPPOrderClosed = 11, 
    INAPPOrderNoComplete = 12,
    INAPPOrderFail = 13,
}INAPPPurchType;
NS_ASSUME_NONNULL_BEGIN
typedef void (^_Nonnull INAPPPurchCompletionHandle)(INAPPPurchType type,NSError * _Nullable  error);
@interface CNEachabilityIsible : NSObject
@property (nonatomic, assign)PAYTYPE payType;



+ (instancetype)instance;






- (void)showPayTypeAlterViewRootViewController:(UIViewController *)viewController parameters:(NSDictionary *)parames complete:(void(^)(NSDictionary * _Nullable result,NSError * _Nullable error ))complete;






- (void)showPayViewRootViewController:(UIViewController *)viewController productId:(NSString *)productId parameters:(NSDictionary *)parames complete:(INAPPPurchCompletionHandle)complete;



- (void)requestProductDatasComplete:(void(^_Nullable)(NSError * _Nullable error, NSArray*_Nullable products))complete;





- (void)startPurchWithID:(NSString *)purchID parames:(NSDictionary *)parames completeHandle:(INAPPPurchCompletionHandle)handle;

- (void)querysubscribeProduct:(NSString *)productId complete:(void(^)(NSError *error, NSDictionary*results))complete;


@end

NS_ASSUME_NONNULL_END
