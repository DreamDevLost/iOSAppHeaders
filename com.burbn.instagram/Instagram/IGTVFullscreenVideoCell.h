//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGHeartAnimatable.h"
#import "IGTVFullscreenTapControllerGestureDelegate.h"

@class IGMultilineChevronButton, IGTVDescriptionContainerView, IGTVFullscreenBaseVideoView, IGTVFullscreenLoadingView, IGTVFullscreenTapController, IGTVNextVideoPreviewView, IGTVSocialContextButtonsView, IGTVStaticLoadingView, IGTVVideoControlsView, IGTVVideoCreatorView, IGTVVideoFeedActionsBarView, IGVideoPreviewThumbnailView, NSString, UIButton, UIView;

@interface IGTVFullscreenVideoCell : UICollectionViewCell <IGTVFullscreenTapControllerGestureDelegate, IGHeartAnimatable>
{
    IGTVFullscreenBaseVideoView *_baseView;
    _Bool _descriptionShown;
    _Bool _chromeAdjustedForScrubbing;
    _Bool _quickTapControlsEnabled;
    _Bool _previewViewShown;
    IGMultilineChevronButton *_titleButton;
    IGTVVideoCreatorView *_creatorView;
    IGTVDescriptionContainerView *_descriptionView;
    IGVideoPreviewThumbnailView *_thumbnailView;
    IGTVSocialContextButtonsView *_socialContextView;
    IGTVVideoControlsView *_controlsView;
    IGTVVideoFeedActionsBarView *_actionsBarView;
    IGTVNextVideoPreviewView *_previewView;
}

@property(nonatomic) _Bool previewViewShown; // @synthesize previewViewShown=_previewViewShown;
@property(nonatomic) _Bool quickTapControlsEnabled; // @synthesize quickTapControlsEnabled=_quickTapControlsEnabled;
@property(nonatomic) _Bool chromeAdjustedForScrubbing; // @synthesize chromeAdjustedForScrubbing=_chromeAdjustedForScrubbing;
@property(nonatomic) _Bool descriptionShown; // @synthesize descriptionShown=_descriptionShown;
@property(readonly, nonatomic) IGTVNextVideoPreviewView *previewView; // @synthesize previewView=_previewView;
@property(readonly, nonatomic) IGTVVideoFeedActionsBarView *actionsBarView; // @synthesize actionsBarView=_actionsBarView;
@property(readonly, nonatomic) IGTVVideoControlsView *controlsView; // @synthesize controlsView=_controlsView;
@property(readonly, nonatomic) IGTVSocialContextButtonsView *socialContextView; // @synthesize socialContextView=_socialContextView;
@property(readonly, nonatomic) IGVideoPreviewThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(readonly, nonatomic) IGTVDescriptionContainerView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(readonly, nonatomic) IGTVVideoCreatorView *creatorView; // @synthesize creatorView=_creatorView;
@property(readonly, nonatomic) IGMultilineChevronButton *titleButton; // @synthesize titleButton=_titleButton;
- (void).cxx_destruct;
- (_Bool)fullscreenQuickSkipControllerCanQuickSkip:(id)arg1;
- (_Bool)fullscreenQuickSkipController:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)contentViewForHeartAnimation;
- (void)setPreviewViewShown:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateSubchromeAlpha;
- (void)setChromeAlpha:(double)arg1;
- (void)layoutSubviews;
- (void)blurVideoContents:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureWithVideoView:(id)arg1 aspectRatio:(struct CGSize)arg2 title:(id)arg3 description:(id)arg4;
- (void)setCornerRadiusPresentationProgress:(double)arg1;
- (void)setMinimized:(_Bool)arg1;
@property(readonly, nonatomic) IGTVFullscreenTapController *quickSkipController;
@property(readonly, nonatomic) UIButton *minimizeButton;
@property(readonly, nonatomic) UIButton *closeButton;
@property(readonly, nonatomic) UIButton *blockedButton;
@property(readonly, nonatomic) UIView *dimmingView;
@property(readonly, nonatomic) IGTVFullscreenLoadingView *loadingView;
@property(readonly, nonatomic) IGTVStaticLoadingView *staticView;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
