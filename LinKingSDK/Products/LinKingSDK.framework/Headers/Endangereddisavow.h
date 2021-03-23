//
//  Endangereddisavow.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/22.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "Immenselyforecast.h"

NS_ASSUME_NONNULL_BEGIN

@interface Endangereddisavow : Immenselyforecast
+ (void)Squalidsister:(NSString *)fullDate month:(NSString *)month complete:(void(^_Nullable)(NSError *error,NSArray *records))complete;
+ (void)Buttressreticulation:(NSString *)type withParameters:(NSDictionary *)parames complete:(void(^_Nullable)(NSError *error, NSDictionary*result))complete;
+ (void)Procurementcognomen:(NSString *)orderNum receipt:(NSString *)receipt subscribe:(BOOL)subscribe complete:(void(^_Nullable)(NSError *error, NSDictionary*result))complete;
+ (void)fetchtAppleProductDatasComplete:(void(^_Nullable)(NSError *error, NSArray*results))complete;
+ (void)querySubscribeProduct:(NSString *)productId Complete:(void(^_Nullable)(NSError *_Nullable error, NSDictionary*results))complete;
@end

NS_ASSUME_NONNULL_END
