//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGProfileAvatarViewDelegate.h"
#import "IGProfileHeaderAvatarViewProvider.h"
#import "IGProfileHeaderBioControllerTranslationDelegate.h"
#import "IGProfileHeaderDetailsCellDelegate.h"

@class IGProfileActionsModel, IGProfileAvatarActionsController, IGProfileHeaderBioController, IGStyledString, IGUserSession, NSArray, NSString, UIColor;

@interface IGProfileHeaderDetailsSectionController : IGListSectionController <IGProfileAvatarViewDelegate, IGProfileHeaderDetailsCellDelegate, IGProfileHeaderBioControllerTranslationDelegate, IGProfileHeaderAvatarViewProvider>
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGProfileActionsModel *_model;
    id <IGProfileHeaderDetailsSectionControllerLoggingDelegate> _loggingDelegate;
    NSString *_mediaAttribution;
    NSString *_trackingToken;
    IGProfileHeaderBioController *_headerController;
    IGProfileAvatarActionsController *_avatarController;
    IGStyledString *_bioStyledString;
    NSArray *_bioFieldModels;
    _Bool _shouldCollapseBio;
    _Bool _hasPageCategory;
    UIColor *_backgroundColor;
}

- (void).cxx_destruct;
- (void)_logProfileAction:(id)arg1;
- (id)stackedBroadcastProfileView;
- (id)broadcastProfileView;
- (id)storyProfileView;
- (void)profileAvatarViewDidTapLiveWithProfilePic:(id)arg1;
- (void)profileAvatarViewDidLongPressProfilePic:(id)arg1;
- (void)profileAvatarViewDidTapProfilePic:(id)arg1;
- (void)profileHeaderBioTranslationNeedsFullReload:(id)arg1 invalidateBio:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)profileHeaderBioTranslationNeedsPartialReload:(id)arg1;
- (void)profileHeaderDetailsCell:(id)arg1 didTapString:(id)arg2 URL:(id)arg3;
- (void)profileHeaderDetailsCellDidTapTranslate:(id)arg1;
- (void)_invalidateBio;
- (id)_bioStrings;
- (id)_bioString;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithDelegate:(id)arg1 loggingDelegate:(id)arg2 userSession:(id)arg3 analyticsModule:(id)arg4 mediaAttribution:(id)arg5 trackingToken:(id)arg6 backgroundColor:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

