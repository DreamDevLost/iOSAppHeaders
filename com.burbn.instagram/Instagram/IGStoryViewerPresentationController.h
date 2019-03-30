//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStoryDataControllerStoryItemListener.h"
#import "IGStoryViewerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class IGFeedItem, IGReel, IGStoryViewerPresentationAnimationController, IGStoryViewerPresentationControllerConfig, IGUserSession, NSString, UIView, UIViewController;

@interface IGStoryViewerPresentationController : NSObject <IGStoryDataControllerStoryItemListener, IGStoryViewerDelegate, UIViewControllerTransitioningDelegate>
{
    IGUserSession *_userSession;
    IGStoryViewerPresentationControllerConfig *_config;
    IGFeedItem *_focusFeedItem;
    long long _entryPoint;
    _Bool _showSingleItem;
    IGReel *_reel;
    _Bool _showStoryReshareButton;
    _Bool _enableReply;
    _Bool _shouldOpenViewerListAtLaunch;
    _Bool _shouldPresentStoryViewerWithModalTransition;
    UIViewController *_sourceViewController;
    UIView *_fromViewForAnimation;
    UIView *_profilePictureView;
    id <IGStoryViewerEntryView> _storyViewerEntryView;
    IGStoryViewerPresentationAnimationController *_animationController;
    id <IGStoryViewerPresentationControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStoryViewerPresentationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)storyDataController:(id)arg1 didReturnNoStoryItemResultsForReelPK:(id)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)storyDataController:(id)arg1 fetchItemsDidFailForReelPK:(id)arg2 error:(id)arg3 refreshType:(long long)arg4 updateDuration:(double)arg5;
- (void)storyDataController:(id)arg1 didUpdateReel:(id)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)storyViewerDidFinish:(id)arg1 navigationAction:(long long)arg2 lastMediaID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)storyViewer:(id)arg1 didFocusOnReelWithPK:(id)arg2;
- (void)_presentStoryViewWithReel:(id)arg1;
- (void)_fetchAndPresentReel:(id)arg1 focusFeedItem:(id)arg2 config:(id)arg3 sourceViewController:(id)arg4 fromViewForAnimation:(id)arg5 profilePictureView:(id)arg6 storyEntryView:(id)arg7 showSingleItem:(_Bool)arg8 showStoryReshareButton:(_Bool)arg9 enableReply:(_Bool)arg10 shouldOpenViewerListAtLaunch:(_Bool)arg11 shouldPresentStoryViewerWithModalTransition:(_Bool)arg12;
- (void)fetchAndPresentStoryViewerForReels:(id)arg1 focusedReelPK:(id)arg2 sourceViewController:(id)arg3 fromViewForAnimation:(id)arg4;
- (void)fetchAndPresentStoryViewerForReelOwner:(id)arg1 sourceViewController:(id)arg2 storyEntryView:(id)arg3;
- (void)fetchAndPresentReel:(id)arg1 viewerViewModel:(id)arg2 sourceViewController:(id)arg3 fromViewForAnimation:(id)arg4;
- (void)fetchAndPresentReel:(id)arg1 focusFeedItem:(id)arg2 sourceViewController:(id)arg3 fromViewForAnimation:(id)arg4 profilePictureView:(id)arg5 showSingleItem:(_Bool)arg6 showStoryReshareButton:(_Bool)arg7 enableReply:(_Bool)arg8 shouldOpenViewerListAtLaunch:(_Bool)arg9 shouldPresentStoryViewerWithModalTransition:(_Bool)arg10;
- (id)initWithUserSession:(id)arg1 entryPoint:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
