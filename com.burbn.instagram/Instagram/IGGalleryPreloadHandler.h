//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGGalleryLayout, IGGalleryPageCalculator, IGListAdapter, IGMediaGalleryController, IGUserSession, UICollectionView;

@interface IGGalleryPreloadHandler : NSObject
{
    IGListAdapter *_adapter;
    UICollectionView *_collectionView;
    IGMediaGalleryController *_galleryController;
    IGGalleryLayout *_layout;
    IGGalleryPageCalculator *_pageCalculator;
    IGUserSession *_session;
    unsigned long long _workingRange;
    _Bool _suspended;
    struct CGPoint _contentOffset;
}

@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGGalleryPageCalculator *pageCalculator;
- (void)_expandShellsForOffsetIfAppropriate:(struct CGPoint)arg1;
- (id)initWithCollectionView:(id)arg1 galleryController:(id)arg2 layout:(id)arg3 listAdapter:(id)arg4 session:(id)arg5 workingRange:(unsigned long long)arg6;

@end

