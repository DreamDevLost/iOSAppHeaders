//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectInboxThreadSectionController, NSString;

@protocol IGDirectPendingInboxThreadSectionControllerDelegate <NSObject>
- (long long)inboxThreadSectionControllerSelectedSortOption;
- (void)inboxThreadSectionController:(IGDirectInboxThreadSectionController *)arg1 didRequestBlockThreadWithId:(NSString *)arg2;
- (void)inboxThreadSectionController:(IGDirectInboxThreadSectionController *)arg1 didDeleteThreadWithId:(NSString *)arg2;
- (void)inboxThreadSectionController:(IGDirectInboxThreadSectionController *)arg1 didDeclineThreadWithId:(NSString *)arg2;
- (void)inboxThreadSectionController:(IGDirectInboxThreadSectionController *)arg1 didAllowThreadWithId:(NSString *)arg2;
@end
