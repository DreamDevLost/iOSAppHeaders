//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGDirectRecipientListViewSectionHeaderConfiguration, IGSearchBarConfig;

@interface IGDirectRecipientListViewConfiguration : FBValueObject <NSCopying, NSCoding>
{
    _Bool _showYourStory;
    _Bool _allowReshareToStory;
    _Bool _canShowHighlights;
    _Bool _storyFavoritesEnabled;
    _Bool _isSendingVisualMedia;
    _Bool _isSharingLiveVideo;
    _Bool _sectionHeaderTopInsetIsCompact;
    _Bool _showGroups;
    _Bool _showMessageTextFieldWithSelection;
    _Bool _allowSwipeUpOnHeader;
    _Bool _allowSwipeDownOnHeader;
    _Bool _allowExternalShareServices;
    _Bool _showsFullNamesBeforeUsernames;
    _Bool _doneButtonShouldOverrideBlueTeal;
    _Bool _oneTapSendingEnabled;
    _Bool _showViewMoreButtons;
    _Bool _allowPresence;
    _Bool _useTallHeader;
    _Bool _prefersStatusBarHidden;
    _Bool _prefersNavigationBarHidden;
    _Bool _canShowSendAgainRow;
    _Bool _optimisticallyCreateThread;
    _Bool _showActionBarSection;
    _Bool _showVideoCallThread;
    _Bool _sharedStoriesEnabled;
    IGDirectRecipientListViewSectionHeaderConfiguration *_sectionHeaderConfiguration;
    long long _cancelButtonStyle;
    IGSearchBarConfig *_searchBarConfig;
    long long _dataSourceType;
    unsigned long long _sharingSurfaceType;
}

+ (id)hashtagReshareConfigurationWithShowActionBarSection:(_Bool)arg1 experimentProvider:(id)arg2;
+ (id)commentReshareConfigurationWithExperimentProvider:(id)arg1;
+ (id)videoCallReshareConfigurationWithExperimentProvider:(id)arg1;
+ (id)igtvReshareConfigurationWithExperimentProvider:(id)arg1;
+ (id)_feedReshareConfigurationWithPrefersStatusBarHidden:(_Bool)arg1 showActionBarSection:(_Bool)arg2 experimentProvider:(id)arg3;
+ (id)feedReshareConfigurationWithShowActionBarSection:(_Bool)arg1 experimentProvider:(id)arg2;
+ (id)productReshareConfigurationWithExperimentProvider:(id)arg1;
+ (id)storyReshareConfigurationWithExperimentProvider:(id)arg1;
+ (id)liveReshareConfigurationWithExperimentProvider:(id)arg1;
+ (id)storyConfigurationWithFavorites:(_Bool)arg1 disallowExternalServiceCrossPosting:(_Bool)arg2 isSendingVisualMedia:(_Bool)arg3 isSharingLiveVideo:(_Bool)arg4 showsFullNamesBeforeUsernames:(_Bool)arg5 doneButtonShouldOverrideBlueTeal:(_Bool)arg6 showSectionHeader:(_Bool)arg7 sectionHeaderTopInsetIsCompact:(_Bool)arg8 hasBrandedContent:(_Bool)arg9 isPostingToManagedPage:(_Bool)arg10 showViewMoreButtons:(_Bool)arg11 allowPresence:(_Bool)arg12 useTallHeader:(_Bool)arg13 searchBarConfig:(id)arg14 experimentProvider:(id)arg15;
@property(readonly, nonatomic) unsigned long long sharingSurfaceType; // @synthesize sharingSurfaceType=_sharingSurfaceType;
@property(readonly, nonatomic) _Bool sharedStoriesEnabled; // @synthesize sharedStoriesEnabled=_sharedStoriesEnabled;
@property(readonly, nonatomic) _Bool showVideoCallThread; // @synthesize showVideoCallThread=_showVideoCallThread;
@property(readonly, nonatomic) _Bool showActionBarSection; // @synthesize showActionBarSection=_showActionBarSection;
@property(readonly, nonatomic) _Bool optimisticallyCreateThread; // @synthesize optimisticallyCreateThread=_optimisticallyCreateThread;
@property(readonly, nonatomic) long long dataSourceType; // @synthesize dataSourceType=_dataSourceType;
@property(readonly, nonatomic) _Bool canShowSendAgainRow; // @synthesize canShowSendAgainRow=_canShowSendAgainRow;
@property(readonly, copy, nonatomic) IGSearchBarConfig *searchBarConfig; // @synthesize searchBarConfig=_searchBarConfig;
@property(readonly, nonatomic) _Bool prefersNavigationBarHidden; // @synthesize prefersNavigationBarHidden=_prefersNavigationBarHidden;
@property(readonly, nonatomic) _Bool prefersStatusBarHidden; // @synthesize prefersStatusBarHidden=_prefersStatusBarHidden;
@property(readonly, nonatomic) _Bool useTallHeader; // @synthesize useTallHeader=_useTallHeader;
@property(readonly, nonatomic) _Bool allowPresence; // @synthesize allowPresence=_allowPresence;
@property(readonly, nonatomic) _Bool showViewMoreButtons; // @synthesize showViewMoreButtons=_showViewMoreButtons;
@property(readonly, nonatomic) _Bool oneTapSendingEnabled; // @synthesize oneTapSendingEnabled=_oneTapSendingEnabled;
@property(readonly, nonatomic) _Bool doneButtonShouldOverrideBlueTeal; // @synthesize doneButtonShouldOverrideBlueTeal=_doneButtonShouldOverrideBlueTeal;
@property(readonly, nonatomic) _Bool showsFullNamesBeforeUsernames; // @synthesize showsFullNamesBeforeUsernames=_showsFullNamesBeforeUsernames;
@property(readonly, nonatomic) _Bool allowExternalShareServices; // @synthesize allowExternalShareServices=_allowExternalShareServices;
@property(readonly, nonatomic) _Bool allowSwipeDownOnHeader; // @synthesize allowSwipeDownOnHeader=_allowSwipeDownOnHeader;
@property(readonly, nonatomic) _Bool allowSwipeUpOnHeader; // @synthesize allowSwipeUpOnHeader=_allowSwipeUpOnHeader;
@property(readonly, nonatomic) _Bool showMessageTextFieldWithSelection; // @synthesize showMessageTextFieldWithSelection=_showMessageTextFieldWithSelection;
@property(readonly, nonatomic) long long cancelButtonStyle; // @synthesize cancelButtonStyle=_cancelButtonStyle;
@property(readonly, nonatomic) _Bool showGroups; // @synthesize showGroups=_showGroups;
@property(readonly, copy, nonatomic) IGDirectRecipientListViewSectionHeaderConfiguration *sectionHeaderConfiguration; // @synthesize sectionHeaderConfiguration=_sectionHeaderConfiguration;
@property(readonly, nonatomic) _Bool sectionHeaderTopInsetIsCompact; // @synthesize sectionHeaderTopInsetIsCompact=_sectionHeaderTopInsetIsCompact;
@property(readonly, nonatomic) _Bool isSharingLiveVideo; // @synthesize isSharingLiveVideo=_isSharingLiveVideo;
@property(readonly, nonatomic) _Bool isSendingVisualMedia; // @synthesize isSendingVisualMedia=_isSendingVisualMedia;
@property(readonly, nonatomic) _Bool storyFavoritesEnabled; // @synthesize storyFavoritesEnabled=_storyFavoritesEnabled;
@property(readonly, nonatomic) _Bool canShowHighlights; // @synthesize canShowHighlights=_canShowHighlights;
@property(readonly, nonatomic) _Bool allowReshareToStory; // @synthesize allowReshareToStory=_allowReshareToStory;
@property(readonly, nonatomic) _Bool showYourStory; // @synthesize showYourStory=_showYourStory;
- (void).cxx_destruct;
- (id)initWithShowYourStory:(_Bool)arg1 allowReshareToStory:(_Bool)arg2 canShowHighlights:(_Bool)arg3 storyFavoritesEnabled:(_Bool)arg4 isSendingVisualMedia:(_Bool)arg5 isSharingLiveVideo:(_Bool)arg6 sectionHeaderTopInsetIsCompact:(_Bool)arg7 sectionHeaderConfiguration:(id)arg8 showGroups:(_Bool)arg9 cancelButtonStyle:(long long)arg10 showMessageTextFieldWithSelection:(_Bool)arg11 allowSwipeUpOnHeader:(_Bool)arg12 allowSwipeDownOnHeader:(_Bool)arg13 allowExternalShareServices:(_Bool)arg14 showsFullNamesBeforeUsernames:(_Bool)arg15 doneButtonShouldOverrideBlueTeal:(_Bool)arg16 oneTapSendingEnabled:(_Bool)arg17 showViewMoreButtons:(_Bool)arg18 allowPresence:(_Bool)arg19 useTallHeader:(_Bool)arg20 prefersStatusBarHidden:(_Bool)arg21 prefersNavigationBarHidden:(_Bool)arg22 searchBarConfig:(id)arg23 canShowSendAgainRow:(_Bool)arg24 dataSourceType:(long long)arg25 optimisticallyCreateThread:(_Bool)arg26 showActionBarSection:(_Bool)arg27 showVideoCallThread:(_Bool)arg28 sharedStoriesEnabled:(_Bool)arg29 sharingSurfaceType:(unsigned long long)arg30;

@end

