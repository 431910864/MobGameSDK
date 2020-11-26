//
//  MobGameSDKApi.h
//  BloomGameSDK
//
//  Created by 兵伍 on 2019/10/28.
//  Copyright © 2019 兵伍. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MobGameConfigModel.h"
#import "MobGameSDKCallbackProtocol.h"

@interface MobGameSDKApi : NSObject

/**当前：1.0.3(1)
 * @return SDK 版本
 */
+ (NSString *)sdkVersion;

/**
 * SDK 初始化接口
 * @param config 配置类对象
 * @return 是否初始化成功，1：成功；0：失败；
 */
+ (BOOL)setupWithConfig:(MobGameConfigModel *)config;

/**
 * 获取配置类对象
 * @return 配置类MobADConfigModel实例
 */
+ (MobGameConfigModel *)getConfig;

/**
 * 获取游戏ViewController
 * @return h5游戏ViewController
 */
+ (UIViewController *)h5GameViewController;

/**
 * 获取游戏ViewController
 * @return APP游戏ViewController
 */
+ (UIViewController *)appGameViewController;

/**
 * 登录
 */
+ (void)login:(NSString *)userId;

/**
 * 退出登录
 */
+ (void)logout;

@end


