//
//  MasterViewController.h
//  ReorderCells
//
//  Created by Marek Publicewicz on 10/18/13.
//  Copyright (c) 2013 Marek Publicewicz. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
