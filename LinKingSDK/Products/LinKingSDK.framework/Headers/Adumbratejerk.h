//
//  Adumbratejerk.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/18.
//  Copyright © 2020 . All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Adumbratejerk : UIView
@property (nonatomic,copy) void(^commitIssueCallBack)(void);
@property (nonatomic,copy) void(^readIssueCallBack)(void);
@property (nonatomic,copy) void(^copyCustomerIdCallBack)(void);
@property (nonatomic,copy) void(^closeAlterViewCallBack)(void);
+ (instancetype)instanceCustomerView;
@end

NS_ASSUME_NONNULL_END
