

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CNFul_q : NSObject
- (instancetype)initWithDictionary:(NSDictionary *)product;
@property (nonatomic,copy) NSString *productId;
@property (nonatomic,copy) NSString *name;
@property (nonatomic,strong) NSNumber *num;
@property (nonatomic,strong) NSNumber *amount;


@end

NS_ASSUME_NONNULL_END
