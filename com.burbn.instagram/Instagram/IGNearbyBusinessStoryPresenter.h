//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStoryDataControllerStoryItemListener.h"
#import "IGStoryViewerDelegate.h"

@class IGRemoteImageView, IGStoryViewerPresentationAnimationController, IGUser, IGUserSession, NSArray, NSString, UIViewController;

@interface IGNearbyBusinessStoryPresenter : NSObject <IGStoryDataControllerStoryItemListener, IGStoryViewerDelegate>
{
    IGUserSession *_userSession;
    UIViewController *_presentingViewController;
    IGStoryViewerPresentationAnimationController *_animationController;
    IGRemoteImageView *_profileImageView;
    NSArray *_storyListener;
    id <IGNearbyBusinessStoryPresenterDelegate> _delegate;
    IGUser *_currentUserForStory;
}

@property(readonly, nonatomic) IGUser *currentUserForStory; // @synthesize currentUserForStory=_currentUserForStory;
@property(nonatomic) __weak id <IGNearbyBusinessStoryPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)storyViewer:(id)arg1 didFocusOnReelWithPK:(id)arg2;
- (void)storyViewerDidFinish:(id)arg1 navigationAction:(long long)arg2 lastMediaID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)storyDataController:(id)arg1 didReturnNoStoryItemResultsForReelPK:(id)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)storyDataController:(id)arg1 fetchItemsDidFailForReelPK:(id)arg2 error:(id)arg3 refreshType:(long long)arg4 updateDuration:(double)arg5;
- (void)storyDataController:(id)arg1 didUpdateReel:(id)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)_presentStoryWithReel:(id)arg1;
- (void)_fetchStoryForBusiness:(id)arg1;
- (void)_tryPresentStoryForBusiness:(id)arg1 profileImageView:(id)arg2;
- (void)_removeStoryListener;
- (void)addListener:(id)arg1;
- (void)showStoriesForUser:(id)arg1 withProfileImageView:(id)arg2;
- (id)initWithUserSession:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

