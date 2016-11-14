//
//  BKiCloudSyncHandler.h
//  Blink
//
//  Created by Atul M on 10/11/16.
//  Copyright © 2016 Carlos Cabañero Projects SL. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BKHosts;
@class CKRecordID;

extern NSString const *BKiCloudSyncDeletedHosts;
extern NSString const *BKiCloudSyncUpdatedHosts;

@interface BKiCloudSyncHandler : NSObject
+ (id)sharedHandler;
- (void)fetchFromiCloud;

- (void)createNewHost:(BKHosts*)host;
- (void)deleteHostWithId:(CKRecordID*)recordId;

@end
