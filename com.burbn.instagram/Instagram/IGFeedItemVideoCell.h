//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedItemMediaCell.h"

#import "IGActivationChainingControlDisplayable.h"
#import "IGFeedItemVideoViewDelegate.h"
#import "IGFeedItemVideoViewDoubleTapDelegate.h"
#import "IGFeedItemVideoViewSingleTapDelegate.h"
#import "IGFeedMediaViewDelegate.h"
#import "IGFeedVideoCell.h"
#import "IGSaveToCollectionsUpsellable.h"

@class IGActivationChainingControl, IGFeedItem, IGFeedItemVideoView, IGObjectRecyclingPotentialLogger, IGZoomController, NSString;

@interface IGFeedItemVideoCell : IGFeedItemMediaCell <IGFeedVideoCell, IGFeedItemVideoViewDelegate, IGFeedItemVideoViewDoubleTapDelegate, IGFeedItemVideoViewSingleTapDelegate, IGFeedMediaViewDelegate, IGSaveToCollectionsUpsellable, IGActivationChainingControlDisplayable>
{
    IGObjectRecyclingPotentialLogger *_recyclingLogger;
    _Bool _hasShownSaveToCollectionUpsell;
    _Bool _videoStitchingEnabled;
    IGFeedItem *_post;
    double _percentVisible;
    IGActivationChainingControl *_chainingControl;
    id <IGFeedMediaViewDelegate> _mediaViewDelegate;
    id <IGFeedVideoCellInteractionDelegate> _interactionDelegate;
    id <IGFeedVideoCellPlayerDelegate> _playerDelegate;
    id <IGZoomControllerZoomingDelegate> _zoomingDelegate;
    id <IGFeedItemVideoCellDelegate> _videoCellDelegate;
    double _feedPercentVisible;
    IGFeedItemVideoView *_videoView;
    IGZoomController *_zoomController;
}

@property(nonatomic) _Bool videoStitchingEnabled; // @synthesize videoStitchingEnabled=_videoStitchingEnabled;
@property(retain, nonatomic) IGZoomController *zoomController; // @synthesize zoomController=_zoomController;
@property(readonly, nonatomic) IGFeedItemVideoView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) double feedPercentVisible; // @synthesize feedPercentVisible=_feedPercentVisible;
@property(nonatomic) __weak id <IGFeedItemVideoCellDelegate> videoCellDelegate; // @synthesize videoCellDelegate=_videoCellDelegate;
@property(nonatomic) __weak id <IGZoomControllerZoomingDelegate> zoomingDelegate; // @synthesize zoomingDelegate=_zoomingDelegate;
@property(nonatomic) __weak id <IGFeedVideoCellPlayerDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
@property(nonatomic) __weak id <IGFeedVideoCellInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(nonatomic) __weak id <IGFeedMediaViewDelegate> mediaViewDelegate; // @synthesize mediaViewDelegate=_mediaViewDelegate;
@property(retain, nonatomic) IGActivationChainingControl *chainingControl; // @synthesize chainingControl=_chainingControl;
@property(nonatomic) _Bool hasShownSaveToCollectionUpsell; // @synthesize hasShownSaveToCollectionUpsell=_hasShownSaveToCollectionUpsell;
@property(readonly, nonatomic) double percentVisible; // @synthesize percentVisible=_percentVisible;
- (id)post;
- (void).cxx_destruct;
- (void)feedMediaViewDidBeginTouch;
- (void)feedMediaViewDidTapSaveToCollections;
- (void)didDoubleTapFeedItemVideoView:(id)arg1;
- (void)videoView:(id)arg1 didSingleTapWatchAndMoreButtonWithType:(unsigned long long)arg2;
- (void)didSingleTapFeedItemVideoView:(id)arg1;
- (void)feedItemVideoView:(id)arg1 didFailLoadImageWithError:(id)arg2;
- (void)feedItemVideoViewDidLoadImage:(id)arg1;
- (void)handleDidRequestPlayback;
- (void)handleDidEndPlaying;
- (void)handleDidPause;
- (void)handleDidBeginPlaying;
- (_Bool)supportsMediaCollections;
- (_Bool)supportsWatchAndMore;
- (_Bool)supportsVideoStitching;
- (_Bool)isSponsored;
- (unsigned long long)updatePercentVisible:(double)arg1;
- (void)showSaveToCollectionUpsell;
- (void)showIGTVIndicatorIfNeededAnimated:(_Bool)arg1;
- (void)configureWithVideo:(id)arg1 coverPhoto:(id)arg2 feedItem:(id)arg3 logger:(id)arg4 loggingConfig:(id)arg5 tagConfiguration:(id)arg6 userSession:(id)arg7 options:(CDStruct_7071a04e)arg8 feedTheme:(id)arg9;
- (id)defaultAccessibilityElements;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

