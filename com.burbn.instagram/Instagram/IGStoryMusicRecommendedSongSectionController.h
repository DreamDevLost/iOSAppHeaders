//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListDisplayDelegate.h"
#import "IGSoundStateListenerDelegate.h"
#import "IGStoryMusicAudioPlayerDelegate.h"

@class IGSoundStateListener, IGStoryMusicAudioPlayer, IGStoryMusicBrowserRecommendedSongMetadata, IGUserSession, NSString;

@interface IGStoryMusicRecommendedSongSectionController : IGListSectionController <IGSoundStateListenerDelegate, IGStoryMusicAudioPlayerDelegate, IGListDisplayDelegate>
{
    IGStoryMusicBrowserRecommendedSongMetadata *_recommendedSongMetadata;
    IGSoundStateListener *_songStateListener;
    IGStoryMusicAudioPlayer *_musicAudioPlayer;
    IGUserSession *_userSession;
    _Bool _isPlaying;
    id <IGStoryMusicRecommendedSongSectionControllerDelegate> _delegate;
    unsigned long long _uploadStep;
    NSString *_category;
    NSString *_subcategory;
}

@property(copy, nonatomic) NSString *subcategory; // @synthesize subcategory=_subcategory;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) unsigned long long uploadStep; // @synthesize uploadStep=_uploadStep;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) __weak id <IGStoryMusicRecommendedSongSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)audioPlayer:(id)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)audioPlayer:(id)arg1 didDetermineAssetPlayabilityStatus:(_Bool)arg2;
- (void)audioPlayerDidPlayToEnd:(id)arg1;
- (void)audioPlayer:(id)arg1 didUpdateStallState:(_Bool)arg2;
- (void)audioPlayer:(id)arg1 didUpdateToPlaybackTime:(double)arg2;
- (void)soundListenerDidUpdate:(id)arg1;
- (void)_didTapPlayPauseButton:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

