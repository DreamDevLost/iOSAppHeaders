//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGSearchNullStateFetcher, NSArray, NSDate, NSString;

@interface IGSearchNullStateStore : NSObject
{
    NSDate *_lastSyncTime;
    _Bool _needsUpdate;
    IGSearchNullStateFetcher *_searchNullStateFetcher;
    NSArray *_suggestions;
    NSArray *_sections;
    NSString *_rankToken;
}

@property(readonly, copy, nonatomic) NSString *rankToken; // @synthesize rankToken=_rankToken;
@property(readonly, copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
- (void).cxx_destruct;
- (void)clearCache;
- (_Bool)_isCacheInvalid;
- (void)prefetchSuggestionsIfNeededWithRankToken:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)hideAndRemoveSuggestion:(id)arg1;
- (id)initWithUserSession:(id)arg1 searchType:(long long)arg2;

@end

