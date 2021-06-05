

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CNSe : NSObject<NSSecureCoding>


@property (nonatomic, copy) NSString *userId;

@property (nonatomic, copy) NSString *real_name;

@property (nonatomic, copy) NSString *phone;

@property (nonatomic, copy) NSString *age;

@property (nonatomic, copy) NSString *timestamp;

@property (nonatomic, copy) NSString *verify;

@property (nonatomic, copy) NSString *login_type;

@property (nonatomic, copy) NSString *ppid;

@property (nonatomic, copy) NSString *is_new_user;

@property (nonatomic, copy) NSString *nick_name;

@property (nonatomic, copy) NSString *third_id;

@property (nonatomic, copy) NSString *third_type;

@property (nonatomic, copy) NSString *head_icon;

@property (nonatomic, copy) NSString *token;

@property (nonatomic, copy) NSString *id_card;

@property (nonatomic, copy) NSString *create_time;

@property (nonatomic, copy) NSString *gender;


@property (nonatomic, copy) NSString *real_verify;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
+ (NSString *)getToekn;
+ (CNSe *)getUser;
+ (void)setUser:(CNSe *)user;
+ (void)removeUserInfo;

@end

NS_ASSUME_NONNULL_END
