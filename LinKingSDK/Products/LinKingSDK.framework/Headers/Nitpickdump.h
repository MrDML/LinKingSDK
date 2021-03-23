//
//  Nitpickdump.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/16.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "Movetribulation.h"
@class Satisfactionsenator;
NS_ASSUME_NONNULL_BEGIN

@interface Nitpickdump : Movetribulation
@property (nonatomic, assign) BOOL isHiddenCloseView;
@property (nonatomic, assign) BOOL agreement;
@property (nonatomic,copy)void(^BrattishyesCallBack)(NSError *error);
@property (nonatomic,copy)void(^MonumentalengrossmentCallBack)(void);
@property(nonatomic, copy)void(^thirdLoginAction)(UIButton *sender);
@property (nonatomic,copy)void(^loginCompleteCallBack)(Satisfactionsenator *_Nullable user,NSError * _Nullable error);
- (void)setCloseView:(BOOL)isclose;
@end

NS_ASSUME_NONNULL_END
