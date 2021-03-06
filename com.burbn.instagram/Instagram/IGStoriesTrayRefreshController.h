//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGStoryDataController, NSDate, NSString;

@interface IGStoriesTrayRefreshController : NSObject <IGUserSessionObject>
{
    _Bool _isListeningFeedVisiblityChange;
    NSDate *_lastTimeOnFeedSurface;
    _Bool _isVisitingProfileFromStoriesTray;
    IGStoryDataController *_storyDataController;
    _Bool _enableLocalResortQE;
    _Bool _enableNetworkFetchOnWarmStartQE;
    _Bool _enableNetworkFetchOnSwitchTabQE;
    double _timeIntervalForLocalResort;
    double _timeIntervalForNetworkFetch;
}

- (void).cxx_destruct;
- (void)_triggerNetworkFetch;
- (void)_triggerLocalResort;
- (void)notifyWarmStartWithTimeIntervalSinceBackground:(double)arg1 timeIntervalSinceLastFetch:(double)arg2;
- (void)notifyMainFeedDidDisappear;
- (void)notifyMainFeedDidAppear;
- (void)notifyVisitingProfileFromStoriesTray;
- (void)updateIsListeningFeedVisibilityChange:(_Bool)arg1;
- (id)initWithExperimentProvider:(id)arg1 storyDataController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

