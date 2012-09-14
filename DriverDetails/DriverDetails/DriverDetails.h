//
//  DriverDetails.h
//  DriverDetails
//
//  Created by gleavitt on 9/11/12.
//  Copyright (c) 2012 Geoff Leavitt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface DriverDetails : NSManagedObject

@property (nonatomic, strong) NSString * lastName;
@property (nonatomic, strong) NSString * firstName;
@property (nonatomic, strong) NSNumber * tire1;
@property (nonatomic, strong) NSNumber * tire2;
@property (nonatomic, strong) NSNumber * tire3;
@property (nonatomic, strong) NSNumber * tire4;
@property (nonatomic, strong) NSNumber * tire5;
@property (nonatomic, strong) NSNumber * tire6;
@property (nonatomic, strong) NSNumber * chassisBarCode;
@property (nonatomic, strong) NSNumber * engineBarCode;
@property (nonatomic, strong) NSString * chassisName;
@property (nonatomic, strong) NSString * engineName;

@end
