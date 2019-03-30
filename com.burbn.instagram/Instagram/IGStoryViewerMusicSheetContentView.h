//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGStoryViewerBottomSheetIconAndLabelView, IGStoryViewerBottomSheetProfileView, IGStoryViewerMusicSheetPlaybackControlsView, IGStoryViewerMusicSheetTitleView;

@interface IGStoryViewerMusicSheetContentView : UIView
{
    IGStoryViewerBottomSheetIconAndLabelView *_thirdPartyView;
    IGStoryViewerBottomSheetIconAndLabelView *_tryItView;
    id <IGStoryViewerMusicSheetContentViewDelegate> _delegate;
    IGStoryViewerMusicSheetTitleView *_titleView;
    IGStoryViewerMusicSheetPlaybackControlsView *_playbackControlsView;
    IGStoryViewerBottomSheetProfileView *_artistView;
}

@property(readonly, nonatomic) IGStoryViewerBottomSheetProfileView *artistView; // @synthesize artistView=_artistView;
@property(readonly, nonatomic) IGStoryViewerMusicSheetPlaybackControlsView *playbackControlsView; // @synthesize playbackControlsView=_playbackControlsView;
@property(readonly, nonatomic) IGStoryViewerMusicSheetTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <IGStoryViewerMusicSheetContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapTryItButton:(id)arg1;
- (void)_didTapThirdPartyButton:(id)arg1;
- (void)_didTapArtistProfileButton:(id)arg1;
@property(nonatomic) _Bool tryItViewHidden;
@property(nonatomic) _Bool thirdPartyViewHidden;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
