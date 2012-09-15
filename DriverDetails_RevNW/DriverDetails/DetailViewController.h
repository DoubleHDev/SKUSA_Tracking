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
    IBOutlet NSNumber *chassisBar;
    IBOutlet UILabel *engine;
    IBOutlet NSNumber *engineBar;
    IBOutlet NSNumber *tire1;
    IBOutlet NSNumber *tire2;
    IBOutlet NSNumber *tire3;
    IBOutlet NSNumber *tire4;
    IBOutlet NSNumber *tire5;
    IBOutlet NSNumber *tire6;
}

@property (strong, nonatomic) DriverDetails *driver;
@property (nonatomic, strong) IBOutlet UILabel *lastName;
@property (nonatomic, strong) IBOutlet UILabel *firstName;
@property (nonatomic, strong) IBOutlet UILabel *chassis;
@property (nonatomic, strong) IBOutlet NSNumber *chassisBar;
@property (nonatomic, strong) IBOutlet UILabel *engine;
@property (nonatomic, strong) IBOutlet NSNumber *engineBar;
@property (nonatomic, strong) IBOutlet NSNumber *tire1;
@property (nonatomic, strong) IBOutlet NSNumber *tire2;
@property (nonatomic, strong) IBOutlet NSNumber *tire3;
@property (nonatomic, strong) IBOutlet NSNumber *tire4;
@property (nonatomic, strong) IBOutlet NSNumber *tire5;
@property (nonatomic, strong) IBOutlet NSNumber *tire6;

@property (strong, nonatomic) id detailItem;
@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
