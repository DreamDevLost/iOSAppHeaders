//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString;

@interface IGAutocompleteDataSourceStore : NSObject
{
    _Bool _shouldUpRankResults;
    NSArray *_currentResults;
    NSString *_lastQuery;
    NSMutableDictionary *_pastResults;
    CDUnknownBlockType _searchableContentBlock;
    CDUnknownBlockType _contentIDBlock;
}

@property(copy, nonatomic) CDUnknownBlockType contentIDBlock; // @synthesize contentIDBlock=_contentIDBlock;
@property(copy, nonatomic) CDUnknownBlockType searchableContentBlock; // @synthesize searchableContentBlock=_searchableContentBlock;
@property(retain, nonatomic) NSMutableDictionary *pastResults; // @synthesize pastResults=_pastResults;
@property(copy, nonatomic) NSString *lastQuery; // @synthesize lastQuery=_lastQuery;
@property(nonatomic) _Bool shouldUpRankResults; // @synthesize shouldUpRankResults=_shouldUpRankResults;
@property(retain, nonatomic) NSArray *currentResults; // @synthesize currentResults=_currentResults;
- (void).cxx_destruct;
- (_Bool)_prefixMatchesQuery:(id)arg1 forSearchableItem:(id)arg2;
- (void)clearResults;
- (void)setCurrentResults:(id)arg1 forQuery:(id)arg2;
- (id)initWithSearchableContentBlock:(CDUnknownBlockType)arg1 contentIDBlock:(CDUnknownBlockType)arg2;

@end
