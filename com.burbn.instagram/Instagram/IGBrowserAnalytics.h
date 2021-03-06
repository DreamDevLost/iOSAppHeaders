//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGBrowserFunnelLogger, NSDate, NSMutableDictionary, NSNumber, NSString, NSURL;

@interface IGBrowserAnalytics : NSObject
{
    _Bool _hasInitialPageLoadFinished;
    _Bool _hasNavigatedAwayFromInitialPage;
    _Bool _isFromResumedSession;
    _Bool _isLoadingPage;
    _Bool _isWaitingForPageLoadingUpdate;
    _Bool _isWaitingForPageToBeInteractable;
    _Bool _isPageClosed;
    NSString *_initialErrorDomain;
    long long _initialErrorCode;
    long long _statusCode;
    IGBrowserFunnelLogger *_funnelLogger;
    NSURL *_initialPageURL;
    NSDate *_initialPageLoadFinished;
    NSDate *_initialPageViewFinished;
    NSDate *_initialPageFullyLoaded;
    NSDate *_initialPageTimeToInteraction;
    NSNumber *_sslPrimaryError;
    NSDate *_webViewStarted;
    NSDate *_webViewFinished;
    NSDate *_becameInactive;
    double _inactiveStateTime;
    long long _interactionCount;
    NSMutableDictionary *_profileUserInteraction;
    unsigned long long _dismissMethod;
}

@property(readonly, nonatomic) unsigned long long dismissMethod; // @synthesize dismissMethod=_dismissMethod;
@property(readonly, nonatomic) NSMutableDictionary *profileUserInteraction; // @synthesize profileUserInteraction=_profileUserInteraction;
@property(readonly, nonatomic) long long interactionCount; // @synthesize interactionCount=_interactionCount;
@property(readonly, nonatomic) double inactiveStateTime; // @synthesize inactiveStateTime=_inactiveStateTime;
@property(readonly, nonatomic) NSDate *becameInactive; // @synthesize becameInactive=_becameInactive;
@property(readonly, nonatomic) NSDate *webViewFinished; // @synthesize webViewFinished=_webViewFinished;
@property(readonly, nonatomic) NSDate *webViewStarted; // @synthesize webViewStarted=_webViewStarted;
@property(readonly, nonatomic) NSNumber *sslPrimaryError; // @synthesize sslPrimaryError=_sslPrimaryError;
@property(readonly, nonatomic) NSDate *initialPageTimeToInteraction; // @synthesize initialPageTimeToInteraction=_initialPageTimeToInteraction;
@property(readonly, nonatomic) NSDate *initialPageFullyLoaded; // @synthesize initialPageFullyLoaded=_initialPageFullyLoaded;
@property(readonly, nonatomic) NSDate *initialPageViewFinished; // @synthesize initialPageViewFinished=_initialPageViewFinished;
@property(readonly, nonatomic) NSDate *initialPageLoadFinished; // @synthesize initialPageLoadFinished=_initialPageLoadFinished;
@property(readonly, nonatomic) NSURL *initialPageURL; // @synthesize initialPageURL=_initialPageURL;
- (void).cxx_destruct;
- (double)_webViewTimeExcludeFromInactiveStateTime;
- (void)recordPossibleDismissMethod:(unsigned long long)arg1;
- (void)debugLogAnalytics;
- (void)recordDidFailNavigationRequest:(id)arg1 error:(id)arg2;
- (void)restartLoggingForRelaunchedWebView;
- (void)recordStatusCode:(long long)arg1;
- (void)recordProfileUserInteractionWithSource:(unsigned long long)arg1;
- (void)recordFirstScroll;
- (void)recordUserInteraction;
- (void)recordTimeToInteraction:(id)arg1;
- (void)updateWebViewTrackingWithEvent:(unsigned long long)arg1 date:(id)arg2;
- (id)dictionaryRepresentation;
- (id)initWithInitialPageURL:(id)arg1;

@end

