//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAsyncTask, IGStoryMusicTrackPage, NSArray, NSMutableArray;

@interface IGStoryMusicTrackFetchResults : NSObject
{
    IGStoryMusicTrackPage *_firstPage;
    IGStoryMusicTrackPage *_currentPage;
    NSMutableArray *_loadedMusicTracks;
    IGAsyncTask *_nextPageRequest;
    id <IGStoryMusicTrackFetchResultsDelegate> _delegate;
}

@property(readonly, copy, nonatomic) NSArray *loadedMusicTracks; // @synthesize loadedMusicTracks=_loadedMusicTracks;
@property(nonatomic) __weak id <IGStoryMusicTrackFetchResultsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didLoadNextPage:(id)arg1;
- (void)loadNextPage;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@property(readonly, nonatomic) long long count;
@property(readonly, nonatomic) _Bool hasLoadedAllData;
- (id)initWithFirstPage:(id)arg1;

@end
