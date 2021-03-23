//
//  Immenselyforecast.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/20.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface Immenselyforecast : NSObject
+ (NSString *)baseURL;
+ (NSDictionary *)defaultParames;
+ (NSDictionary *)defaultParamesSimple;
+ (NSError *)Pushylackluster:(NSString *)msg;
+ (NSError *)Pushylackluster:(NSString *)msg code:(int)code;
@end

NS_ASSUME_NONNULL_END
