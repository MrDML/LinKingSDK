//
//  Millimetreslant.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/16.
//  Copyright © 2020 . All rights reserved.
//

#import "Desirousmeter.h"
@class Delugesurgical;
NS_ASSUME_NONNULL_BEGIN

@interface Millimetreslant : Desirousmeter
@property (nonatomic, assign) BOOL isHiddenCloseView;
@property (nonatomic, assign) BOOL agreement;
@property (nonatomic,copy)void(^ConfidentapexCallBack)(NSError *error);
@property (nonatomic,copy)void(^BlockadebehindCallBack)(void);
@property(nonatomic, copy)void(^thirdLoginAction)(UIButton *sender);
@property (nonatomic,copy)void(^loginCompleteCallBack)(Delugesurgical *_Nullable user,NSError * _Nullable error);
- (void)setCloseView:(BOOL)isclose;
@end

NS_ASSUME_NONNULL_END
