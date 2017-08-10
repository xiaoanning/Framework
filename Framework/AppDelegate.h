//
//  AppDelegate.h
//  Framework
//
//  Created by 安宁 on 2017/7/18.
//  Copyright © 2017年 安宁. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;


@end


/*
 
 
 使用Xcode构建一个基本的静态库工程。
 依赖于该静态库工程构建一款应用。
 掌握如何将静态库工程转换为完整的、合格的Framework。
 最终，你将看到如何将一个图像文件同Framework一起打包到resource bundle下
 
 
 
 Framework是资源的集合，将静态库和其头文件包含到一个结构中，让Xcode可以方便地把它纳入到你的项目中
 
 在OS X 或者 iOS 8 上，可以创建一个动态连接（Dynamically Linked）的framework。通过动态连接，framework可以更新，不需要应用重新连接。在运行时，库中代码的一份拷贝被分享出来，整个工程都可以使用它，因此，这样减少了内存消耗，提高了系统的性能
 
 静态连接的framework也可以打包代码，使其在不同的应用中复用
 
 
 framework本质上是静态库的“一站式采购点”，因此你所做的第一件事就是创建并使用静态库
 
 
 1.创建一个静态库工程
 创建一个头文件 引入所有公开的头文件  这样引入该头文件就可以访问所有想公开的类
 
 ps: 项目中导入的系统库  都需要导入依赖  并写文档 方便其他人导入项目
 
 2.设置头文件的membership属性
 将公开的头文件拖入 target ---> build phases ---> headers ----> public
 PS: Public是公开的，Private下的头文件依然是可以暴露出来的，Project下的头文件才是“私有”的
 
 ps:除了拖文件 还可以在项目中编辑该文件 目录中选中该文件 在右侧Target Membership面板下的membership 选择该文件的属性为Public、Private、Project
    如果往库中添加新的类，记得及时更新这些类的关系（membership），使尽可能少的类成为public，并确保其他非public的头文件都在Project下
 
 3.头文件的位置目录
    
 */






