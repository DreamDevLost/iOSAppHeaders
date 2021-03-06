//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSIndexPath, NSString, UITableView;

@interface IGDirectPendingInboxThreadSortOptionsView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_sortOptionsTableView;
    NSArray *_sortOptions;
    long long _selectedSortType;
    id <IGDirectPendingInboxThreadSortOptionsViewDelegate> _delegate;
    NSIndexPath *_selectedSortTypeIndexPath;
}

+ (double)heightWithOptionCount:(long long)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)_sortOptionsViewHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_threadSortOptionCellForTableView:(id)arg1 sortType:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateSelectedSortType:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 sortOptions:(id)arg2 selectedSortType:(long long)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

