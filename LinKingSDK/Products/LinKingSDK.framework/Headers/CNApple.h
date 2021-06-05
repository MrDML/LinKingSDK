







#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CNApple : NSObject

@property (copy, nonatomic) void (^goUpdateCallback)(void);


@property (nonatomic, assign) BOOL openAPPStoreInsideAPP;



@property (nonatomic, copy) NSString *countryAbbreviation;


+ (instancetype)shared;


- (void)checkVersion;


- (void)checkVersionWithAlertTitle:(NSString *)alertTitle nextTimeTitle:(NSString *)nextTimeTitle confimTitle:(NSString * )confimTitle;


- (void)checkVersionWithAlertTitle:(NSString *)alertTitle nextTimeTitle:(NSString *)nextTimeTitle confimTitle:(NSString *)confimTitle skipVersionTitle:(NSString *_Nullable)skipVersionTitle;
@end

NS_ASSUME_NONNULL_END
