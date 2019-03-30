//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGQPAPIRequestBuilder : NSObject
{
    _Bool _isDirectInstalled;
    _Bool _isEligibileForPush;
    NSString *_surfacesToQueries;
    double _scale;
    NSString *_vcPolicy;
    long long _version;
    NSString *_surfacesToTriggers;
    NSString *_triggerContext;
}

@property(copy, nonatomic, setter=triggerContext:) NSString *triggerContext; // @synthesize triggerContext=_triggerContext;
@property(copy, nonatomic, setter=surfacesToTriggers:) NSString *surfacesToTriggers; // @synthesize surfacesToTriggers=_surfacesToTriggers;
@property(nonatomic) _Bool isEligibileForPush; // @synthesize isEligibileForPush=_isEligibileForPush;
@property(nonatomic) _Bool isDirectInstalled; // @synthesize isDirectInstalled=_isDirectInstalled;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *vcPolicy; // @synthesize vcPolicy=_vcPolicy;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(copy, nonatomic, setter=surfacesToQueries:) NSString *surfacesToQueries; // @synthesize surfacesToQueries=_surfacesToQueries;
- (void).cxx_destruct;
- (id)createRequest;

@end
