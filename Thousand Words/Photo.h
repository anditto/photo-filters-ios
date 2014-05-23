//
//  Photo.h
//  Thousand Words
//
//  Created by アンディット ヘリスティヨ on 2014/05/23.
//  Copyright (c) 2014年 Digital Garage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Album;

@interface Photo : NSManagedObject

@property (nonatomic, retain) id image;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) Album *albumBook;

@end
