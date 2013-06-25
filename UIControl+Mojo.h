//
//  UIControl+Mojo.h
//  DolphinSharing
//
//  Created by Dany on 13-2-25.
//  Copyright (c) 2013年 mojo-tech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIControl (Mojo)

- (void)handleControlEvent:(UIControlEvents)event withBlock:(void(^)(id sender))block;
- (void)removeHandlerForEvent:(UIControlEvents)event;

@end


@interface UIControl (TouchAreaMgr)

/*
 用于设置按钮区域的edge inset,要扩大的话用负数表示,例如:上下左右各延伸20:UIEdgeInsetsMake(-20, -20, -20, -20).
 此property没有实际意义,因为category是不能添加成员变量的.
 在此的作用,仅仅是提供了它对应的 getter 和 setter 方法而已.
 */
@property(nonatomic, assign) UIEdgeInsets hitTestEdgeInsets;

@end