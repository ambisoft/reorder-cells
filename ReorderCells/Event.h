//
//  Event.h
//  ReorderCells
//
//  Created by Marek Publicewicz on 10/22/13.
//  Copyright (c) 2013 Marek Publicewicz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Event : NSManagedObject

@property (nonatomic, retain) NSNumber * orderIdx;
@property (nonatomic, retain) NSDate * timeStamp;

@end
