//
//  DriverViewController.m
//  DriverDetails
//
//  Created by gleavitt on 9/11/12.
//  Copyright (c) 2012 Geoff Leavitt. All rights reserved.
//

#import "DriverViewController.h"

@interface DriverViewController ()

@end

@implementation DriverViewController

@synthesize saveButton;
@synthesize cancelButton;
@synthesize delegate;
@synthesize lastName;
@synthesize firstName;
@synthesize engine;
@synthesize engineBar;
@synthesize chassis;
@synthesize chassisBar;
@synthesize tire1;
@synthesize tire2;
@synthesize tire3;
@synthesize tire4;
@synthesize tire5;
@synthesize tire6;
@synthesize driver;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    //Adds Navidation bar and buttons to view.
    self.title = @"New Driver";
    self.navigationItem.rightBarButtonItem = saveButton;
    self.navigationItem.leftBarButtonItem = cancelButton;
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

//Navigation bar button Cancel.
- (IBAction) cancel:(id)sender
{
    [delegate driverViewController:self selectedSave:NO];
}

//Navigation bar button Save.
- (IBAction) save:(id)sender
{
    driver.lastName = lastName.text;
    driver.firstName = firstName.text;
    driver.engineName = engine.text;
    driver.engineBarCode = [NSString stringWithFormat:@"%@", engineBar];
    driver.chassisName = chassis.text;
    driver.chassisBarCode = [NSString stringWithFormat:@"%@", chassisBar];
    driver.tire1 = [NSString stringWithFormat:@"%@", tire1];
    driver.tire2 = [NSString stringWithFormat:@"%@", tire2];
    driver.tire3 = [NSString stringWithFormat:@"%@", tire3];
    driver.tire4 = [NSString stringWithFormat:@"%@", tire4];
    driver.tire5 = [NSString stringWithFormat:@"%@", tire5];
    driver.tire6 = [NSString stringWithFormat:@"%@", tire6];
    
    [delegate driverViewController:self selectedSave:YES];
}

@end
