//
//  Monarchyineptitude.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/20.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Monarchyineptitude : NSOperation
@property (copy, nonatomic) void (^countingDownBlcok)(NSTimeInterval timeInterval);
@property (copy, nonatomic) void (^finishedBlcok)(NSTimeInterval timeInterval);
@property (assign, nonatomic) NSTimeInterval leftTimeInterval;
@property (assign, nonatomic) UIBackgroundTaskIdentifier taskIdentifier;
@end

NS_ASSUME_NONNULL_END