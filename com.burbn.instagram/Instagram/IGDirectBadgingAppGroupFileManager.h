//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface IGDirectBadgingAppGroupFileManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_viewerIdToBadgeCountEntry;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_setBadgeCountEntry:(id)arg1;
- (void)_readFromDiskWithCompletion:(CDUnknownBlockType)arg1;
- (void)asyncGetBadgeCountEntryForViewerId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asyncSetBadgeCountEntry:(id)arg1;
- (id)init;

@end

