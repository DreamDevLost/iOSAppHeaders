//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class NSDate, NSMutableDictionary, NSMutableSet, NSString;

@interface IGStoriesInteractionManager : NSObject <IGUserSessionObject>
{
    NSMutableDictionary *_storiesTrayPKsToSessionIDs;
    NSMutableSet *_storiesTrayPKsSeenInSession;
    NSMutableSet *_storiesTrayPKsHiddenInSession;
    NSDate *_lastTimeTopTrayOrDailyDigestViewedInSession;
    id <IGStoriesInteractionManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStoriesInteractionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)markStoriesInFeedUnitAsHidden:(id)arg1 analyticsModule:(id)arg2 hideReason:(id)arg3;
- (void)markStoriesInFeedUnitAsSeen:(id)arg1;
- (void)setTraySessionID:(id)arg1 forTrayModel:(id)arg2;
- (void)viewerWillDismissWithEntryPoint:(long long)arg1;
- (void)didViewStory:(id)arg1 item:(id)arg2 fromEntryPoint:(long long)arg3 currentUser:(id)arg4;
- (_Bool)shouldDisplayInFeedUnit:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

