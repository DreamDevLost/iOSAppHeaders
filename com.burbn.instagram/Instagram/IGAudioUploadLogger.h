//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGAudioUploadLogger : NSObject
{
    id <IGPostAnalyticsProvider> _analyticsProvider;
}

- (void).cxx_destruct;
- (void)_logFailureWithEventName:(id)arg1 error:(id)arg2;
- (void)_logEventName:(id)arg1;
- (void)logUploadFailWithError:(id)arg1;
- (void)logUploadSuccess;
- (void)logUploadAttempt;
- (id)initWithAnalyticsProvider:(id)arg1;

@end
