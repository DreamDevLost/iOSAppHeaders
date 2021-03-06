//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStoryMusicTrackFetchResults, IGUserSession, NSMutableDictionary, NSMutableSet, NSString;

@interface IGStoryMusicSearchResultsDataSource : NSObject
{
    IGUserSession *_userSession;
    NSMutableSet *_inflightSearchQueries;
    NSMutableDictionary *_cache;
    NSMutableDictionary *_networkRequestForQuery;
    _Bool _loading;
    id <IGStoryMusicSearchResultsDataSourceDelegate> _delegate;
    NSString *_searchQuery;
    IGStoryMusicTrackFetchResults *_musicTracks;
    NSString *_searchSessionID;
    unsigned long long _uploadStep;
    NSString *_productName;
}

@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(nonatomic) unsigned long long uploadStep; // @synthesize uploadStep=_uploadStep;
@property(copy, nonatomic) NSString *searchSessionID; // @synthesize searchSessionID=_searchSessionID;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) IGStoryMusicTrackFetchResults *musicTracks; // @synthesize musicTracks=_musicTracks;
@property(copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(nonatomic) __weak id <IGStoryMusicSearchResultsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)songsThatMatchQuery:(id)arg1;
- (id)initWithUserSession:(id)arg1;

@end

