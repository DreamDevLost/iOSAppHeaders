//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGHScrollPreviewCellDelegate.h"

@class IGUserSession, NSNumber, NSObject<IGSuggestedEntityInfo>, NSString;

@interface IGHScrollPreviewSectionController : IGListSectionController <IGHScrollPreviewCellDelegate>
{
    IGUserSession *_userSession;
    NSObject<IGSuggestedEntityInfo> *_item;
    unsigned long long _netEgoItemType;
    _Bool _showDismissButton;
    NSNumber *_viewStateItemType;
    unsigned long long _feedPosition;
    NSString *_module;
    id <IGHScrollPreviewSectionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGHScrollPreviewSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_pushControllerForUser:(id)arg1;
- (void)didTapFollowButtonInPreviewCell:(id)arg1 withAction:(long long)arg2;
- (void)didDismissOnItem:(id)arg1;
- (void)didTapPreviewCell:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct UIEdgeInsets)inset;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 netegoItemType:(unsigned long long)arg2 showDismissButton:(_Bool)arg3 viewStateItemType:(id)arg4 feedPosition:(unsigned long long)arg5 module:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

