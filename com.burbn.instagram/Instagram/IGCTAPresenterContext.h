//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectResponseInfo, IGFeedItem, IGFeedItemPageCellState, IGFeedItemTracker, IGMediaAndCanvasConfiguration, IGUserSession, UIViewController;

@interface IGCTAPresenterContext : NSObject
{
    IGFeedItem *_feedItem;
    IGFeedItemTracker *_feedItemTracker;
    IGFeedItemPageCellState *_pageCellState;
    IGDirectResponseInfo *_directResponseInfo;
    unsigned long long _directResponseCTAContext;
    IGMediaAndCanvasConfiguration *_mediaAndCanvasConfiguration;
    long long _mediaPosition;
    IGUserSession *_userSession;
    id <IGDirectResponseLogging> _logger;
    id <IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;
    UIViewController *_viewController;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) __weak id <IGFeedItemDirectResponseLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(readonly, nonatomic) id <IGDirectResponseLogging> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) long long mediaPosition; // @synthesize mediaPosition=_mediaPosition;
@property(readonly, nonatomic) IGMediaAndCanvasConfiguration *mediaAndCanvasConfiguration; // @synthesize mediaAndCanvasConfiguration=_mediaAndCanvasConfiguration;
@property(readonly, nonatomic) unsigned long long directResponseCTAContext; // @synthesize directResponseCTAContext=_directResponseCTAContext;
@property(readonly, nonatomic) IGDirectResponseInfo *directResponseInfo; // @synthesize directResponseInfo=_directResponseInfo;
@property(readonly, nonatomic) IGFeedItemPageCellState *pageCellState; // @synthesize pageCellState=_pageCellState;
@property(readonly, nonatomic) IGFeedItemTracker *feedItemTracker; // @synthesize feedItemTracker=_feedItemTracker;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (id)initWithFeedItem:(id)arg1 feedItemTracker:(id)arg2 mediaPosition:(long long)arg3 mediaAndCanvasConfiguration:(id)arg4 userSession:(id)arg5 pageCellState:(id)arg6 directResponseInfo:(id)arg7 directResponseCTAContext:(unsigned long long)arg8 logger:(id)arg9 loggingDelegate:(id)arg10;

@end

