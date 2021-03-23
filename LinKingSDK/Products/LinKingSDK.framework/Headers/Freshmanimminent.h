//
//  Freshmanimminent.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/20.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Unfailingrecommendation;
NS_ASSUME_NONNULL_BEGIN

@interface Freshmanimminent : UIView
@property (weak, nonatomic) IBOutlet Unfailingrecommendation *tableview;
+ (instancetype)instanceIssueServiceView;
@property(nonatomic, copy)void(^closeAlterViewCallBack)(void);

@end

NS_ASSUME_NONNULL_END
