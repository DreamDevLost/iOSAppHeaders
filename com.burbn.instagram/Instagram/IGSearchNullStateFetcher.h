//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession, NSMutableArray;

@interface IGSearchNullStateFetcher : NSObject
{
    IGUserSession *_userSession;
    id <IGAPIClient> _networker;
    long long _searchType;
    NSMutableArray *_successHandlers;
    NSMutableArray *_failureHandlers;
}

- (void).cxx_destruct;
- (_Bool)_isSearching;
- (id)_cachePolicy;
- (void)_executeFailureHandlersWithResponse:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)_executeSuccessHandlersWithSuggestions:(id)arg1 sections:(id)arg2 rankToken:(id)arg3;
- (void)_handleSuccessWithResponse:(id)arg1;
- (id)_parseObjectFromDict:(id)arg1;
- (void)fetchItemsWithRankToken:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (id)_requestForRankToken:(id)arg1;
- (id)initWithUserSession:(id)arg1 searchType:(long long)arg2;

@end

