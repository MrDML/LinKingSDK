//
//  LKUserEntity.h
//  LinKingSDK
//
//  Created by leon on 2021/5/20.
//

#import <Foundation/Foundation.h>
@class Delugesurgical;
NS_ASSUME_NONNULL_BEGIN

@interface LKUserEntity : NSObject
+ (instancetype)shared;
@property (nonatomic, copy )NSString  * _Nullable token;
@property (nonatomic, strong)Delugesurgical * _Nullable user;
@property (nonatomic, copy )NSString  * _Nullable userId;

@end

NS_ASSUME_NONNULL_END
