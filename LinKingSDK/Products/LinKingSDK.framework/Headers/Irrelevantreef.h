//
//  Irrelevantreef.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/20.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Ownervitality;
NS_ASSUME_NONNULL_BEGIN

@interface Irrelevantreef : UIView

@property(nonatomic, copy)void(^closeAlterViewCallBack)(void);
@property (weak, nonatomic) IBOutlet Ownervitality *tableView;
+ (instancetype)instanceIssueStyleView;
@end

NS_ASSUME_NONNULL_END
