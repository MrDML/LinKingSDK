







#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CNRequest : NSObject
+ (void)save:(NSString *)service data:(id)data;
+ (id)load:(NSString *)service;
+ (void)deleteKeyData:(NSString *)service;
@end

NS_ASSUME_NONNULL_END