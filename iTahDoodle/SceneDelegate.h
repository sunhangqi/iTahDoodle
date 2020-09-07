//
//  SceneDelegate.h
//  iTahDoodle
//
//  Created by one on 2020/9/7.
//  Copyright © 2020 one. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SceneDelegate : UIResponder <UIWindowSceneDelegate>

@property (strong, nonatomic) UIWindow * window;

@property (nonatomic) UITableView * taskTable;
@property (nonatomic) UITextField * taskField;
@property (nonatomic) UIButton * insertButton;
@property (nonatomic) NSMutableArray * tasks;

- (void)addTasks:(id)sender;

@end

