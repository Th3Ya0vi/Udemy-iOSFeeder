//
//  MARViewController.h
//  Udemy-iOSFeeder
//
//  Created by Ramirez, Miguel on 1/28/14.
//  Copyright (c) 2014 Ramirez, Miguel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MARViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, NSURLConnectionDataDelegate, NSURLConnectionDelegate>

@property (weak, nonatomic) IBOutlet UITableView *mainFeeder;
@property (strong, nonatomic) NSMutableArray *mainArray;

@end
