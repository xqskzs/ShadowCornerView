//
//  ShadowCornerView.h
//  qnchuxing_driver
//
//  Created by 李志强 on 3/8/19.
//  Copyright © 2019 qnchuxing. All rights reserved.
//

#import <UIKit/UIKit.h>


/**
 *  使用例子
 UIView * v = [[UIView alloc] init];
 v.backgroundColor = [UIColor whiteColor];
 v.shadowCorner = ShadowTop|ShadowBottom|ShadowRight|CornerTopRight|CornerTopLeft|CornerBottomLeft|CornerType10;//0x10b7;
 
 UIView * shadowView = [ShadowCornerView viewWithContentView:v];
 [self.view addSubview:shadowView];
 
 [shadowView mas_makeConstraints:^(MASConstraintMaker *make) {
 make.centerX.equalTo(self.view.mas_centerX);
 make.centerY.equalTo(self.view.mas_centerY);
 make.width.height.equalTo(@100);
 }];
 **/


/**
 *  根据需求选择哪条边阴影和哪个角圆角以及一部份常用的圆角选项
 **/
typedef NS_ENUM(NSUInteger,UIViewShadowCorner)
{
    ShadowTop             =          /*0x0001*/         1<<0,//0x0001
    ShadowRight           =          /*0x0003*/         1<<1,//0x0002
    ShadowBottom          =          /*0x0007*/         1<<2,//0x0004
    ShadowLeft            =          /*0x000f*/         1<<3,//0x0008
    ShadowAll             =                             15,//0x000f
    
    CornerTopLeft         =          /*0x0010*/         1<<4,//0x0010
    CornerTopRight        =          /*0x0030*/         1<<5,//0x0020
    CornerBottomRight     =          /*0x0070*/         1<<6,//0x0040
    CornerBottomLeft      =          /*0x00f0*/         1<<7,//0x0080
    CornerAll             =                             240,//0x00f0
    
    ShadowCornerAll       =                             255,//0x00ff
    //以下只需选择一个
    CornerType2           =                   1<<8,//0x0100
    CornerType4           =                   1<<9,//0x0200
    CornerType6           =                   1<<10,//0x0400
    CornerType8           =                   1<<11,//0x0800
    CornerType10          =                   1<<12,//0x1000
};

@interface ShadowCornerView : UIView
/**
 *  返回一个带任意几边阴影和几个角圆角的view
 params
 contentView: 负责内容的展示和圆角的显示
 **/
+ (UIView *)viewWithContentView:(UIView *)contentView;

@end
@interface UIView (ShadowCorner)

@property(nonatomic,assign)UIViewShadowCorner shadowCorner;
@property(nonatomic,assign)BOOL isNeedShadowOffset;
@end


