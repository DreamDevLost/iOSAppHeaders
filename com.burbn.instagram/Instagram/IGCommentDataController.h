//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGCommentOffenseDetector, IGUser, IGUserSession, NSMutableDictionary, NSString;

@interface IGCommentDataController : NSObject <IGUserSessionObject>
{
    NSMutableDictionary *_queue;
    id <IGAPIClient> _networker;
    IGUser *_user;
    IGCommentOffenseDetector *_commentOffenseDetector;
    IGUserSession *_userSession;
}

@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGCommentOffenseDetector *commentOffenseDetector; // @synthesize commentOffenseDetector=_commentOffenseDetector;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
- (void).cxx_destruct;
- (void)_logCommentPostingFailure:(id)arg1 error:(id)arg2 feedItemPK:(id)arg3 commentModel:(id)arg4 containerModule:(id)arg5;
- (void)_removeComment:(id)arg1 feedItemPK:(id)arg2;
- (void)_startCommentPostingRequest:(id)arg1 replyToComment:(id)arg2 parentCommentPK:(id)arg3 feedItem:(id)arg4 moduleName:(id)arg5 successHandler:(CDUnknownBlockType)arg6 failureHandler:(CDUnknownBlockType)arg7;
- (_Bool)_isValidCommentForPosting:(id)arg1 feedItem:(id)arg2;
- (void)postPendingCommentWithIdempotenceToken:(id)arg1;
- (void)postAllPendingComments;
- (_Bool)haltPostingComment:(id)arg1 feedItemPK:(id)arg2 moduleName:(id)arg3;
- (void)postComment:(id)arg1 replyToComment:(id)arg2 parentCommentPK:(id)arg3 forfeedItemWithPK:(id)arg4 moduleName:(id)arg5 successBlock:(CDUnknownBlockType)arg6;
- (id)postCommentWithText:(id)arg1 replyToComment:(id)arg2 parentCommentPK:(id)arg3 feedItemPK:(id)arg4 moduleName:(id)arg5 commentWellbeingConfig:(id)arg6 willPostDelayedCommentBlock:(CDUnknownBlockType)arg7 successBlock:(CDUnknownBlockType)arg8;
- (id)initWithNetworker:(id)arg1 userSession:(id)arg2 commentOffenseDetector:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
