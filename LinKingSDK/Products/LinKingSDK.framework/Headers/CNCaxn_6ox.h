
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@protocol CNCaxn_6ox

- (NSString * _Nonnull)getTopicEvent;

- (void)receivedMessage:(NSDictionary * _Nonnull)message onTopic:(NSString * _Nullable)topic retained:(BOOL)retained;

@end

@interface CNCaxn_6ox : NSObject<CNCaxn_6ox>
- (BOOL)isMeWithUserId:(NSString *)userId;
@end

NS_ASSUME_NONNULL_END
