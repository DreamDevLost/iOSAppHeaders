//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGActivatorHomeCellDelegate.h"
#import "IGListDiffable.h"
#import "IGListDisplayDelegate.h"

@class IGEmptyFeedWelcomeCardDataModel, IGFacebookHelper, IGUserSession, NSString;

@interface IGFindFriendsSectionController : IGListSectionController <IGListDisplayDelegate, IGActivatorHomeCellDelegate, IGListDiffable>
{
    _Bool _shouldTakeFullContainer;
    IGUserSession *_userSession;
    IGFacebookHelper *_fbHelper;
    IGEmptyFeedWelcomeCardDataModel *_dataModel;
}

@property(readonly, nonatomic) IGEmptyFeedWelcomeCardDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(readonly, nonatomic) IGFacebookHelper *fbHelper; // @synthesize fbHelper=_fbHelper;
@property(readonly, nonatomic) _Bool shouldTakeFullContainer; // @synthesize shouldTakeFullContainer=_shouldTakeFullContainer;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (void)didTapActionButtonOnHomeActivatorCell:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)_logEventWithName:(id)arg1;
- (void)_showFindFriendsScreen;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
