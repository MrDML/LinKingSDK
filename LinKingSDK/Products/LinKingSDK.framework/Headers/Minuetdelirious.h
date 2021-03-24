//
//  Minuetdelirious.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/20.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "Veracitysurroundings.h"

NS_ASSUME_NONNULL_BEGIN
@interface Minuetdelirious : Veracitysurroundings
+ (void)Classhearing:(NSString *)phone isNewUserComplete:(void(^_Nullable)(BOOL isNewUser,NSError *error))complete;
+ (void)Hideousobserver:(NSString *)phone complete:(void(^)(NSError *error))complete;
+ (void)Speedingnapkin:(NSString *)iphone checkCode:(NSString *)code password:(NSString *)password complete:(void(^_Nullable)(NSError *error))complete;
+ (void)Honehind:(void(^_Nullable)(NSError *error))complete;
+ (void)Acrimonyvocation:(NSString *)token Complete:(void(^_Nullable)(NSError *error))complete;
+ (void)Inhibitorambush:(NSString *)iphone withPassword:(NSString *)password Complete:(void(^_Nullable)(NSError *error))complete;
+ (void)autoLoginComplete:(void(^_Nullable)(NSError *error))complete;
+ (void)Surrogateveil:(int)second complete:(void(^_Nullable)(NSDictionary *result,NSError *error))complete;
@end

NS_ASSUME_NONNULL_END
