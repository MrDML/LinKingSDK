//
//  Goodnessrafter.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/20.
//  Copyright © 2020 . All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Goodnessrafter : NSObject
+ (NSString *)randomString;
+ (NSString*)md5Str:(NSString *)str;
+ (NSString *)getSignData:(NSDictionary *)parameters;
+(NSString*)dictionaryToJson:(NSDictionary *)dic;
+ (NSString *)deviceInfo;
@end

NS_ASSUME_NONNULL_END
