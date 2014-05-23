//
//  TWCoreDataHelper.m
//  Thousand Words
//
//  Created by アンディット ヘリスティヨ on 2014/05/22.
//  Copyright (c) 2014年 Digital Garage. All rights reserved.
//

#import "TWCoreDataHelper.h"

@implementation TWCoreDataHelper

+(NSManagedObjectContext *)managedObjectContext
{
    NSManagedObjectContext *context = nil;
    id delegate = [[UIApplication sharedApplication] delegate];
    
    if ([delegate performSelector:@selector(managedObjectContext)]) {
        context = [delegate managedObjectContext];
    }
    
    return context;
}

@end
