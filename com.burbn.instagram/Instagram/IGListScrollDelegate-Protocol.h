//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGListAdapter, IGListSectionController;

@protocol IGListScrollDelegate <NSObject>
- (void)listAdapter:(IGListAdapter *)arg1 didEndDraggingSectionController:(IGListSectionController *)arg2 willDecelerate:(_Bool)arg3;
- (void)listAdapter:(IGListAdapter *)arg1 willBeginDraggingSectionController:(IGListSectionController *)arg2;
- (void)listAdapter:(IGListAdapter *)arg1 didScrollSectionController:(IGListSectionController *)arg2;

@optional
- (void)listAdapter:(IGListAdapter *)arg1 didEndDeceleratingSectionController:(IGListSectionController *)arg2;
@end

