//
//  TWPhotosCollectionViewController.h
//  Thousand Words
//
//  Created by アンディット ヘリスティヨ on 2014/05/22.
//  Copyright (c) 2014年 Digital Garage. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Album.h"

@interface TWPhotosCollectionViewController : UICollectionViewController

@property (strong, nonatomic) Album *album;

- (IBAction)cameraBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
