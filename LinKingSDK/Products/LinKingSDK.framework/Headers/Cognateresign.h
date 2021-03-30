//
//  Cognateresign.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/20.
//  Copyright © 2020 . All rights reserved.
//

#import <UIKit/UIKit.h>
@class Dubelation;
NS_ASSUME_NONNULL_BEGIN

@interface Cognateresign : UIView
@property (weak, nonatomic) IBOutlet Dubelation *tableview;
+ (instancetype)instanceIssueServiceView;
@property(nonatomic, copy)void(^closeAlterViewCallBack)(void);

@end

NS_ASSUME_NONNULL_END
