//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface IGStoryFullscreenProgressView : UIView
{
    _Bool _shouldAutoLayout;
    _Bool _shouldOptimizeCornerRounding;
    _Bool _isSnapshotOptimizingEnabled;
    unsigned long long _minNumberOfSegmentsForSnapshotOptimizing;
    _Bool _isTransitioning;
    long long _snapshotState;
    UIView *_snapshotView;
    _Bool _isOnscreen;
    unsigned long long _numberOfSegments;
    NSMutableArray *_segmentViews;
}

@property(retain, nonatomic) NSMutableArray *segmentViews; // @synthesize segmentViews=_segmentViews;
@property(nonatomic) unsigned long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
- (void).cxx_destruct;
- (_Bool)_areSegmentsVisible;
- (void)_setSnapshotState:(long long)arg1;
- (void)_updateSnapshotStateWithDidJustLayOut:(_Bool)arg1;
- (void)updateIsOnscreen:(_Bool)arg1;
- (void)updateIsTransitioning:(_Bool)arg1;
- (void)setIsSnapshotOptimizingEnabled:(_Bool)arg1 minNumberOfSegments:(unsigned long long)arg2;
- (void)setShouldOptimizeCornerRounding:(_Bool)arg1;
- (void)setNumberOfSegmentsWithAnimation:(unsigned long long)arg1;
- (void)removeSegmentAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setStyle:(long long)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setProgress:(double)arg1 forSegmentsAtIndexes:(id)arg2;
- (double)getProgressForSegmentAtIndex:(long long)arg1;
- (void)setProgress:(double)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (double)progressForSegmentAtIndex:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

