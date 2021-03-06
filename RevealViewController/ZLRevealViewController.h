//
//  ZLRevealViewController.h
//  RevealViewControllerTest
//
//  Created by Ilya Dyakonov on 19/04/14.
//  Copyright (c) 2014 ZappyLab. All rights reserved.
//

#import <UIKit/UIKit.h>

/////////////////////////////////////////////////////

static NSString *const ZLRevealViewControllerDidHideRightSidekickNotification = @"RevealViewControllerDidHideRightSidekick";

/////////////////////////////////////////////////////

@interface ZLRevealViewController : UIViewController

-(void) setLeftSidekickWidth:(CGFloat) width;

-(void) showViewController:(UIViewController *) viewController;
-(void) showRightSidekickController:(UIViewController *) viewController;

-(void) showLeftSidekickController:(UIViewController *) viewController;

-(void) showSidekick;
-(void) hideSidekick;
-(void) toggleSidekick;

-(void) showRightSidekick;
-(void) hideRightSidekick;

@end

/////////////////////////////////////////////////////
