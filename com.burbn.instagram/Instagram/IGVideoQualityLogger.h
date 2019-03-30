//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGVideoQualityLogger : NSObject
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    id <IGPostAnalyticsProvider> _analyticsProvider;
}

- (void).cxx_destruct;
- (void)logUploadFailureWithError:(id)arg1;
- (void)logUploadSuccess;
- (void)logUploadAttempt;
- (void)logMeasureFailureWithError:(id)arg1;
- (void)logMeasureSuccess;
- (void)logMeasureAttempt;
- (id)initWithAnalyticsLogger:(id)arg1 analyticsProvider:(id)arg2;

@end

