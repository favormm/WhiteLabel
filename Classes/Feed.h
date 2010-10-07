//
//  Feed.h
//  WhiteLabel
//
//  Created by Barry Burton on 10/7/10.
//  Copyright 2010 Gravity Mobile. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Feed : NSObject {
	NSArray *list;
	NSURL *feedURL;
	NSString *contentTitle;
	
	NSMutableData *receivedData;
	NSMutableArray *newList;
	NSMutableDictionary *newEntry;
	NSMutableString *dataString
	
	BOOL parsingEntry;
	BOOL probablyFeed;
	BOOL probablyPage;
	BOOL shouldFetchUpdate;
}

@property (nonatomic, retain) NSArray *list;
@property (nonatomic, retain) NSURL *feedURL;
@property (nonatomic, retain) NSString *contentTitle;

@property (nonatomic, retain) NSMutableData *receivedData;
@property (nonatomic, retain) NSMutableArray *newList;
@property (nonatomic, retain) NSMutableDictionary *newEntry;
@property (nonatomic, retain) NSMutableString *dataString;

- (void)setAddress:(NSString*)theAddress;
- (NSString *)getAddress;
- (void)fetchUpdatedData;
- (unsigned)countOfList;
- (id)objectInListAtIndex:(unsigned)theIndex;

@end
