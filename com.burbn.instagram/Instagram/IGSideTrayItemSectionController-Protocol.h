//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGUserSession;

@protocol IGSideTrayItemSectionController
@property(readonly, nonatomic) __weak id <IGSideTrayItemSectionControllerDelegate> delegate;
- (_Bool)isBadged;
- (id)initWithUserSession:(IGUserSession *)arg1 delegate:(id <IGSideTrayItemSectionControllerDelegate>)arg2 loggingController:(id <IGSideTrayLoggingController>)arg3;
@end

