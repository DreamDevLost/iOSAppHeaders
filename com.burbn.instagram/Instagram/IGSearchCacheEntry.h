//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSOrderedSet, NSString;

@interface IGSearchCacheEntry : NSObject
{
    NSString *_queryString;
    NSDictionary *_additionalParams;
    NSOrderedSet *_suggestions;
    unsigned long long _state;
    NSString *_rankToken;
    NSOrderedSet *_localSuggestions;
    NSDictionary *_analyticsInfo;
}

@property(readonly, copy, nonatomic) NSDictionary *analyticsInfo; // @synthesize analyticsInfo=_analyticsInfo;
@property(copy, nonatomic) NSOrderedSet *localSuggestions; // @synthesize localSuggestions=_localSuggestions;
@property(readonly, copy, nonatomic) NSString *rankToken; // @synthesize rankToken=_rankToken;
@property unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSOrderedSet *suggestions; // @synthesize suggestions=_suggestions;
@property(readonly, copy, nonatomic) NSDictionary *additionalParams; // @synthesize additionalParams=_additionalParams;
@property(readonly, copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void).cxx_destruct;
- (void)updateWithRankToken:(id)arg1 analyticsInfo:(id)arg2 additionalParameters:(id)arg3;
- (void)reset;
- (_Bool)isEqualToQueryString:(id)arg1 additionalParams:(id)arg2;
- (id)initWithQueryString:(id)arg1 additionalParams:(id)arg2;

@end
