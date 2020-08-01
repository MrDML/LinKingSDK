//
//  LKPayTypeController.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/18.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "LKBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface LKPayTypeController : LKBaseViewController
@property (nonatomic, strong) NSDictionary *parameters;
@property (nonatomic, copy) void(^completeCallBack)(UIViewController *viewController ,NSError * _Nullable error,BOOL  success);
@end

NS_ASSUME_NONNULL_END
