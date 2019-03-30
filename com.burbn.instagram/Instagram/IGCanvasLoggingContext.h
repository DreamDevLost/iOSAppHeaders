//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, IGFeedItemTracker, IGUserSession, NSDictionary, NSMutableSet, NSString;

@interface IGCanvasLoggingContext : NSObject
{
    IGFeedItemTracker *_feedItemTracker;
    unsigned long long _entrySource;
    IGFeedItem *_feedItem;
    IGUserSession *_userSession;
    NSString *_trackingToken;
    NSString *_canvasDocumentId;
    double _activeResignedTimeStamp;
    double _inactiveStateTimeSpent;
    double _canvasDwellStartTime;
    NSMutableSet *_canvasElementLoggers;
    NSString *_viewerSessionId;
    NSString *_traySessionId;
    _Bool _isPreview;
    NSString *_module;
}

@property(readonly, copy, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, copy, nonatomic) NSString *viewerSessionId; // @synthesize viewerSessionId=_viewerSessionId;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (id)_commonCanvasLoggingExtras;
- (id)_timeSpentLoggingExtras;
- (void)_updateInactiveStateTimeSpent;
- (void)addElementLogger:(id)arg1;
- (void)notifyCanvasCarouselScrollWithExtra:(id)arg1;
- (void)notifyCanvasExitWithExtra:(id)arg1;
- (void)notifyCanvasElementStopTimer;
- (void)notifyCanvasElementStartTimer;
- (void)notifyCanvasAppear;
- (void)notifyCanvasDidResignActive;
- (void)notifyCanvasDidBecomeActive;
- (void)notifyActionWithElement:(id)arg1 link:(id)arg2 extra:(id)arg3;
@property(readonly, copy, nonatomic) NSDictionary *commonExtras;
- (id)initWithEntrySource:(unsigned long long)arg1 feedItem:(id)arg2 feedItemTracker:(id)arg3 userSession:(id)arg4 canvasDocumentId:(id)arg5 module:(id)arg6 viewerSessionId:(id)arg7 traySessionId:(id)arg8 isPreview:(_Bool)arg9;
- (id)initWithEntrySource:(unsigned long long)arg1 feedItem:(id)arg2 feedItemTracker:(id)arg3 userSession:(id)arg4 canvasDocumentId:(id)arg5 module:(id)arg6 isPreview:(_Bool)arg7;

@end
