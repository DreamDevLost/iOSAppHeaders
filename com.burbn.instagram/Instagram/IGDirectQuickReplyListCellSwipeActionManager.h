//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectQuickReplyListCellSwipeActionManagerDelegate.h"

@class IGDirectQuickReplyListCell, NSString;

@interface IGDirectQuickReplyListCellSwipeActionManager : NSObject <IGDirectQuickReplyListCellSwipeActionManagerDelegate>
{
    IGDirectQuickReplyListCell *_openCell;
}

- (void).cxx_destruct;
- (void)quickReplyListCellDidHideActionsForCell:(id)arg1;
- (void)quickReplyListCellDidShowActionsForCell:(id)arg1;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

