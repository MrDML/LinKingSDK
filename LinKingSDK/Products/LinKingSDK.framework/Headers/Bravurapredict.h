//
//  Bravurapredict.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/22.
//  Copyright © 2020 . All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Bravurapredict : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *label_time;
@property (weak, nonatomic) IBOutlet UILabel *label_orderNumber;
@property (weak, nonatomic) IBOutlet UILabel *label_price;
@property (weak, nonatomic) IBOutlet UILabel *label_state;

@end

NS_ASSUME_NONNULL_END
