//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGCoWatchPlaybackControllerProtocol.h"
#import "UICollectionViewDataSource.h"

@class IGFeedItemVideoCell, IGFeedVideoCellManager, IGUserSession, NSString, UICollectionView;

@interface IGCoWatchFeedVideoController : NSObject <UICollectionViewDataSource, IGCoWatchPlaybackControllerProtocol>
{
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    IGFeedItemVideoCell *_videoCell;
    IGFeedVideoCellManager *_videoCellManager;
    id <IGCoWatchableMedia> _media;
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)_playVideo;
- (void)_setupVideoCellManager;
- (void)_setupCollectionView;
- (id)contentView;
- (void)playMedia:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

