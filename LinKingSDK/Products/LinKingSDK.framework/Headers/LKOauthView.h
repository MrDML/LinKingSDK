//
//  LKOauthView.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/16.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger,SignInStyle) {
    SignInStyle_PWD = 10,
    SignInStyle_Code = 20,
    SignInStyle_Quick = 30,
    SignInStyle_Apple = 40,
    SignInStyle_WeiXin = 50,
};

NS_ASSUME_NONNULL_BEGIN

@interface LKOauthView : UIView

@property(nonatomic, copy)void(^getCheckCodeAction)(UIButton *sender);
@property(nonatomic, copy)void(^iphoneLoginAction)(UIButton *sender,SignInStyle signInStyle);
@property(nonatomic, copy)void(^forgetPwdAction)(UIButton *sender);
@property(nonatomic, copy)void(^readProtocolAction)(UIButton *sender);
@property(nonatomic, copy)void(^thirdLoginAction)(UIButton *sender);
@property(nonatomic, copy)void(^closeAlterViewCallBack)(void);
@property(nonatomic, copy)void(^useAgreementCallBack)(BOOL isAgreement,UIButton *sender);

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *layoutHeight;
@property (weak, nonatomic) IBOutlet UIImageView *imageViewHeader;
@property (weak, nonatomic) IBOutlet UITextField *textfield_iphone;
@property (weak, nonatomic) IBOutlet UIButton *button_pwd;
@property (weak, nonatomic) IBOutlet UIButton *button_code;
@property (weak, nonatomic) IBOutlet UITextField *textfield_code;
@property (weak, nonatomic) IBOutlet UIButton *button_get_code;
@property (weak, nonatomic) IBOutlet UITextField *textfield_pwd;
@property (weak, nonatomic) IBOutlet UIView *view_pwd;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *layout_pwd_height;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *layout_insert_top;
@property (weak, nonatomic) IBOutlet UILabel *label_pwd;
@property (weak, nonatomic) IBOutlet UIView *view_line;
@property (weak, nonatomic) IBOutlet UIView *view_line_two;

@property (weak, nonatomic) IBOutlet UIButton *button_close;
@property (weak, nonatomic) IBOutlet UIImageView *imageView_close;
@property (weak, nonatomic) IBOutlet UIButton *button_close_two;
@property (weak, nonatomic) IBOutlet UIImageView *imageView_close_two;

@property (weak, nonatomic) IBOutlet UIButton *button_protocol;
@property (weak, nonatomic) IBOutlet UIButton *button_check;
@property (weak, nonatomic) IBOutlet UIButton *button_login;
@property (weak, nonatomic) IBOutlet UIButton *button_quick;
@property (weak, nonatomic) IBOutlet UIButton *button_ios;
@property (weak, nonatomic) IBOutlet UIButton *button_weixin;
@property (nonatomic, assign) NSInteger switchIndex;
@property (assign, nonatomic) BOOL isNewUser;
@property (assign, nonatomic) SignInStyle signInStyle;
+ (instancetype)instanceOauthView;
- (void)showViewPassword;
- (void)hiddenViewPassword;
- (void)setLKSuperView:(UIView *)superView;
- (void)updatePasswordView;
- (void)updateCodeView;
@end

NS_ASSUME_NONNULL_END
