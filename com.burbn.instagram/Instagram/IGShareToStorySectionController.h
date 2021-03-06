//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListGenericSectionController.h"

#import "IGStorySuperHackyPostCaptureEditingViewControllerDelegate.h"
#import "IGStoryViewerDelegate.h"

@class IGShareToStoryValue, IGStoryCaptureAnimationController, IGStoryViewerPresentationAnimationController, IGUserSession, NSString;

@interface IGShareToStorySectionController : IGListGenericSectionController <IGStorySuperHackyPostCaptureEditingViewControllerDelegate, IGStoryViewerDelegate>
{
    IGShareToStoryValue *_shareToStoryValue;
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    id <UIViewControllerTransitioningDelegate> _feedToStoriesTransitioningDelegate;
    IGStoryCaptureAnimationController *_captureAnimationController;
    IGStoryViewerPresentationAnimationController *_storyViewerAnimationController;
}

- (void).cxx_destruct;
- (void)superHackyPostCaptureEditingViewController:(id)arg1 didShareToStory:(long long)arg2 directRecipients:(id)arg3 exitPoint:(long long)arg4;
- (void)superHackyPostCaptureEditingViewControllerDidCancel:(id)arg1;
- (void)storyViewerDidFinish:(id)arg1 navigationAction:(long long)arg2 lastMediaID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)storyViewer:(id)arg1 didFocusOnReelWithPK:(id)arg2;
- (void)_didTapProfilePicture:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithShareToStoryValue:(id)arg1 userSession:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

