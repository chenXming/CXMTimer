//
//  CXMTimer.h
//  GCD定时器
//
//  Created by cxm on 2019/5/29.
//  Copyright © 2019 MJ Lee. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXMTimer : NSObject
//start：开始时间，interval：间隔，repeats: 是否重复，async ： 同步还是异步

// 返回一个任务的唯一标识，方便后面取消 Blcok调用
+ (NSString *)execTask:(void(^)(void))task
                 start:(NSTimeInterval)start
              interval:(NSTimeInterval)interval
               repeats:(BOOL)repeats
                 async:(BOOL)async;
// 方法 调用
+ (NSString *)execTask:(id)target
              selector:(SEL)selector
                 start:(NSTimeInterval)start
              interval:(NSTimeInterval)interval
               repeats:(BOOL)repeats
                 async:(BOOL)async;

//取消定时器，参数是：执行方法返回的标识
+ (void)cancelTask:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
