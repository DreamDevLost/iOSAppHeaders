//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectScrollCoordinator, IGDirectThreadListAdapterDataSource, IGListAdapter, IGUserSession;

@interface IGDirectThreadLastSeenMessageTracker : NSObject
{
    IGDirectThreadListAdapterDataSource *_dataSource;
    id <IGDirectThreadListMessageQuerying> _messageQuerier;
    IGListAdapter *_listAdapter;
    IGUserSession *_userSession;
    id <IGDirectOutgoingUpdateSending> _outgoingUpdateSender;
    IGDirectScrollCoordinator *_scrollCoordinator;
    _Bool _isTracking;
    id <IGDirectMessageProtocol> _lastSeenMessage;
}

@property(readonly, nonatomic) id <IGDirectMessageProtocol> lastSeenMessage; // @synthesize lastSeenMessage=_lastSeenMessage;
- (void).cxx_destruct;
- (void)_markThreadAsSeenForMessageId:(id)arg1;
- (_Bool)_shouldUpdateMessageMark;
- (id)_visibleObjectsInCollectionView;
- (id)_lastMessageFromOtherUser;
- (id)_lastMessageToBeSeenBasedOnMessageId;
- (void)_updateLastSeenMessageBasedOnMessageId;
- (void)updateLastSeenMessage;
- (void)stopTracking;
- (void)beginTracking;
- (id)initWithDataSource:(id)arg1 messageQuerier:(id)arg2 listAdapter:(id)arg3 userSession:(id)arg4 outgoingUpdateSender:(id)arg5 scrollCoordinator:(id)arg6;

@end

