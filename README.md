# CXMTimer
利用`GCD`封装的准确定时器

```
/*
start：开始时间，interval：间隔，repeats: 是否重复，async ： 同步还是异步
返回一个 定时器标识
*/
+ (NSString *)execTask:(void(^)(void))task
           start:(NSTimeInterval)start
        interval:(NSTimeInterval)interval
         repeats:(BOOL)repeats
           async:(BOOL)async;
//取消定时器，参数是：执行方法返回的标识
+ (void)cancelTask:(NSString *)name;
```
