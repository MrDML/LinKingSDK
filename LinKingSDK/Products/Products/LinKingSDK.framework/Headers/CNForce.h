








#import "CNConcrete.h"
NS_ASSUME_NONNULL_BEGIN


@interface CNForce : CNConcrete<CNConcrete>
+ (instancetype)shared;
@property (nonatomic, copy) void(^isRedRodHandler)(BOOL isRedRod);
- (BOOL)getisRedRot;
- (void)setRedRotReadAlready:(BOOL)alreadyRead;
@end

NS_ASSUME_NONNULL_END
