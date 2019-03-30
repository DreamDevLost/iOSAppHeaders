//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedFocusCoordinator, IGFeedVideoCellManager, IGHashtagMainFeedViewController, IGSessionTracker, IGUserSession;

@interface IGHashtagMainFeedRouter : NSObject
{
    IGHashtagMainFeedViewController *_hashtagViewController;
    IGUserSession *_userSession;
    IGSessionTracker *_sessionTracker;
    IGFeedVideoCellManager *_videoCellManager;
    id <IGContextualFeedViewControllerDelegate> _contextualFeedViewControllerDelegate;
    id <IGVideoFeedViewControllerDelegate> _videoFeedViewControllerDelegate;
    IGFeedFocusCoordinator *_focusCoordinator;
}

- (void).cxx_destruct;
- (void)_routeToVideoFeedForDiscoveryMedia:(id)arg1;
- (void)_routeToContextualFeedForHashtagModel:(id)arg1 hashtagMainFeedDataStore:(id)arg2;
- (void)routeToSpotlightFeed:(id)arg1 spotlightModel:(id)arg2;
- (void)routeToDiscoveryMedia:(id)arg1 hashtagModel:(id)arg2 hashtagMainFeedDataStore:(id)arg3;
- (id)initWithHashtagViewController:(id)arg1 userSession:(id)arg2 sessionTracker:(id)arg3 videoCellManager:(id)arg4 contextualFeedViewControllerDelegate:(id)arg5 videoFeedViewControllerDelegate:(id)arg6 focusCoordinator:(id)arg7;

@end

