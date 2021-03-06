//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectInboxThreadCell, IGDirectInboxThreadSectionController, NSString, UIButton;

@protocol IGDirectMainInboxThreadSectionControllerDelegate <NSObject>
- (long long)inboxThreadSectionControllerSelectedThreadsFilter;
- (void)inboxThreadSectionController:(IGDirectInboxThreadSectionController *)arg1 didTapMoreActionsForThreadWithId:(NSString *)arg2;
- (void)inboxThreadSectionController:(IGDirectInboxThreadSectionController *)arg1 didDismissVisualMessageForThreadId:(NSString *)arg2;
- (void)inboxThreadSectionController:(IGDirectInboxThreadSectionController *)arg1 didSetThreadUnreadForThreadId:(NSString *)arg2;
- (void)inboxThreadSectionController:(IGDirectInboxThreadSectionController *)arg1 didSetThreadFlagged:(_Bool)arg2 actionSource:(NSString *)arg3 threadId:(NSString *)arg4;
- (void)inboxThreadSectionController:(IGDirectInboxThreadSectionController *)arg1 didTapCameraButton:(UIButton *)arg2 forThreadId:(NSString *)arg3 isReply:(_Bool)arg4;
- (void)inboxThreadSectionController:(IGDirectInboxThreadSectionController *)arg1 didDeleteThreadWithId:(NSString *)arg2;
- (void)inboxThreadSectionController:(IGDirectInboxThreadSectionController *)arg1 didTapMuteButtonForCell:(IGDirectInboxThreadCell *)arg2 threadId:(NSString *)arg3;
@end

