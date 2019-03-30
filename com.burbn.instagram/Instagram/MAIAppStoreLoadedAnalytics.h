//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary, NSError, NSString;

@interface MAIAppStoreLoadedAnalytics : FBValueObject <NSCopying, NSCoding>
{
    _Bool _didLoadSucceed;
    _Bool _isPreloadingEnabled;
    NSDictionary *_loadParameters;
    double _loadStartTime;
    double _loadEndTime;
    NSString *_iTunesIdentifier;
    NSError *_loadError;
}

@property(readonly, copy, nonatomic) NSError *loadError; // @synthesize loadError=_loadError;
@property(readonly, copy, nonatomic) NSString *iTunesIdentifier; // @synthesize iTunesIdentifier=_iTunesIdentifier;
@property(readonly, nonatomic) _Bool isPreloadingEnabled; // @synthesize isPreloadingEnabled=_isPreloadingEnabled;
@property(readonly, nonatomic) _Bool didLoadSucceed; // @synthesize didLoadSucceed=_didLoadSucceed;
@property(readonly, nonatomic) double loadEndTime; // @synthesize loadEndTime=_loadEndTime;
@property(readonly, nonatomic) double loadStartTime; // @synthesize loadStartTime=_loadStartTime;
@property(readonly, copy, nonatomic) NSDictionary *loadParameters; // @synthesize loadParameters=_loadParameters;
- (void).cxx_destruct;
- (id)initWithLoadParameters:(id)arg1 loadStartTime:(double)arg2 loadEndTime:(double)arg3 didLoadSucceed:(_Bool)arg4 isPreloadingEnabled:(_Bool)arg5 iTunesIdentifier:(id)arg6 loadError:(id)arg7;

@end
