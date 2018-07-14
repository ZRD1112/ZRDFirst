//
//  AppDelegate.h
//  ZRD1112
//
//  Created by 公司的mini on 2018/7/14.
//  Copyright © 2018年 tongyi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

