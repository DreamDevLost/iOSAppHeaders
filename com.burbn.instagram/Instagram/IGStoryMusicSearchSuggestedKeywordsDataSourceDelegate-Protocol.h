//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStoryMusicSearchSuggestedKeywordsDataSource, NSArray;

@protocol IGStoryMusicSearchSuggestedKeywordsDataSourceDelegate <NSObject>
- (void)musicSearchSuggestedKeywordsDataSource:(IGStoryMusicSearchSuggestedKeywordsDataSource *)arg1 didUpdateSuggestedSearchQueries:(NSArray *)arg2;
- (void)musicSearchSuggestedKeywordsDataSource:(IGStoryMusicSearchSuggestedKeywordsDataSource *)arg1 didUpdateLoadingState:(_Bool)arg2;
@end
