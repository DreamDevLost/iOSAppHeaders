//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListGenericSectionController.h"

#import "IGListWorkingRangeDelegate.h"
#import "IGTVSeenStateStoreListener.h"

@class IGFeedItemTracker, IGUserSession, NSString, UIImpactFeedbackGenerator;

@interface IGTVVideoPreviewSectionController : IGListGenericSectionController <IGListWorkingRangeDelegate, IGTVSeenStateStoreListener>
{
    NSString *_analyticsModule;
    IGUserSession *_userSession;
    NSString *_impressionActionName;
    IGFeedItemTracker *_itemTracker;
    NSString *_viewerSessionId;
    NSString *_channelPk;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    _Bool _selected;
    _Bool _shouldHideUser;
    id <IGTVVideoPreviewSectionControllerDelegate> _delegate;
}

@property(nonatomic) _Bool shouldHideUser; // @synthesize shouldHideUser=_shouldHideUser;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak id <IGTVVideoPreviewSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_onFeedItemUpdated:(id)arg1;
- (void)igtvSeenStateStoreDidUpdateMediaId:(id)arg1;
- (void)listAdapter:(id)arg1 sectionControllerDidExitWorkingRange:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerWillEnterWorkingRange:(id)arg2;
- (id)_visibleCell;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)_configureHeaderForCell:(id)arg1 updateSeenDurationOnly:(_Bool)arg2;
- (void)_configureCell:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (struct UIEdgeInsets)inset;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithAnalyticsModule:(id)arg1 userSession:(id)arg2 viewerSessionId:(id)arg3 channelPk:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

