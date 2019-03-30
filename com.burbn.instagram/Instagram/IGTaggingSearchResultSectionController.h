//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGSearchCollectionViewCellWithFBResultDelegate.h"

@class IGSearchResultViewModel, IGUserSession, NSString;

@interface IGTaggingSearchResultSectionController : IGListSectionController <IGSearchCollectionViewCellWithFBResultDelegate>
{
    IGSearchResultViewModel *_viewModel;
    id <IGTaggingSearchResultSectionControllerDelegate> _delegate;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_logEvent:(id)arg1 userSession:(id)arg2 fbUser:(id)arg3;
- (void)didInviteFBUser;
- (id)workingRangeDelegate;
- (id)displayDelegate;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithDelegate:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
