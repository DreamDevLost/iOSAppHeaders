//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGStoryContentView.h"
#import "IGStoryDimmableView.h"
#import "IGStoryProfileImageContaining.h"

@class IGPostLiveView, IGStoryVideoView, IGStoryViewerTransitionOverlay, NSString;

@interface IGPostLiveFullscreenCell : UICollectionViewCell <IGStoryProfileImageContaining, IGStoryDimmableView, IGStoryContentView>
{
    IGStoryViewerTransitionOverlay *_dimmableView;
    IGPostLiveView *_overlayView;
    IGStoryVideoView *_mediaView;
}

@property(retain, nonatomic) IGStoryVideoView *mediaView; // @synthesize mediaView=_mediaView;
@property(readonly, nonatomic) IGPostLiveView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) IGStoryViewerTransitionOverlay *dimmableView; // @synthesize dimmableView=_dimmableView;
- (void).cxx_destruct;
- (id)contentViewForSnapshot;
- (void)setDimmingPercent:(double)arg1;
- (id)profileImageView;
- (struct CGRect)mediaViewFrame;
- (struct CGRect)overlayViewFrame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

