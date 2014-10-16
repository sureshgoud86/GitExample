//
//  ViewController.h
//  GitExample
//
//  Created by SureshGoud on 2014/10/16.
//  Copyright (c) 2014年 Suresh Company. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (IBAction)btnAction:(id)sender;

@property (strong, nonatomic) IBOutlet UIView *labelX;
@property (strong, nonatomic) IBOutlet UIView *labelY;
@property (strong, nonatomic) IBOutlet UIView *labelZ;

@end

