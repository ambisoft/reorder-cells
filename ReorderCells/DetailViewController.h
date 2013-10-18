//
//  DetailViewController.h
//  ReorderCells
//
//  Created by Marek Publicewicz on 10/18/13.
//  Copyright (c) 2013 Marek Publicewicz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
