







#import "CNInfoLegacy.h"
NS_ASSUME_NONNULL_BEGIN

@interface CNClientToolbar : CNInfoLegacy<CNInfoLegacy>
- (instancetype)initWithClientId:(NSString *)clientId secretKey:(NSString *)secretKey;





- (instancetype)initWithClientId:(NSString *_Nonnull)clientId withSecretKey:(NSString *_Nonnull)secretKey withSettings:(NSDictionary *)settings;
@end

NS_ASSUME_NONNULL_END
