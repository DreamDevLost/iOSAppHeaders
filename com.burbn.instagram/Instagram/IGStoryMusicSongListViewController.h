//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGGestureCoordinatingCollectionViewTouchCancellationDelegate.h"
#import "IGSoundStateListenerDelegate.h"
#import "IGStoryMusicAudioPlayerDelegate.h"
#import "IGStoryMusicBrowserNavigationBarDelegate.h"
#import "IGStoryMusicBrowserSongCellDelegate.h"
#import "IGStoryMusicTrackFetchResultsDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class CALayer, IGGestureCoordinatingCollectionView, IGSoundStateListener, IGStoryMusicAudioPlayer, IGStoryMusicBrowserLoadingScreen, IGStoryMusicBrowserNavigationBar, IGStoryMusicTrackFetchResults, IGUserSession, NSIndexPath, NSMutableOrderedSet, NSOrderedSet, NSString;

@interface IGStoryMusicSongListViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, IGGestureCoordinatingCollectionViewTouchCancellationDelegate, IGSoundStateListenerDelegate, IGStoryMusicAudioPlayerDelegate, IGStoryMusicBrowserNavigationBarDelegate, IGStoryMusicTrackFetchResultsDelegate, IGStoryMusicBrowserSongCellDelegate>
{
    IGStoryMusicBrowserNavigationBar *_navigationBar;
    CALayer *_navigationBarUnderlineSeparator;
    IGStoryMusicBrowserLoadingScreen *_loadingScreen;
    IGGestureCoordinatingCollectionView *_collectionView;
    IGStoryMusicTrackFetchResults *_musicTrackFetchResults;
    NSMutableOrderedSet *_selectedTracks;
    IGUserSession *_userSession;
    IGSoundStateListener *_soundStateListener;
    IGStoryMusicAudioPlayer *_musicAudioPlayer;
    NSIndexPath *_playingIndexPath;
    _Bool _navigationBarHidden;
    _Bool _loading;
    id <IGStoryMusicSongListViewControllerDelegate> _delegate;
    double _bottomInset;
    unsigned long long _selectionStyle;
    unsigned long long _uploadStep;
    NSString *_category;
    NSString *_subcategory;
}

@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSString *subcategory; // @synthesize subcategory=_subcategory;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) unsigned long long uploadStep; // @synthesize uploadStep=_uploadStep;
@property(nonatomic) unsigned long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(readonly, nonatomic) IGStoryMusicBrowserNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) __weak id <IGStoryMusicSongListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateSelectionStateForVisibleCells;
- (void)deselectTrack:(id)arg1;
- (void)selectTrack:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *selectedTracks;
- (void)stopPlayingCell:(id)arg1;
- (void)musicTrackFetchResultsDidUpdateTrackCount:(id)arg1;
- (void)setLoading:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)_didTapBackButton:(id)arg1;
- (void)didTapNavigationBar:(id)arg1;
- (void)musicBrowserSongCellDidTapOnPlayPauseButton:(id)arg1;
- (void)audioPlayer:(id)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)audioPlayer:(id)arg1 didDetermineAssetPlayabilityStatus:(_Bool)arg2;
- (void)audioPlayerDidPlayToEnd:(id)arg1;
- (void)audioPlayer:(id)arg1 didUpdateStallState:(_Bool)arg2;
- (void)audioPlayer:(id)arg1 didUpdateToPlaybackTime:(double)arg2;
- (void)soundListenerDidUpdate:(id)arg1;
- (_Bool)gestureCoordinatingCollectionView:(id)arg1 touchesShouldCancelInContentView:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTracksRequest:(id)arg1 userSession:(id)arg2;
- (id)initWithTracks:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

