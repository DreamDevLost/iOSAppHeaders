//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGDirectQuickReplyListCellDelegate.h"

@class IGDirectQuickReplyListCellViewModel, NSString;

@interface IGDirectQuickReplyListSectionController : IGListSectionController <IGDirectQuickReplyListCellDelegate>
{
    IGDirectQuickReplyListCellViewModel *_viewModel;
    id <IGDirectQuickReplyListSectionControllerDelegate> _delegate;
    id <IGDirectQuickReplyListCellSwipeActionManagerDelegate> _cellSwipeActionManagerDelegate;
}

- (void).cxx_destruct;
- (void)quickReplyListCellDidHideActionsForQuickReplyCell:(id)arg1;
- (void)quickReplyListCellDidShowActionsForQuickReplyCell:(id)arg1;
- (void)quickReplyListCellDidTapDelete:(id)arg1;
- (void)quickReplyListCellDidTapEdit:(id)arg1;
- (void)quickReplyListCellDidTap:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithDelegate:(id)arg1 cellSwipeActionManagerDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

