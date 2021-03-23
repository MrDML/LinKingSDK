//
//  Inquisitiverid.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/22.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "Immenselyforecast.h"

NS_ASSUME_NONNULL_BEGIN

@interface Inquisitiverid : Immenselyforecast
+ (void)authWithName:(NSString *)name IdNumber:(NSString *)number complete:(void(^_Nullable)(NSError *error))complete;
@end

NS_ASSUME_NONNULL_END
