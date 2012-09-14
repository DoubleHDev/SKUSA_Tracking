//
//  DriverViewController.h
//  DriverDetails
//
//  Created by gleavitt on 9/11/12.
//  Copyright (c) 2012 Geoff Leavitt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DriverDetails.h"

@protocol DriverViewControllerDelegate;

@interface DriverViewController : UIViewController
{
    DriverDetails *driver;
    id <DriverViewControllerDelegate> delegate;
    
    //Navigation bar buttons
    IBOutlet UIBarButtonItem *cancelButton;
    IBOutlet UIBarButtonItem *saveButton;
    
    //Driver name entry fields
    IBOutlet UITextField *lastName;
    IBOutlet UITextField *firstName;
    IBOutlet UITextField *chassis;
    IBOutlet UITextField *chassisBar;
    IBOutlet UITextField *engine;
    IBOutlet UITextField *engineBar;
    IBOutlet UITextField *tire1;
    IBOutlet UITextField *tire2;
    IBOutlet UITextField *tire3;
    IBOutlet UITextField *tire4;
    IBOutlet UITextField *tire5;
    IBOutlet UITextField *tire6;
    
}

@property (nonatomic, strong) DriverDetails *driver;
@property (nonatomic, strong) id <DriverViewControllerDelegate> delegate;
@property (nonatomic, strong) IBOutlet UIBarButtonItem *cancelButton;
@property (nonatomic, strong) IBOutlet UIBarButtonItem *saveButton;
@property (nonatomic, strong) IBOutlet UITextField *lastName;
@property (nonatomic, strong) IBOutlet UITextField *firstName;
@property (nonatomic, strong) IBOutlet UITextField *chassis;
@property (nonatomic, strong) IBOutlet UITextField *chassisBar;
@property (nonatomic, strong) IBOutlet UITextField *engine;
@property (nonatomic, strong) IBOutlet UITextField *engineBar;
@property (nonatomic, strong) IBOutlet UITextField *tire1;
@property (nonatomic, strong) IBOutlet UITextField *tire2;
@property (nonatomic, strong) IBOutlet UITextField *tire3;
@property (nonatomic, strong) IBOutlet UITextField *tire4;
@property (nonatomic, strong) IBOutlet UITextField *tire5;
@property (nonatomic, strong) IBOutlet UITextField *tire6;

- (IBAction) cancel:(id)sender;
- (IBAction) save:(id)sender;

@end

@protocol DriverViewControllerDelegate

- (void) driverViewController:(DriverViewController *) controller selectedSave:(BOOL) save;

@end
