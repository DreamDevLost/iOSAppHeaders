//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface IGFeedGalleryKenBurnsDataSource : NSObject
{
    NSArray *_gridSections;
    NSArray *_randomizedIndexPaths;
    NSMutableArray *_filteredRandomizedIndexPaths;
    long long _nextPointer;
    _Bool _fallbackToUnfiltered;
}

- (void).cxx_destruct;
- (id)_assetAtIndexPath:(id)arg1;
- (id)nextObject;
- (id)initWithGridSections:(id)arg1;

@end
