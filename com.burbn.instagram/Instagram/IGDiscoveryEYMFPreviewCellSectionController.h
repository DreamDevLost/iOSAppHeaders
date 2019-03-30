//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGHScrollPreviewCellDelegate.h"
#import "IGListDisplayDelegate.h"
#import "IGListWorkingRangeDelegate.h"

@class IGUserSession, NSObject<IGSuggestedEntityInfo>, NSString;

@interface IGDiscoveryEYMFPreviewCellSectionController : IGListSectionController <IGHScrollPreviewCellDelegate, IGListWorkingRangeDelegate, IGListDisplayDelegate>
{
    IGUserSession *_userSession;
    id <IGDiscoveryEYMFSectionControllerLoggingProvider> _loggingProvider;
    NSObject<IGSuggestedEntityInfo> *_model;
    _Bool _showDismissButton;
    id <IGDiscoveryEYMFPreviewCellSectionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDiscoveryEYMFPreviewCellSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapFollowButtonInPreviewCell:(id)arg1 withAction:(long long)arg2;
- (void)didTapPreviewCell:(id)arg1;
- (void)didDismissOnItem:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerDidExitWorkingRange:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerWillEnterWorkingRange:(id)arg2;
- (struct UIEdgeInsets)inset;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 loggingProvider:(id)arg2 showDismissButton:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
