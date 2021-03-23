//
//  Repetitivematch.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/16.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "Movetribulation.h"
@class Satisfactionsenator;
NS_ASSUME_NONNULL_BEGIN

@interface Repetitivematch : Movetribulation
@property (nonatomic,copy)void(^loginCompleteCallBack)(Satisfactionsenator * _Nullable user,NSError * _Nullable error);
@end

NS_ASSUME_NONNULL_END
