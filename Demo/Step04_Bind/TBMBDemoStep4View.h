//
// Created by <a href="mailto:wentong@taobao.com">文通</a> on 13-1-16 下午12:34.
//


#import <Foundation/Foundation.h>
#import "TBMBDefaultPage.h"

@class TBMBDemoStep4ViewDO;


@interface TBMBDemoStep4View : TBMBDefaultPage
//这个对象用来做绑定触发的,所有操作都可以用这个对象来触发
@property(nonatomic, retain) TBMBDemoStep4ViewDO *viewDO;
@end