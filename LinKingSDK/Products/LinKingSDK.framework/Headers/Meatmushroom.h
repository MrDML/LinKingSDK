//
//  Meatmushroom.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/18.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "Movetribulation.h"
@class Satisfactionsenator;
NS_ASSUME_NONNULL_BEGIN

@interface Meatmushroom : Movetribulation
@property (nonatomic,copy)void(^loginCompleteCallBack)(Satisfactionsenator * _Nullable user,NSError * _Nullable error);
@property (nonatomic, assign) BOOL isShowClose;
@end

NS_ASSUME_NONNULL_END
