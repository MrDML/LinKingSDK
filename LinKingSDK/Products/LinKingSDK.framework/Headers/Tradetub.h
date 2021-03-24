//
//  Tradetub.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/17.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "Desirousmeter.h"

NS_ASSUME_NONNULL_BEGIN

@interface Tradetub : Desirousmeter

@property (nonatomic,copy) NSString *result;

@property (nonatomic,copy) NSString * _Nullable error;

@property (nonatomic,copy) NSString * _Nullable orderNum;

@property (nonatomic,copy) NSString * _Nullable banner;

@end

NS_ASSUME_NONNULL_END
