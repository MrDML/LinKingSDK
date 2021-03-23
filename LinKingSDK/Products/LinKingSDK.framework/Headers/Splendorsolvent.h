//
//  Splendorsolvent.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/18.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "Movetribulation.h"

NS_ASSUME_NONNULL_BEGIN

@interface Splendorsolvent : Movetribulation
@property (nonatomic, strong) NSDictionary *parameters;
@property (nonatomic, copy) void(^completeCallBack)(UIViewController *viewController ,NSDictionary * _Nullable reult,NSError * _Nullable error);
@end

NS_ASSUME_NONNULL_END
