//
//  SceneDelegate.h
//  iTahDoodle
//
//  Created by one on 2020/9/7.
//  Copyright © 2020 one. All rights reserved.
//

#import <UIKit/UIKit.h>

//声明辅助函数， 该函数会返回特定文件的路径，用于保存用户的任务列表信息
NSString *docPath(void);

@interface SceneDelegate : UIResponder <UIWindowSceneDelegate, UITableViewDataSource>

@property (strong, nonatomic) UIWindow * window;

@property (nonatomic) UITableView * taskTable;
@property (nonatomic) UITextField * taskField;
@property (nonatomic) UIButton * insertButton;
@property (nonatomic) NSMutableArray * tasks;

- (void)addTasks:(id)sender;

@end

