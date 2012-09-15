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
    //  LineaPro implementation
    linea=[Linea sharedDevice];
    
    [linea addDelegate:self];
    
    [linea connect];
    
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    //Adds Navidation bar and buttons to view.
    self.title = @"New Driver";
    self.navigationItem.rightBarButtonItem = saveButton;
    self.navigationItem.leftBarButtonItem = cancelButton;
}
//  Linea implementation

-(void)barcodeData:(NSString *)barcode type:(int)type

{
    
    NSLog(@"%@", barcode);
    
}
//  Linea implementation
-(void)debug:(NSString *)text
{
	NSDateFormatter *dateFormat=[[NSDateFormatter alloc] init];
	[dateFormat setDateFormat:@"HH:mm:ss:SSS"];
	NSString *timeString = [dateFormat stringFromDate:[NSDate date]];
	
	if([debug length]>10000)
		[debug setString:@""];
	[debug appendFormat:@"%@-%@\n",timeString,text];
    
	[debugText setText:debug];
#ifdef LOG_FILE
	[debug writeToFile:[self getLogFile]  atomically:YES];
#endif
}

-(void)debugString:(NSString *)text
{
    [self debug:text];
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
    driver.engineBarCode = (NSNumber *)[NSString stringWithFormat:@"%@", engineBar];
    driver.chassisName = chassis.text;
    driver.chassisBarCode = (NSNumber *)[NSString stringWithFormat:@"%@", chassisBar];
    driver.tire1 = (NSNumber *)[NSString stringWithFormat:@"%@", tire1];
    driver.tire2 = (NSNumber *)[NSString stringWithFormat:@"%@", tire2];
    driver.tire3 = (NSNumber *)[NSString stringWithFormat:@"%@", tire3];
    driver.tire4 = (NSNumber *)[NSString stringWithFormat:@"%@", tire4];
    driver.tire5 = (NSNumber *)[NSString stringWithFormat:@"%@", tire5];
    driver.tire6 = (NSNumber *)[NSString stringWithFormat:@"%@", tire6];
    
    [delegate driverViewController:self selectedSave:YES];
}


//  LineaPro implementation

bool scanActive=false;

-(IBAction)scanDown:(id)sender;
{
    NSError *error=nil;
    
	// [statusImage setImage:[UIImage imageNamed:@"scanning.png"]];
	// [displayText setText:@""];
	//[self cleanPrintInfo];
	// refresh the screen
	[[NSRunLoop currentRunLoop] runUntilDate:[NSDate dateWithTimeIntervalSinceNow:0.01]];
    int scanMode;
    
    if([linea getScanMode:&scanMode error:&error] && scanMode==MODE_MOTION_DETECT)
    {
        if(scanActive)
        {
            scanActive=false;
            SHOWERR([linea stopScan:&error]);
        }else {
            scanActive=true;
            SHOWERR([linea startScan:&error]);
        }
    }else
        SHOWERR([linea startScan:&error]);
}
@end
