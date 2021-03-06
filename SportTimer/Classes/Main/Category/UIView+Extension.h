//
//  UIView+Extension.h
//  微博
//
//  Created by jewelz on 15/4/23.
//  Copyright (c) 2015年 yangtzeu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Extension)
@property (assign, nonatomic) CGFloat x;
@property (assign, nonatomic) CGFloat y;
@property (assign, nonatomic) CGFloat width;
@property (assign, nonatomic) CGFloat height;
@property (assign, nonatomic) CGSize  size;
@property (assign, nonatomic) CGPoint origion;

- (void)addLineAtButtonFrom:(CGPoint)fromPoint to:(CGPoint)toPoint;
- (void)addLineFrom:(CGPoint)fromPoint to:(CGPoint)toPoint;

@end
