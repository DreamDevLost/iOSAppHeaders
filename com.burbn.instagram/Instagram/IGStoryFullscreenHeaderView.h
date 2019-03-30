//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPassthroughView.h"

#import "IGAREffectAttributionStoryViewDelegate.h"
#import "IGCoreTextLinkHandler.h"
#import "IGProfilePictureImageViewDelegate.h"
#import "IGStoryAdsOptInTextViewDelegate.h"

@class IGFollowController, IGReelOwnerPictureImageView, IGStoryBadgeView, IGStoryFullscreenHeaderTitleView, IGTapButton, NSString, NSURL, UIButton, UIImageView, UIView;

@interface IGStoryFullscreenHeaderView : IGPassthroughView <IGAREffectAttributionStoryViewDelegate, IGCoreTextLinkHandler, IGProfilePictureImageViewDelegate, IGStoryAdsOptInTextViewDelegate>
{
    UIImageView *_accessoryImageView;
    IGStoryBadgeView *_multiAuthorBadgeView;
    IGStoryFullscreenHeaderTitleView *_titleView;
    IGFollowController *_followController;
    NSURL *_appAttributionURL;
    id <IGStoryFullscreenHeaderViewDelegate> _delegate;
    IGReelOwnerPictureImageView *_ownerImageView;
    UIButton *_favoritesOnlyButton;
    UIButton *_groupStoriesButton;
    IGTapButton *_dismissButton;
    IGTapButton *_storiesBrowsingButton;
    UIView *_subtitleContentView;
}

@property(retain, nonatomic) UIView *subtitleContentView; // @synthesize subtitleContentView=_subtitleContentView;
@property(readonly, nonatomic) IGTapButton *storiesBrowsingButton; // @synthesize storiesBrowsingButton=_storiesBrowsingButton;
@property(readonly, nonatomic) IGTapButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(readonly, nonatomic) UIButton *groupStoriesButton; // @synthesize groupStoriesButton=_groupStoriesButton;
@property(readonly, nonatomic) UIButton *favoritesOnlyButton; // @synthesize favoritesOnlyButton=_favoritesOnlyButton;
@property(readonly, nonatomic) IGReelOwnerPictureImageView *ownerImageView; // @synthesize ownerImageView=_ownerImageView;
@property(nonatomic) __weak id <IGStoryFullscreenHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)storyAdsOptInTextViewDidTapKeepWatching:(id)arg1;
- (void)effectAttributionStoryView:(id)arg1 didTapAttributionWithModel:(id)arg2;
- (void)effectAttributionStoryView:(id)arg1 didTapUsername:(id)arg2;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)_styledStringForSponsors:(id)arg1;
- (id)_createSubtitleContentView:(id)arg1 userSession:(id)arg2;
- (id)storyAdsOptInTextView;
@property(nonatomic) _Bool musicAttributionViewAudioIndicatorAnimating;
@property(readonly, nonatomic) _Bool isAccessoryViewHidden;
- (void)updateStoryAdsOptInTextViewWithTimeLeft:(double)arg1;
- (double)dismissButtonTopPadding;
- (void)configureWithViewModel:(id)arg1 userSession:(id)arg2 module:(id)arg3;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (void)_didTapHeaderCTAButton:(id)arg1;
- (void)_didTapProductAttributionView:(id)arg1;
- (void)_didTapMusicAttributionView:(id)arg1;
- (void)_bottomLineAttributionViewTapped:(id)arg1;
- (void)_didTapTitleButton:(id)arg1;
- (void)_topLineButtonTapped;
- (void)_groupButtonTapped;
- (void)_favoritesButtonTapped;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

