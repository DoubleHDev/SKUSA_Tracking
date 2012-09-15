//
//  MasterViewController.h
//  DriverDetails
//
//  Created by gleavitt on 9/11/12.
//  Copyright (c) 2012 Geoff Leavitt. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

#import <CoreData/CoreData.h>
#import "DriverViewController.h"
#import "DetailViewController.h"

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate, DriverViewControllerDelegate>
{
    @private
    NSFetchedResultsController *fetchedResultsController_;
    NSManagedObjectContext *managedObjectContext_;
    NSManagedObjectContext *drivercontext;
}

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) NSManagedObjectContext *drivercontext;

@end
