//
//  UIViewEnlargeHitTest.m
//  JohnUIKit
//
//  Created by 舒鹏 on 7/30/14.
//  Copyright (c) 2014 John. All rights reserved.
//

#import "UIViewEnlargeHitTest.h"
#import "UIView+Geometry.h"

@implementation UIViewEnlargeHitTest
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent *)event
{
    UIEdgeInsets edgeInsets = self.hitTestEdgeInsets;
    
    if (UIEdgeInsetsEqualToEdgeInsets(edgeInsets, UIEdgeInsetsZero)) {
        return [super pointInside:point withEvent:event];
    }
    else{
        CGRect hitBounds = CGRectMake(self.boundsX - edgeInsets.left, self.boundsY - edgeInsets.top, self.boundsWidth + edgeInsets.left + edgeInsets.right, self.boundsHeight + edgeInsets.top + edgeInsets.bottom);
        
        return CGRectContainsPoint(hitBounds, point);
    }
}
@end
