//
//  Veracitysurroundings.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/20.
//  Copyright © 2020 . All rights reserved.
//

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface Veracitysurroundings : NSObject
+ (NSString *)baseURL;
+ (NSString *)baseCheckTokenURL;
+ (NSDictionary *)defaultParames;
+ (NSDictionary *)defaultParamesSimple;
+ (NSError *)Carvingwince:(NSString *)msg;
+ (NSError *)Carvingwince:(NSString *)msg code:(int)code;
@end

NS_ASSUME_NONNULL_END
