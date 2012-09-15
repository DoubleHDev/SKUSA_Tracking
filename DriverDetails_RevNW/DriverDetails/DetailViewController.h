//
//  DetailViewController.h
//  DriverDetails
//
//  Created by gleavitt on 9/11/12.
//  Copyright (c) 2012 Geoff Leavitt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DriverViewController.h"

@interface DetailViewController : UIViewController
{
    DriverDetails *driver;
    
    IBOutlet UILabel *lastName;
    IBOutlet UILabel *firstName;
    IBOutlet UILabel *chassis;
    IBOutlet UILabel *chassisBar;
    IBOutlet UILabel *engine;
    IBOutlet UILabel *engineBar;
    IBOutlet UILabel *tire1;
    IBOutlet UILabel *tire2;
    IBOutlet UILabel *tire3;
    IBOutlet UILabel *tire4;
    IBOutlet UILabel *tire5;
    IBOutlet UILabel *tire6;
}

@property (strong, nonatomic) DriverDetails *driver;
@property (nonatomic, strong) IBOutlet UILabel *lastName;
@property (nonatomic, strong) IBOutlet UILabel *firstName;
@property (nonatomic, strong) IBOutlet UILabel *chassis;
@property (nonatomic, strong) IBOutlet UILabel *chassisBar;
@property (nonatomic, strong) IBOutlet UILabel *engine;
@property (nonatomic, strong) IBOutlet UILabel *engineBar;
@property (nonatomic, strong) IBOutlet UILabel *tire1;
@property (nonatomic, strong) IBOutlet UILabel *tire2;
@property (nonatomic, strong) IBOutlet UILabel *tire3;
@property (nonatomic, strong) IBOutlet UILabel *tire4;
@property (nonatomic, strong) IBOutlet UILabel *tire5;
@property (nonatomic, strong) IBOutlet UILabel *tire6;

@property (strong, nonatomic) id detailItem;
@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
