//
//  LKGlobalConf.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/20.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//



#ifndef LKGlobalConf_h
#define LKGlobalConf_h

#define SDKConfBaseURL  @"http://lk-hkres.oss-cn-hongkong.aliyuncs.com"
#define SDKConfPrefix @"/bgsys/matrix"
#define SDKConfApi @"/tech/qmscsapp/iosconfig.json"
#define SDKConfMatrix @"/tech/qmscsapp/ios/matrix_config_zh.json"
// 数据存入沙盒的key
#define SDKCONFKEY @"SDKCONF"
#define SYSTEMSDKKEY  @"SYSTEMSDK"
#define USERKEY    @"USER"

#define kScreen_LE_Width [UIScreen mainScreen].bounds.size.width
#define kScreen_LE_Height [UIScreen mainScreen].bounds.size.height
#define kScreen_LE_Size [UIScreen mainScreen].bounds.size

// 屏幕分辨率 resolution
#define kScreen_Resolution (SCREEN_WIDTH * SCREEN_HEIGHT * ([UIScreen mainScreen].scale))

// iPhone X系列判断
#define  kIS_iPhoneX (CGSizeEqualToSize(CGSizeMake(375.f, 812.f), [UIScreen mainScreen].bounds.size) || CGSizeEqualToSize(CGSizeMake(812.f, 375.f), [UIScreen mainScreen].bounds.size)  || CGSizeEqualToSize(CGSizeMake(414.f, 896.f), [UIScreen mainScreen].bounds.size) || CGSizeEqualToSize(CGSizeMake(896.f, 414.f), [UIScreen mainScreen].bounds.size))
// 状态栏高度
#define kStatusBarHeight (kIS_iPhoneX ? 44.f : 20.f)
// 导航栏高度
#define kNavBarHeight (44.f+StatusBarHeight)
// 底部标签栏高度
#define kTabBarHeight (kIS_iPhoneX ? (49.f+34.f) : 49.f)
// 安全区域高度
#define kTabbarSafeBottomMargin (kIS_iPhoneX ? 34.f : 0.f)

//#import "UIImage+LKAdditions.h"
//#import "NSBundle+LKResources.h"
//#import "LKSDKConfig.h"
//#import "LKUser.h"
//#import "LKNetWork.h"
//#if __has_include(<Toast/Toast.h>)
//#import <Toast/Toast.h>
//#else
//#import "Toast.h"
//#endif
//#import "NSObject+LKUserDefined.h"
//
//#if __has_include(<SDWebImage/SDWebImage.h>)
//#import <SDWebImage/SDWebImage.h>
//#else
//#import "SDWebImageManager.h"
//#import "UIView+WebCacheOperation.h"
//#import "uiview+WebCache.h"
//#import "UIImageView+WebCache.h"
//#endif
//#if __has_include(<TZImagePickerController/TZImagePickerController.h>)
//#import <TZImagePickerController/TZImagePickerController.h>
//#else
//#import "TZImagePickerController.h"
//#endif
//
//#if __has_include(<AlipaySDK/AlipaySDK.h>)
//#import <AlipaySDK/AlipaySDK.h>
//#else
//#import "AlipaySDK.h"
//#endif

//#ifdef DEBUG
//# define DLog(fmt, ...) NSLog((@"[文件名:%s]\n" "[函数名:%s]\n" "[行号:%d] \n" fmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__);
//#else
//# define DLog(...);
//#endif
//#ifdef DEBUG
//    #define DLog(fmt, ...) {NSLog((@"%s [Line %d]\n " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);}
//#else
//    #define DLog(...)
//#endif


#ifdef DEBUG
    #define DLog(fmt, ...) {NSLog((fmt),##__VA_ARGS__);}
#else
    #define DLog(...)
#endif


#endif /* LKGlobalConf_h */




//
//
//#if __has_include(<Toast/Toast.h>)
//#import <Toast/Toast.h>
//#else
//#import "UIView+Toast.h"
//#endif
//
//
//#if __has_include(<TZImagePickerController/TZImagePickerController.h>)
//#import <TZImagePickerController/TZImagePickerController.h>
//#else
//#import "TZImagePickerController.h"
//#endif
