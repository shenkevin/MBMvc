/*
 * (C) 2007-2013 Alibaba Group Holding Limited
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 *
 */
//
// Created by <a href="mailto:wentong@taobao.com">文通</a> on 12-11-14 上午10:17.
//

#import <objc/runtime.h>
#import "TBMBNotification.h"


#ifdef TBMB_DEBUG
#define TBMB_LOG(msg, args...) NSLog(@"TBMB " msg, ##args)
#else
#define TBMB_LOG(msg, args...)
#endif

#define TBMB_PROXY_PREFIX @"__##__ProxyHandler"

#define TBMB_KEY_PATH_CHANGE_PREFIX @"__$$keyPathChange_"

@class TBMBDefaultMessageReceiver;
@protocol TBMBMessageReceiver;

extern inline BOOL TBMBClassHasProtocol(Class clazz, Protocol *protocol);

extern inline NSString *TBMBProxyHandlerName(NSUInteger key, Class clazz);

extern inline NSMutableSet *TBMBGetAllReceiverHandlerName(Class currentClass, Class rootClass, NSString *prefix);

extern inline NSSet *TBMBListAllReceiverHandlerName(id <TBMBMessageReceiver> handler, Class rootClass);

extern inline NSMutableSet *TBMBGetAllCommandHandlerName(Class commandClass, NSString *prefix);

extern inline id TBMBAutoHandlerNotification(id handler, id <TBMBNotification> notification);

extern inline void TBMBAutoHandlerReceiverNotification(id <TBMBMessageReceiver> handler, id <TBMBNotification> notification);

extern inline const NSUInteger TBMBGetDefaultNotificationKey(id o);

extern inline BOOL TBMBIsNotificationProxy(id <TBMBNotification> notification);

extern inline void TBMBAutoBindingKeyPath(id bindable);
