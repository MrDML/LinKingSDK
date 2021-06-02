







#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@protocol CNConcrete


- (NSString * _Nonnull)getTopicEvent;





- (void)receivedMessage:(NSDictionary * _Nonnull)message onTopic:(NSString * _Nullable)topic retained:(BOOL)retained;

@end

@interface CNConcrete : NSObject<CNConcrete>
- (BOOL)isMeWithUserId:(NSString *)userId;
@end

NS_ASSUME_NONNULL_END
