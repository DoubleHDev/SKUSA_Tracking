//
//  DriverViewController.h
//  DriverDetails
//
//  Created by gleavitt on 9/11/12.
//  Copyright (c) 2012 Geoff Leavitt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DriverDetails.h"
//  Linea implementation
#import "LineaSDK.h"

@protocol DriverViewControllerDelegate;

@interface DriverViewController : UIViewController <LineaDelegate>
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
    IBOutlet NSNumber *chassisBar;
    IBOutlet UITextField *engine;
    IBOutlet NSNumber *engineBar;
    IBOutlet NSNumber *tire1;
    IBOutlet NSNumber *tire2;
    IBOutlet NSNumber *tire3;
    IBOutlet NSNumber *tire4;
    IBOutlet NSNumber *tire5;
    IBOutlet NSNumber *tire6;
    
    //  LineaPro implementation
    IBOutlet UITextView *debugText;
    IBOutlet UIButton *scanButton;
    NSMutableString *status;
    NSMutableString *debug;
    Linea *linea;
}

//  LineaPro implementation
-(void)debug:(NSString *)text;

@property (nonatomic, strong) DriverDetails *driver;
@property (nonatomic, strong) id <DriverViewControllerDelegate> delegate;
@property (nonatomic, strong) IBOutlet UIBarButtonItem *cancelButton;
@property (nonatomic, strong) IBOutlet UIBarButtonItem *saveButton;
@property (nonatomic, strong) IBOutlet UITextField *lastName;
@property (nonatomic, strong) IBOutlet UITextField *firstName;
@property (nonatomic, strong) IBOutlet UITextField *chassis;
@property (nonatomic, strong) IBOutlet NSNumber *chassisBar;
@property (nonatomic, strong) IBOutlet UITextField *engine;
@property (nonatomic, strong) IBOutlet NSNumber *engineBar;
@property (nonatomic, strong) IBOutlet NSNumber *tire1;
@property (nonatomic, strong) IBOutlet NSNumber *tire2;
@property (nonatomic, strong) IBOutlet NSNumber *tire3;
@property (nonatomic, strong) IBOutlet NSNumber *tire4;
@property (nonatomic, strong) IBOutlet NSNumber *tire5;
@property (nonatomic, strong) IBOutlet NSNumber *tire6;

- (IBAction) cancel:(id)sender;
- (IBAction) save:(id)sender;

//  LineaPro implementation
-(IBAction)scanDown:(id)sender;
@end

@protocol DriverViewControllerDelegate

- (void) driverViewController:(DriverViewController *) controller selectedSave:(BOOL) save;

@end

DriverViewController *viewController;
#define SHOWERR(func) func; if(error)[viewController debug:error.localizedDescription];
#define ERRMSG(title) {UIAlertView *alert = [[UIAlertView alloc] initWithTitle:title message:error.localizedDescription delegate:nil cancelButtonTitle:@"Ok" otherButtonTitles:nil, nil]; [alert show];}

