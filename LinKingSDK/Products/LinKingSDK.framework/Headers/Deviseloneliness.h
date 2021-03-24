//
//  Deviseloneliness.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/20.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Instinctivepaddle;
NS_ASSUME_NONNULL_BEGIN

@interface Deviseloneliness : UIView

@property(nonatomic, copy)void(^closeAlterViewCallBack)(void);
@property (weak, nonatomic) IBOutlet Instinctivepaddle *tableView;
+ (instancetype)instanceIssueStyleView;
@end

NS_ASSUME_NONNULL_END
