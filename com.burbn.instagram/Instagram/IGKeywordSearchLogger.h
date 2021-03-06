//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGKeywordSearchModel, NSMutableOrderedSet, NSString;

@interface IGKeywordSearchLogger : NSObject
{
    IGKeywordSearchModel *_keywordSearchModel;
    NSString *_query;
    NSString *_searchSessionID;
    NSString *_searchInitializationID;
    NSString *_module;
    NSMutableOrderedSet *_seenItemModels;
}

- (void).cxx_destruct;
- (id)_keywordSearchEventWithEventName:(id)arg1;
- (void)logReportSearchResultsWithReason:(long long)arg1 response:(id)arg2;
- (void)logViewportImpressionsAndClearCache;
- (void)addSeenKeywordSearchResultItemModel:(id)arg1;
- (void)logBackPressedWithRankToken:(id)arg1;
- (void)logSearchResultClickWithResponse:(id)arg1 selectionExtras:(id)arg2;
- (void)logSearchResultsWithResponse:(id)arg1 searchTime:(double)arg2;
- (id)initWithKeywordSearchModel:(id)arg1 searchSessionID:(id)arg2 searchInitializationID:(id)arg3 query:(id)arg4 module:(id)arg5;

@end

