//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCollectionViewVisibility, IGFeedVideoStateManager, UICollectionView;

@interface IGFeedVideoCellManagerVisibilityHelper : NSObject
{
    UICollectionView *_collectionView;
    IGCollectionViewVisibility *_collectionViewVisibility;
    unsigned long long _options;
    id <IGFeedVideoCellAutoplayStrategy> _autoplayStrategy;
    id <IGFeedVideoCellCurrentlyPlayableCellsActionProvider> _playableCellsTracker;
    IGFeedVideoStateManager *_videoStateManager;
}

- (void).cxx_destruct;
- (_Bool)_isAutoplayEnabled;
- (id)_arrayWithMostVisibleVideoCellFromCells:(id)arg1;
- (id)_offScreenVideosFromVisibleVideoCells:(id)arg1;
- (id)mostVisibleVideoCellFromCells:(id)arg1;
- (double)percentVisibleForVideoCell:(id)arg1;
- (_Bool)isVideoCellVisible:(id)arg1;
- (id)visibleVideoCells;
- (_Bool)isNonScrollingVideoCellAutoplayable:(id)arg1;
- (id)visibilityUpdateWithIsScrolling:(_Bool)arg1;
- (id)initWithCollectionView:(id)arg1 collectionViewVisibility:(id)arg2 options:(unsigned long long)arg3 autoplayStrategy:(id)arg4 playableCellsTracker:(id)arg5 videoStateManager:(id)arg6;

@end

