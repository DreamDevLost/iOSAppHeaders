//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCollectionViewVisibility, IGListAdapter, IGUserSession, NSMutableDictionary, NSPredicate;

@interface IGSuggestedInvitesTrackingManager : NSObject
{
    double _visibilityThreshold;
    NSMutableDictionary *_activeSessionsMap;
    IGListAdapter *_listAdapter;
    IGCollectionViewVisibility *_collectionViewVisibility;
    NSPredicate *_suggestedUsersModelPredicate;
    IGUserSession *_userSession;
    _Bool _trackingEnabled;
}

- (void).cxx_destruct;
- (void)invalidateTrackingSessions;
- (void)updateTrackingSessions;
- (void)setListAdapter:(id)arg1;
- (void)setTrackingManagerEnabled:(_Bool)arg1;
- (id)initWithUserSession:(id)arg1 visibilityThreshold:(double)arg2;

@end

