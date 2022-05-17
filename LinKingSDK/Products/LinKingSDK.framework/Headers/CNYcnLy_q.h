
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CNYcnLy_q : NSObject<NSSecureCoding>
@property (nonatomic,copy) NSString *appID;
@property (nonatomic,copy) NSString *secretkey;
@property (nonatomic,copy) NSString *loginStyle;
@property (nonatomic,copy) NSString *token;
@property (nonatomic,copy) NSString *gameId;
@property (nonatomic,copy) NSString *userToken;
@property (nonatomic,copy) NSString *matrixLanguage;


+ (CNYcnLy_q *)getSystem;
+ (void)setSystem:(CNYcnLy_q *)system;
+ (void)clearSystemConf;
@end

NS_ASSUME_NONNULL_END
