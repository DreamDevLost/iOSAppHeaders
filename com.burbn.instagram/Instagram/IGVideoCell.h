//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGFeedItemVideoIGTVDelegate.h"
#import "IGFeedItemVideoTagDelegate.h"
#import "IGFeedItemVideoViewAudioDelegate.h"
#import "IGFeedItemVideoViewDelegate.h"
#import "IGFeedItemVideoViewDoubleTapDelegate.h"
#import "IGFeedItemVideoViewSingleTapDelegate.h"

@class IGFeedItemVideoView, IGObjectRecyclingPotentialLogger, IGPostItem, IGZoomController, NSString;

@interface IGVideoCell : UICollectionViewCell <IGFeedItemVideoIGTVDelegate, IGFeedItemVideoTagDelegate, IGFeedItemVideoViewDelegate, IGFeedItemVideoViewAudioDelegate, IGFeedItemVideoViewDoubleTapDelegate, IGFeedItemVideoViewSingleTapDelegate>
{
    IGObjectRecyclingPotentialLogger *_recyclingLogger;
    IGFeedItemVideoView *_videoView;
    IGPostItem *_post;
    id <IGVideoCellDelegate> _delegate;
    id <IGZoomControllerZoomingDelegate> _zoomingDelegate;
    IGZoomController *_zoomController;
}

@property(retain, nonatomic) IGZoomController *zoomController; // @synthesize zoomController=_zoomController;
@property(nonatomic) __weak id <IGZoomControllerZoomingDelegate> zoomingDelegate; // @synthesize zoomingDelegate=_zoomingDelegate;
@property(nonatomic) __weak id <IGVideoCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak IGPostItem *post; // @synthesize post=_post;
@property(retain, nonatomic) IGFeedItemVideoView *videoView; // @synthesize videoView=_videoView;
- (void).cxx_destruct;
- (void)feedItemVideoTagTapped:(id)arg1;
- (void)didDoubleTapFeedItemVideoView:(id)arg1;
- (void)videoView:(id)arg1 didSingleTapWatchAndMoreButtonWithType:(unsigned long long)arg2;
- (void)didSingleTapFeedItemVideoView:(id)arg1;
- (void)feedItemVideoView:(id)arg1 didToggleAudio:(_Bool)arg2;
- (void)feedItemVideoView:(id)arg1 didFailLoadImageWithError:(id)arg2;
- (void)feedItemVideoViewDidLoadImage:(id)arg1;
- (void)feedItemVideoIGTVKeepWatchingTapped:(id)arg1;
- (void)feedItemVideoIGTVIndicatorTapped:(id)arg1;
- (void)configureWithPostItem:(id)arg1 coverImageURL:(id)arg2 videoLogger:(id)arg3 videoLoggingConfig:(id)arg4 tagConfiguration:(id)arg5 userSession:(id)arg6 options:(CDStruct_7071a04e)arg7 module:(id)arg8;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
