//
//  ViewController.h
//  TouchesHW
//
//  Created by Artem Belkov on 02/07/15.
//  Copyright © 2015 Artem Belkov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIView *field;
@property (strong, nonatomic) IBOutletCollection(UIView) NSArray *fieldCells;

@end

