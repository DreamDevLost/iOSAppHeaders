//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGVideoPlayerIGTVIndicatorOverlayDelegate.h"
#import "IGVideoPlayerIGTVPreviewOverlayDelegate.h"
#import "IGVideoPlayerTagIndicatorOverlayDelegate.h"

@class IGVideoPlayerAudioIndicatorOverlay, IGVideoPlayerCaptionOverlay, IGVideoPlayerIGTVIndicatorOverlay, IGVideoPlayerIGTVPreviewOverlay, IGVideoPlayerOverlayController, IGVideoPlayerPlayButtonOverlay, IGVideoPlayerTagIndicatorOverlay, IGVideoPlayerVideoIndicatorOverlay, NSString;

@interface IGFeedVideoOverlayAdapter : NSObject <IGVideoPlayerIGTVIndicatorOverlayDelegate, IGVideoPlayerIGTVPreviewOverlayDelegate, IGVideoPlayerTagIndicatorOverlayDelegate>
{
    IGVideoPlayerOverlayController *_overlayController;
    id <IGFeedVideoOverlayAdapterDelegate> _delegate;
    IGVideoPlayerAudioIndicatorOverlay *_audioIndicatorOverlay;
    IGVideoPlayerTagIndicatorOverlay *_tagIndicatorOverlay;
    IGVideoPlayerIGTVIndicatorOverlay *_igtvIndicatorOverlay;
    IGVideoPlayerIGTVPreviewOverlay *_igtvPreviewOverlay;
    IGVideoPlayerCaptionOverlay *_captionOverlay;
    IGVideoPlayerPlayButtonOverlay *_playButtonOverlay;
    IGVideoPlayerVideoIndicatorOverlay *_videoIndicatorOverlay;
}

@property(retain, nonatomic) IGVideoPlayerVideoIndicatorOverlay *videoIndicatorOverlay; // @synthesize videoIndicatorOverlay=_videoIndicatorOverlay;
@property(retain, nonatomic) IGVideoPlayerPlayButtonOverlay *playButtonOverlay; // @synthesize playButtonOverlay=_playButtonOverlay;
@property(retain, nonatomic) IGVideoPlayerCaptionOverlay *captionOverlay; // @synthesize captionOverlay=_captionOverlay;
@property(retain, nonatomic) IGVideoPlayerIGTVPreviewOverlay *igtvPreviewOverlay; // @synthesize igtvPreviewOverlay=_igtvPreviewOverlay;
@property(retain, nonatomic) IGVideoPlayerIGTVIndicatorOverlay *igtvIndicatorOverlay; // @synthesize igtvIndicatorOverlay=_igtvIndicatorOverlay;
@property(retain, nonatomic) IGVideoPlayerTagIndicatorOverlay *tagIndicatorOverlay; // @synthesize tagIndicatorOverlay=_tagIndicatorOverlay;
@property(retain, nonatomic) IGVideoPlayerAudioIndicatorOverlay *audioIndicatorOverlay; // @synthesize audioIndicatorOverlay=_audioIndicatorOverlay;
@property(nonatomic) __weak id <IGFeedVideoOverlayAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoPlayerIGTVPreviewOverlayDidTapKeepWatchingButton:(id)arg1;
- (void)videoPlayerIGTVIndicatorOverlayDidTapIGTVIndicator:(id)arg1;
- (void)videoPlayerTagIndicatorOverlayDidTapTagIndicator:(id)arg1;
- (id)_topToolbarConfigWithOptions:(CDStruct_7071a04e)arg1;
- (id)_bottomToolbarConfigWithOptions:(CDStruct_7071a04e)arg1 tagConfiguration:(id)arg2;
- (id)_overlaysWithOptions:(CDStruct_7071a04e)arg1;
@property(readonly, nonatomic) _Bool isShowingIGTVPreviewOverlay;
- (void)expandIGTVIndicatorAnimated:(_Bool)arg1;
- (void)configureOverlaysWithOptions:(CDStruct_7071a04e)arg1 tagConfiguration:(id)arg2;
- (id)initWithOverlayController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

