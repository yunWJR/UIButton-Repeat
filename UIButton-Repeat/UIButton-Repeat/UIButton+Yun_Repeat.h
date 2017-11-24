//
// Created by yun on 2017/11/20.
// Copyright (c) 2017 skkj. All rights reserved.
//

#import <UIKit/UIKit.h>

#define DefBtnRpTimeItv 0.5 //默认时间间隔

@interface UIButton (Yun_Repeat)

// 重复点击间隔
@property (nonatomic, assign) NSTimeInterval clickInterval;

// YES不允许点击 NO允许点击
@property (nonatomic, assign) BOOL isIgnoreEvent;

// YES不监测重复点击 NO允许点击
@property (nonatomic, assign) BOOL disableRepeat;

@end