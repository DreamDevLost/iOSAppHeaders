//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGImageUploadLogger : NSObject
{
    long long _loggingImageType;
    id <IGPostAnalyticsProvider> _analyticsProvider;
    _Bool _newLoggingEventsEnabled;
    struct CGSize _imageSize;
}

@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void).cxx_destruct;
- (void)_updateEventWithCommonExtraFields:(id)arg1;
- (void)logCancel;
- (void)logFailureWithError:(id)arg1;
- (void)logSuccess;
- (void)logAttempt;
- (id)initWithLoggingImageType:(long long)arg1 analyticsProvider:(id)arg2 newLoggingEventsEnabled:(_Bool)arg3;

@end

