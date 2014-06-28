//
//  TimelineTableViewController.h
//  twitter
//
//  Created by mhahn on 6/24/14.
//  Copyright (c) 2014 Michael Hahn. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ContentViewControllerDelegate.h"

@interface TimelineTableViewController : UITableViewController

@property (nonatomic, assign) id<ContentViewControllerDelegate> delegate;

@end
