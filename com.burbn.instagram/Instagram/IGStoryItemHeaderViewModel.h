//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStoryItemHeaderViewModelType.h"

@class IGCreativeConfig, IGStoryAttributionModel, IGStoryViewerCoverItemModel, IGUser, NSArray, NSAttributedString, NSString;

@interface IGStoryItemHeaderViewModel : NSObject <IGStoryItemHeaderViewModelType>
{
    _Bool _displayStoryBadgeView;
    _Bool _enableTapOnOwnerImage;
    _Bool _enableTapOnTopLine;
    _Bool _displayTopLineVerifiedBadge;
    _Bool _displayBottomLineVerifiedBadge;
    _Bool _showEmptyStoryBadge;
    _Bool _showFavoritesOnlyButton;
    _Bool _showFollowingButton;
    _Bool _hideHeaderAvatar;
    _Bool _isStoryAdsLongVideo;
    _Bool _isStoryAdsOptInExpanded;
    _Bool _showStoriesBrowsingButton;
    _Bool _showGroupStoriesButton;
    id <IGReelOwnerType> _owner;
    IGUser *_user;
    NSString *_topLineText;
    NSAttributedString *_attributedTopLineText;
    NSString *_bottomLineText;
    NSString *_timeText;
    NSString *_timeAccessibilityText;
    NSArray *_brandedContentSponsors;
    IGStoryAttributionModel *_attributionModel;
    IGStoryViewerCoverItemModel *_reelCoverModel;
    IGCreativeConfig *_creativeConfig;
    double _videoDuration;
    unsigned long long _bottomLineType;
    NSString *_sponsoredText;
    NSString *_ctaText;
    NSArray *_tapModels;
    long long _storyCarouselRenderingType;
    unsigned long long _numberOfStoryItems;
    NSString *_expandedTitleText;
}

@property(readonly, nonatomic) _Bool showGroupStoriesButton; // @synthesize showGroupStoriesButton=_showGroupStoriesButton;
@property(readonly, copy, nonatomic) NSString *expandedTitleText; // @synthesize expandedTitleText=_expandedTitleText;
@property(readonly, nonatomic) _Bool showStoriesBrowsingButton; // @synthesize showStoriesBrowsingButton=_showStoriesBrowsingButton;
@property(readonly, nonatomic) _Bool isStoryAdsOptInExpanded; // @synthesize isStoryAdsOptInExpanded=_isStoryAdsOptInExpanded;
@property(readonly, nonatomic) unsigned long long numberOfStoryItems; // @synthesize numberOfStoryItems=_numberOfStoryItems;
@property(readonly, nonatomic) long long storyCarouselRenderingType; // @synthesize storyCarouselRenderingType=_storyCarouselRenderingType;
@property(readonly, nonatomic) _Bool isStoryAdsLongVideo; // @synthesize isStoryAdsLongVideo=_isStoryAdsLongVideo;
@property(readonly, nonatomic) NSArray *tapModels; // @synthesize tapModels=_tapModels;
@property(readonly, copy, nonatomic) NSString *ctaText; // @synthesize ctaText=_ctaText;
@property(readonly, copy, nonatomic) NSString *sponsoredText; // @synthesize sponsoredText=_sponsoredText;
@property(readonly, nonatomic) unsigned long long bottomLineType; // @synthesize bottomLineType=_bottomLineType;
@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) IGCreativeConfig *creativeConfig; // @synthesize creativeConfig=_creativeConfig;
@property(readonly, nonatomic) _Bool hideHeaderAvatar; // @synthesize hideHeaderAvatar=_hideHeaderAvatar;
@property(readonly, nonatomic) IGStoryViewerCoverItemModel *reelCoverModel; // @synthesize reelCoverModel=_reelCoverModel;
@property(readonly, nonatomic) IGStoryAttributionModel *attributionModel; // @synthesize attributionModel=_attributionModel;
@property(readonly, nonatomic) _Bool showFollowingButton; // @synthesize showFollowingButton=_showFollowingButton;
@property(readonly, nonatomic) _Bool showFavoritesOnlyButton; // @synthesize showFavoritesOnlyButton=_showFavoritesOnlyButton;
@property(readonly, nonatomic) _Bool showEmptyStoryBadge; // @synthesize showEmptyStoryBadge=_showEmptyStoryBadge;
@property(readonly, copy, nonatomic) NSArray *brandedContentSponsors; // @synthesize brandedContentSponsors=_brandedContentSponsors;
@property(readonly, copy, nonatomic) NSString *timeAccessibilityText; // @synthesize timeAccessibilityText=_timeAccessibilityText;
@property(readonly, copy, nonatomic) NSString *timeText; // @synthesize timeText=_timeText;
@property(readonly, nonatomic) _Bool displayBottomLineVerifiedBadge; // @synthesize displayBottomLineVerifiedBadge=_displayBottomLineVerifiedBadge;
@property(readonly, copy, nonatomic) NSString *bottomLineText; // @synthesize bottomLineText=_bottomLineText;
@property(readonly, nonatomic) _Bool displayTopLineVerifiedBadge; // @synthesize displayTopLineVerifiedBadge=_displayTopLineVerifiedBadge;
@property(readonly, nonatomic) _Bool enableTapOnTopLine; // @synthesize enableTapOnTopLine=_enableTapOnTopLine;
@property(readonly, copy, nonatomic) NSAttributedString *attributedTopLineText; // @synthesize attributedTopLineText=_attributedTopLineText;
@property(readonly, copy, nonatomic) NSString *topLineText; // @synthesize topLineText=_topLineText;
@property(readonly, nonatomic) _Bool enableTapOnOwnerImage; // @synthesize enableTapOnOwnerImage=_enableTapOnOwnerImage;
@property(readonly, nonatomic) _Bool displayStoryBadgeView; // @synthesize displayStoryBadgeView=_displayStoryBadgeView;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) id <IGReelOwnerType> owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (id)initWithCurrentItem:(id)arg1 reelOwner:(id)arg2 displayStoryBadgeView:(_Bool)arg3 socialContextText:(id)arg4 isNux:(_Bool)arg5 supportsVerifiedBadge:(_Bool)arg6 canTapOnReelOwner:(_Bool)arg7 canTapOnCurrentItemUser:(_Bool)arg8 sponsoredAdTitle:(id)arg9 dateFormat:(long long)arg10 showEmptyStoryBadge:(_Bool)arg11 showFavoritesOnlyButton:(_Bool)arg12 showFollowingButton:(_Bool)arg13 isCurrentUser:(_Bool)arg14 topLineText:(id)arg15 reelCoverModel:(id)arg16 bottomLineText:(id)arg17 bottomLineType:(unsigned long long)arg18 hideHeaderAvatar:(_Bool)arg19 isStoryAdsLongVideo:(_Bool)arg20 storyCarouselRenderingType:(long long)arg21 isStoryAdsOptInExpanded:(_Bool)arg22 numberOfStoryItems:(unsigned long long)arg23 creativeConfig:(id)arg24 showStoriesBrowsingButton:(_Bool)arg25 attributionModel:(id)arg26 expandedTitleText:(id)arg27 showGroupStoriesButton:(_Bool)arg28;

@end
