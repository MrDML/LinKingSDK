

#import <UIKit/UIKit.h>
@class CNAy;
typedef enum {
   PurchSuccess = 0,       
   PurchFailed = 1,        
   PurchCancle = 2,        
   PurchVerFailed = 3,     
   PurchVerSuccess = 4,    
   PurchNotArrow = 5,      
   PurchNoGoods = 6,       
   PurchRestoredGoods = 7, 
   PurchServiceFail = 8,
   PurchReceiptInvalid = 9, 
   PurchOrderNotExist = 10, 
   PurchOrderClosed = 11, 
   PurchOrderNoComplete = 12,
   PurchOrderFail = 13,
    
}PurchType;
NS_ASSUME_NONNULL_BEGIN
typedef void (^CompletionHandle)(PurchType type,NSError * _Nullable error);

@protocol LKApplePayManagerDelegate <NSObject>

@optional

- (void)storePayCreateOrderId:(NSString * _Nullable)orderId withError:(NSError *_Nullable)error;

@end

@interface CNOn : NSObject

@property (nonatomic, weak) id<LKApplePayManagerDelegate>delegate;

+ (instancetype)shared;


- (void)startManager;


- (void)stopManager;


- (void)requestProductDatasComplete:(void(^_Nullable)(NSError * _Nullable error, NSArray*_Nullable products))complete;


- (void)statrtProductWithId:(NSString *)productId parames:(NSDictionary *)parames completeHandle:(CompletionHandle)handle;


- (void)setContentView:(UIView *)view;

@end

NS_ASSUME_NONNULL_END
