//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGFollowListCellDelegate.h"
#import "IGHashtagFollowStatusUpdateListener.h"

@class IGFollowListItemViewModel, IGUserSession, NSString;

@interface IGFollowListSectionController : IGListSectionController <IGFollowListCellDelegate, IGHashtagFollowStatusUpdateListener>
{
    id <IGFollowListSectionControllerLoggingDelegate> _loggingDelegate;
    IGFollowListItemViewModel *_item;
    IGUserSession *_userSession;
    NSString *_analyticsModule;
}

@property(readonly, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGFollowListItemViewModel *item; // @synthesize item=_item;
@property(nonatomic) __weak id <IGFollowListSectionControllerLoggingDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
- (void).cxx_destruct;
- (void)_navigateToHashtagPage:(id)arg1;
- (void)_followOrUnfollowViewModel:(id)arg1 follow:(_Bool)arg2;
- (void)hashtagFollowStatusStoreDidUpdateFollowStatus:(long long)arg1 forHashtagWithName:(id)arg2;
- (void)didTapFollowButton:(id)arg1;
- (id)supplementaryViewSource;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 loggingDelegate:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

