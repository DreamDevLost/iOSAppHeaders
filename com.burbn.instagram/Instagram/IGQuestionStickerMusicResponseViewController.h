//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGStoryMusicAudioPlayerDelegate.h"

@class IGBouncyButton, IGQuestionAnswerStickerMusicResponse, IGQuestionStickerMusicResponseBrowserArtistButton, IGStoryMusicAudioPlayer, IGStoryMusicBrowserRoundedImageView, IGStoryViewerMusicSheetPlaybackControlsView, IGUserSession, NSString;

@interface IGQuestionStickerMusicResponseViewController : UIViewController <IGStoryMusicAudioPlayerDelegate>
{
    IGUserSession *_userSession;
    IGBouncyButton *_bouncyAlbumArtWrapper;
    IGStoryMusicBrowserRoundedImageView *_albumArtView;
    IGQuestionStickerMusicResponseBrowserArtistButton *_artistButton;
    IGStoryViewerMusicSheetPlaybackControlsView *_playbackControls;
    IGStoryMusicAudioPlayer *_audioPlayer;
    _Bool _isScrubbing;
    IGQuestionAnswerStickerMusicResponse *_musicResponse;
    id <IGQuestionStickerMusicResponseViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGQuestionStickerMusicResponseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGQuestionAnswerStickerMusicResponse *musicResponse; // @synthesize musicResponse=_musicResponse;
- (void).cxx_destruct;
- (void)_didTapArtistButton:(id)arg1;
- (void)_fadeMusicVolumeToLevel:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setScrubberProgress:(double)arg1 animated:(_Bool)arg2;
- (void)_didPlayToEndOfSongPreview;
- (void)audioPlayer:(id)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)audioPlayer:(id)arg1 didDetermineAssetPlayabilityStatus:(_Bool)arg2;
- (void)audioPlayerDidPlayToEnd:(id)arg1;
- (void)audioPlayer:(id)arg1 didUpdateStallState:(_Bool)arg2;
- (void)audioPlayer:(id)arg1 didUpdateToPlaybackTime:(double)arg2;
- (void)_didScrub:(id)arg1;
- (void)_didEndScrubbing:(id)arg1;
- (void)_didBeginScrubbing:(id)arg1;
- (void)_didTapPlayPauseButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithQuestionStickerMusicResponse:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

