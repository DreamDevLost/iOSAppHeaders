//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface FBMediaUploadMetricsBuilder : NSObject
{
    NSMutableDictionary *_attributes;
    unsigned int _numFailedAttempts;
    double _percentUploaded;
}

- (void).cxx_destruct;
- (id)build;
- (void)_finalizeMyCounters;
- (void)incrementNumFailedAttempts;
- (void)setPercentUploaded:(double)arg1;
- (void)setLogValues:(id)arg1;
- (void)setLogValueNumeric:(long long)arg1 forKey:(id)arg2;
- (void)setLogValue:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

