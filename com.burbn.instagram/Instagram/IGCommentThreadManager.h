//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGCommentsManagerProtocol.h"

@class IGCommentThread, IGFeedItem, IGRapidFeedbackController, IGUserSession, NSMutableDictionary, NSString;

@interface IGCommentThreadManager : NSObject <IGCommentsManagerProtocol>
{
    NSString *_mediaIDToFetch;
    NSMutableDictionary *_commentIdempotenceTokenToReplyInfoMap;
    _Bool _permalinkEnabled;
    _Bool _supportSponsoredTracking;
    id <IGCommentsManagerDelegate> _delegate;
    IGFeedItem *_feedItem;
    unsigned long long _loadingState;
    IGCommentThread *_commentThread;
    NSString *_sortOrder;
    IGUserSession *_userSession;
    id <IGFeedItemLoggingProviderDelegate> _loggingDelegate;
    NSString *_analyticsModule;
    NSString *_targetCommentID;
    IGRapidFeedbackController *_rapidFeedbackController;
}

@property(retain, nonatomic) IGRapidFeedbackController *rapidFeedbackController; // @synthesize rapidFeedbackController=_rapidFeedbackController;
@property(readonly, copy, nonatomic) NSString *targetCommentID; // @synthesize targetCommentID=_targetCommentID;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) __weak id <IGFeedItemLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(copy, nonatomic) NSString *sortOrder; // @synthesize sortOrder=_sortOrder;
@property(readonly, nonatomic) IGCommentThread *commentThread; // @synthesize commentThread=_commentThread;
@property(nonatomic) unsigned long long loadingState; // @synthesize loadingState=_loadingState;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(nonatomic) __weak id <IGCommentsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_showRapidSurveyIfThereIsAMentionInTheCommentText:(id)arg1;
- (void)retryPostComment:(id)arg1;
- (void)_logCommentPostOnFeedItemWithCommentGroup:(id)arg1 replyToComment:(id)arg2 parentComment:(id)arg3 loggingExtraParams:(id)arg4 navigationState:(id)arg5;
- (void)postAllPendingComments;
- (_Bool)haltPostingComment:(id)arg1;
- (void)postCommentText:(id)arg1 replyToComment:(id)arg2 loggingExtraParams:(id)arg3 navigationState:(id)arg4 commentWellbeingConfig:(id)arg5;
- (void)_loadCommentsForFetchType:(long long)arg1 reloadFeedItem:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)loadMoreBelowWhenAvailable;
- (void)loadMoreAboveWhenAvailable;
- (void)loadFirstPage:(CDUnknownBlockType)arg1 reloadFeedItem:(_Bool)arg2;
- (void)tryToAddRealtimeComment:(id)arg1;
- (_Bool)isLoading;
- (id)initWithMediaID:(id)arg1 userSession:(id)arg2 loggingDelegate:(id)arg3 analyticsModule:(id)arg4 targetCommentID:(id)arg5 permalinkEnabled:(_Bool)arg6 supportSponsoredTracking:(_Bool)arg7;
- (id)initWithPost:(id)arg1 userSession:(id)arg2 loggingDelegate:(id)arg3 analyticsModule:(id)arg4 targetCommentID:(id)arg5 permalinkEnabled:(_Bool)arg6 supportSponsoredTracking:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

