//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSearchLocalSuggesting.h"

@class IGFeedItem, NSString;

@interface IGSearchUserLocalSuggestionsProvider : NSObject <IGSearchLocalSuggesting>
{
    long long _searchSet;
    long long _searchScope;
    IGFeedItem *_feedItem;
}

@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(nonatomic) long long searchScope; // @synthesize searchScope=_searchScope;
@property(nonatomic) long long searchSet; // @synthesize searchSet=_searchSet;
- (void).cxx_destruct;
- (id)localSuggestionsForQueryString:(id)arg1 numRequested:(long long)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
