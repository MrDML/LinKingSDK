//
//  Occupantexpensive.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/22.
//  Copyright © 2020 . All rights reserved.
//

#import "Veracitysurroundings.h"

NS_ASSUME_NONNULL_BEGIN

@interface Occupantexpensive : Veracitysurroundings
+ (void)Mendalphabetic:(NSString *)fullDate month:(NSString *)month complete:(void(^_Nullable)(NSError *error,NSArray *records))complete;
+ (void)Synopticprofoundly:(NSString *)type withParameters:(NSDictionary *)parames complete:(void(^_Nullable)(NSError *error, NSDictionary*result))complete;
+ (void)Exclusivepreen:(NSString *)orderNum receipt:(NSString *)receipt subscribe:(BOOL)subscribe complete:(void(^_Nullable)(NSError *error, NSDictionary*result))complete;
+ (void)fetchtAppleProductDatasComplete:(void(^_Nullable)(NSError *error, NSArray*results))complete;
+ (void)querySubscribeProduct:(NSString *)productId Complete:(void(^_Nullable)(NSError *_Nullable error, NSDictionary*results))complete;
@end

NS_ASSUME_NONNULL_END
