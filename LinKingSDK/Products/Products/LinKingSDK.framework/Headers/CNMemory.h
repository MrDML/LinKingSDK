

#import "CNScroll.h"

NS_ASSUME_NONNULL_BEGIN

@interface CNMemory : CNScroll
+ (void)fetchIssueListComplete:(void(^_Nullable)(NSError *error, NSDictionary*result))complete;
+ (void)commitIssue:(NSArray <UIImage *>*)images parameters:(NSDictionary *)parameters complete:(void(^_Nullable)(NSError *error))complete;
+ (void)fetchFeedBookIssueListComplete:(void(^_Nullable)(NSError *error, NSArray*result))complete;
+ (void)readIssueWithId:(NSString *)issueId complete:(void(^)(NSError *error))complete;
@end

NS_ASSUME_NONNULL_END
