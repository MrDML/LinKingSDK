//
//  Repulsionaged.h
//  LinKingSDK
//
//  Created by leon on 2020/10/29.
//  Copyright © 2020 . All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Repulsionaged : UIView
+ (instancetype)instancessueSectionHeaderView;
@property (weak, nonatomic) IBOutlet UILabel *label_issue;
@property (weak, nonatomic) IBOutlet UILabel *label_time;
@property (weak, nonatomic) IBOutlet UILabel *label_state;
@property (weak, nonatomic) IBOutlet UIButton *button_action;


@end

NS_ASSUME_NONNULL_END
