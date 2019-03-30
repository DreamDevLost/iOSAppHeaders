//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"

@class NSMutableArray, NSString;

@interface IGVideoPlaybackAnalyticsEventHistory : NSObject <UITableViewDataSource>
{
    NSMutableArray *_analyticsEventHistoryStore;
    id <IGVideoPlaybackAnalyticsEventHistoryDelegate> _delegate;
}

@property(nonatomic) __weak id <IGVideoPlaybackAnalyticsEventHistoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_dictionaryForKeys:(id)arg1 event:(id)arg2;
- (id)_eventDisplayExtras:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)addAnalyticsEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
