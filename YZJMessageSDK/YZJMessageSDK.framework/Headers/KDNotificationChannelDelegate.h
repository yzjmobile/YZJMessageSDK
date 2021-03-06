//
//  KDNotificationChannelDelegate.h
//  kdweibo
//
//  Created by Gil on 15/12/3.
//  Copyright © 2015年 www.kingdee.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol KDNotificationChannelDelegate <NSObject>

@optional

/**
 *  账号被踢出
 *
 *  @param object KDPolling or KDMerc
 *  @param error  错误提示
 *  @param data   额外数据
 */
- (void)notificationChannelLogout:(id)object
                            error:(NSString *)error
                             data:(id)data;

/**
 *  新消息
 *
 *  @param object KDPolling or KDMerc
 *  @param flag   是否有新消息
 *  @param lastUpdateTime   最后更新时间
 */
- (void)notificationChannelNewMessage:(id)object
                                 flag:(BOOL)flag;
- (void)notificationChannelNewMessage:(id)object
                       lastUpdateTime:(NSString *)lastUpdateTime;
//消息的已读信息更新
- (void)notificationChannelMessageReadStatus:(id)object
                                        flag:(BOOL)flag;
- (void)notificationChannelMessageReadStatus:(id)object
                              lastUpdateTime:(NSString *)lastUpdateTime;
//退组信息
- (void)notificationChannelExitGroup:(id)object
                                flag:(BOOL)flag;
- (void)notificationChannelExitGroup:(id)object
                      lastUpdateTime:(NSString *)lastUpdateTime;


/**
 *  商务会话新消息
 *
 *  @param object KDPolling or KDMerc
 *  @param flag   是否有新消息
 *  @param lastUpdateTime   最后更新时间
 */
- (void)notificationChannelExternalNewMessage:(id)object
                                         flag:(BOOL)flag;
- (void)notificationChannelExternalNewMessage:(id)object
                               lastUpdateTime:(NSString *)lastUpdateTime;
//商务会话消息的已读信息更新
- (void)notificationChannelExternalMessageReadStatus:(id)object
                                                flag:(BOOL)flag;
- (void)notificationChannelExternalMessageReadStatus:(id)object
                                      lastUpdateTime:(NSString *)lastUpdateTime;
//商务会话退组信息
- (void)notificationChannelExternalExitGroup:(id)object
                                        flag:(BOOL)flag;
- (void)notificationChannelExternalExitGroup:(id)object
                              lastUpdateTime:(NSString *)lastUpdateTime;


/**
 *  人员数据更新
 *
 *  @param object KDPolling or KDMerc
 *  @param lastUpdateTime   最后更新时间
 */
- (void)notificationChannelAddressBookChange:(id)object
                              lastUpdateTime:(NSString *)lastUpdateTime;
//应用数据更新
- (void)notificationChannelApplicationChange:(id)object
                              lastUpdateTime:(NSString *)lastUpdateTime;
//mCloud参数更新
- (void)notificationChannelmCloudParamChange:(id)object
                              lastUpdateTime:(NSString *)lastUpdateTime;

/**
 *  公共号信息变更
 *
 *  @param object         KDPolling or KDMerc
 *  @param lastUpdateTime 最后更新时间
 *  @param pubAcctIds     需更新的公共号ID列表
 */
- (void)notificationChannelPubAcctChange:(id)object
                          lastUpdateTime:(NSString *)lastUpdateTime
                              pubAcctIds:(NSArray *)pubAcctIds;

/**
 *  第三方系统通知
 *
 *  @param object        KDPolling or KDMerc
 *  @param msgFromSystem 来自第三方系统的消息内容
 */
- (void)notificationChannelExtSystemMsg:(id)object
                          msgFromSystem:(NSArray *)msgFromSystem;

/**
 *  是否需要重新注册Push DeviceToken
 *
 *  @param object KDPolling or KDMerc
 *  @param data   YES or NO
 */
- (void)notificationChannelRegisteredPush:(id)object
                                     data:(id)data;

@required
- (NSString * _Nonnull)dataPubAcctUpdateTime;

@end

