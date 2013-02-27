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
