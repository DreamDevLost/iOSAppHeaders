//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface IGProfilePerformanceLogger : NSObject
{
    NSNumber *_currentMarker;
}

+ (id)sharedLogger;
- (void).cxx_destruct;
- (void)markPointMediaDidEndLoading;
- (void)markPointDataDidEndLoadingWasCached:(_Bool)arg1;
- (void)markPointDataDidStartLoading;
- (void)annotateIsSelfProfile;
- (void)_tryMarkerEndWithActionId:(short)arg1;
- (void)markerEndWithNetworkFailure;
- (void)markerEndWithExitNavigation:(id)arg1;
- (void)markerStartWithEntryPoint:(id)arg1;
- (id)_initPrivate;

@end

