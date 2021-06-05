

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface CNScroll : NSObject
+ (NSString *)baseURL;
+ (NSString *)baseCheckTokenURL;
+ (NSDictionary *)defaultParames;
+ (NSDictionary *)defaultParamesSimple;
+ (NSError *)responserErrorMsg:(NSString *)msg;
+ (NSError *)responserErrorMsg:(NSString *)msg code:(int)code;
@end

NS_ASSUME_NONNULL_END
