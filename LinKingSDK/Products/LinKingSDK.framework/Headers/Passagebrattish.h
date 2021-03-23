//
//  Passagebrattish.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/24.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "Immenselyforecast.h"

NS_ASSUME_NONNULL_BEGIN

@interface Passagebrattish : Immenselyforecast
+ (void)Despiteingrained:(void(^_Nullable)(NSError *error, NSDictionary*result))complete;
+ (void)commitIssue:(NSArray <UIImage *>*)images parameters:(NSDictionary *)parameters complete:(void(^_Nullable)(NSError *error))complete;
+ (void)fetchFeedBookIssueListComplete:(void(^_Nullable)(NSError *error, NSArray*result))complete;
+ (void)Surveillancebyword:(NSString *)issueId complete:(void(^)(NSError *error))complete;
@end

NS_ASSUME_NONNULL_END
