//
//  UIView+Geometry.h
//  JohnUIKit
//
//  Created by 舒鹏 on 7/30/14.
//  Copyright (c) 2014 John. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Geometry)
@property (nonatomic) CGPoint frameOrigin;
@property (nonatomic) CGSize frameSize;
@property (nonatomic, readonly) CGSize boundsSize;

@property (nonatomic) CGFloat frameX;
@property (nonatomic) CGFloat frameY;

// Setting these modifies the origin but not the size.
@property (nonatomic) CGFloat frameRight;
@property (nonatomic) CGFloat frameBottom;

@property (nonatomic) CGFloat frameWidth;
@property (nonatomic) CGFloat frameHeight;

- (void)setFrameWidthSameCenter:(CGFloat)frameWidth;
- (void)setFrameHeightSameCenter:(CGFloat)frameHeight;

@property (nonatomic, readonly) CGFloat boundsX;
@property (nonatomic, readonly) CGFloat boundsY;
@property (nonatomic, readonly) CGFloat boundsWidth;
@property (nonatomic, readonly) CGFloat boundsHeight;

// Methods for centering.
- (void)addCenteredSubview:(UIView *)subview;
- (void)moveToCenterOfSuperview;
- (void)centerVerticallyInSuperview;
- (void)centerHorizontallyInSuperview;
@end
