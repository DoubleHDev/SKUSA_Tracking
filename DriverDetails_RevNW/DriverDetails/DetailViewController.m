//
//  DetailViewController.m
//  DriverDetails
//
//  Created by gleavitt on 9/11/12.
//  Copyright (c) 2012 Geoff Leavitt. All rights reserved.
//

#import "DetailViewController.h"

@interface DetailViewController ()

- (void)configureView;

@end

@implementation DetailViewController

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

#pragma mark - Managing the detail item

- (void)setDetailItem:(id)newDetailItem
{
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
        
        // Update the view.
        [self configureView];
    }
}

- (void)configureView
{
    // Update the user interface for the detail item.

    if (self.detailItem) {
        self.detailDescriptionLabel.text = [[self.detailItem valueForKey:@"timeStamp"] description];
    }
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    self.title = @"Driver Info";
    lastName.text = driver.lastName;
    firstName.text = driver.firstName;
    engine.text = driver.engineName;
    engineBar =[NSString stringWithFormat:@"%@", driver.engineBarCode];
    chassis.text = driver.chassisName;
    chassis.text = [NSString stringWithFormat:@"%@", driver.chassisBarCode];
    tire1 = [NSString stringWithFormat:@"%@", driver.tire1];
    tire2 = [NSString stringWithFormat:@"%@", driver.tire2];
    tire3 = [NSString stringWithFormat:@"%@", driver.tire3];
    tire4 = [NSString stringWithFormat:@"%@", driver.tire4];
    tire5 = [NSString stringWithFormat:@"%@", driver.tire5];
    tire6 = [NSString stringWithFormat:@"%@", driver.tire6];
    
    [self configureView];
    
    
    
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation != UIInterfaceOrientationPortraitUpsideDown);
}

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        self.title = NSLocalizedString(@"Detail", @"Detail");
    }
    return self;
}
							
@end
