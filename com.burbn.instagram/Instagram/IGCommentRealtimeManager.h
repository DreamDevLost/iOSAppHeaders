//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGCommentRealtimeTypingIndicatorPayloadHandlerDelegate.h"
#import "IGRealtimeNewCommentPayloadHandlerDelegate.h"

@class FBTimer, IGCommentRealtimeTypingIndicatorPayloadHandler, IGFeedItem, IGRealtimeNewCommentPayloadHandler, IGUserSession, NSArray, NSString;

@interface IGCommentRealtimeManager : NSObject <IGRealtimeNewCommentPayloadHandlerDelegate, IGCommentRealtimeTypingIndicatorPayloadHandlerDelegate>
{
    IGUserSession *_userSession;
    IGFeedItem *_feedItem;
    _Bool _realtimeEventAnnouncingEnabled;
    FBTimer *_textChangeCheckTimer;
    unsigned long long _currentCommentTextLength;
    unsigned long long _previousCommentTextLength;
    _Bool _realtimeTypingEventListeningEnabled;
    _Bool _realtimeNewCommentEventListeningEnabled;
    NSArray *_realtimeSubscriptions;
    IGRealtimeNewCommentPayloadHandler *_newCommentPayloadHandler;
    IGCommentRealtimeTypingIndicatorPayloadHandler *_typingIndicatorPayloadHandler;
    id <IGCommentRealtimeManagerRealtimeTypingDelegate> _realtimeTypingDelegate;
    id <IGCommentRealtimeManagerRealtimeLoadMoreCommentsDelegate> _realtimeLoadMoreCommentsDelegate;
}

@property(nonatomic) __weak id <IGCommentRealtimeManagerRealtimeLoadMoreCommentsDelegate> realtimeLoadMoreCommentsDelegate; // @synthesize realtimeLoadMoreCommentsDelegate=_realtimeLoadMoreCommentsDelegate;
@property(nonatomic) __weak id <IGCommentRealtimeManagerRealtimeTypingDelegate> realtimeTypingDelegate; // @synthesize realtimeTypingDelegate=_realtimeTypingDelegate;
- (void).cxx_destruct;
- (void)commentRealtimeTypingIndicatorPayloadHandlerDidNeedShowAndHideTypingIndicator:(id)arg1;
- (void)realtimeNewCommentPayloadHandler:(id)arg1 didCreateNewCommentModel:(id)arg2;
- (void)setDisplayRealtimeTypingIndicator:(_Bool)arg1;
- (void)_postCommentTextUpdate;
- (void)_checkTextChange;
- (void)updateCommentText:(id)arg1;
- (void)cleanUp;
- (id)initWithUserSession:(id)arg1 feedItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
