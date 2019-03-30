//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGStoryPlayerMediaViewType.h"
#import "IGStoryStaticMediaProgressManagerDelegate.h"

@class IGStoryNetegoModel, IGStoryStaticMediaProgressManager, NSString, UIImageView, UITextView, UIView<IGStoryPlayerMediaViewType>, UIVisualEffectView;

@interface IGStoryNetegoView : UIView <IGStoryStaticMediaProgressManagerDelegate, IGStoryPlayerMediaViewType>
{
    id <IGStoryPlayerMediaViewDelegate> _playerMediaViewdelegate;
    id <IGStoryNetegoViewDelegate> _netegoViewDelegate;
    IGStoryStaticMediaProgressManager *_progressManager;
    IGStoryNetegoModel *_storyNetegoModel;
    UIView<IGStoryPlayerMediaViewType> *_mediaView;
    id <IGStoryItemType> _backgroundMediaItem;
    UIVisualEffectView *_blurView;
    UITextView *_title;
    UITextView *_message;
    UIImageView *_iconImageView;
}

- (void).cxx_destruct;
- (void)_insertBakeoffUnitBlurredBackground;
- (void)_configureBakeOffUnitContentWithNetegoCellState:(unsigned long long)arg1;
- (void)storyStaticMediaProgressManagerDidPlayToEnd:(id)arg1;
- (void)storyStaticMediaProgressManager:(id)arg1 didUpdateProgress:(double)arg2;
- (_Bool)isShowingContent;
- (_Bool)isViewFinishedLoading;
- (double)cellPlayTime;
- (double)mediaCurrentFrameTime;
- (double)mediaCurrentTime;
- (struct CGSize)mediaSize;
- (void)setAudioEnabled:(_Bool)arg1;
- (id)item;
- (void)prepareForReuse;
- (void)seekToBeginning;
- (_Bool)isPlaying;
- (void)stopWithReason:(long long)arg1;
- (void)pauseWithReason:(long long)arg1;
- (void)play;
- (void)retryLoadItem:(id)arg1;
- (void)configureWithItem:(id)arg1 delegate:(id)arg2 videoLogger:(id)arg3 videoLoggingConfig:(id)arg4 config:(id)arg5 module:(id)arg6;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 netegoViewDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
