//
//  Venue.h
//  CoffeeShop
//
//  Created by MacUser1 on 1/14/13.
//  Copyright (c) 2013 Master of Code. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Locations.h"
#import "Stats.h"
#import "Categories.h"

@interface Venue : NSObject

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) Locations *location;
@property (strong, nonatomic) Stats *stats;
@property (strong, nonatomic) NSArray *categories;

@end
