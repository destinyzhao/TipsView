//
//  TipsView.h
//  TipsView
//
//  Created by Alex on 16/3/23.
//  Copyright © 2016年 Alex. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TipsView : UIView

+ (void)showCenterTitle:(NSString *)title;
+ (void)showCenterTitle:(NSString *)title completion:(void(^)(void))completion;
+ (void)showCenterTitle:(NSString *)title duration:(NSTimeInterval)duration completion:(void(^)(void))completion;

+ (void)showBottomTitle:(NSString *)title;
+ (void)showBottomTitle:(NSString *)title completion:(void(^)(void))completion;
+ (void)showBottomTitle:(NSString *)title duration:(NSTimeInterval)duration completion:(void(^)(void))completion;

+ (void)dismiss;

@end
