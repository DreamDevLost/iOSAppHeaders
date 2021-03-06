//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListDisplayDelegate.h"
#import "IGSoundStateListenerDelegate.h"
#import "IGStoryMusicAudioPlayerDelegate.h"
#import "IGStoryMusicBrowserSongCellDelegate.h"

@class IGSoundStateListener, IGStoryMusicAudioPlayer, IGStoryMusicTrack, IGUserSession, NSString;

@interface IGStoryMusicSongSectionController : IGListSectionController <IGSoundStateListenerDelegate, IGStoryMusicAudioPlayerDelegate, IGStoryMusicBrowserSongCellDelegate, IGListDisplayDelegate>
{
    IGSoundStateListener *_soundStateListener;
    IGStoryMusicTrack *_track;
    IGStoryMusicAudioPlayer *_musicAudioPlayer;
    IGUserSession *_userSession;
    _Bool _isPlaying;
    _Bool _selected;
    id <IGStoryMusicSongSectionControllerDelegate> _delegate;
    unsigned long long _selectionStyle;
    unsigned long long _uploadStep;
    NSString *_category;
    NSString *_subcategory;
}

@property(copy, nonatomic) NSString *subcategory; // @synthesize subcategory=_subcategory;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) unsigned long long uploadStep; // @synthesize uploadStep=_uploadStep;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) unsigned long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) id <IGStoryMusicSongSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
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
- (void)musicBrowserSongCellDidTapOnPlayPauseButton:(id)arg1;
- (void)didDeselectItemAtIndex:(long long)arg1;
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

