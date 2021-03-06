//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStoryViewerPresentationControllerDelegate.h"

@class IGActivityStoryItemConfiguration, IGListSectionController, IGStoryViewerPresentationController, IGUserSession, NSString, UIViewController;

@interface IGActivityStoryPresentationHelper : NSObject <IGStoryViewerPresentationControllerDelegate>
{
    IGUserSession *_userSession;
    IGActivityStoryItemConfiguration *_itemConfig;
    IGStoryViewerPresentationController *_storyViewerPresentationController;
    UIViewController *_hostViewController;
    IGListSectionController *_hostSectionController;
}

- (void).cxx_destruct;
- (void)storyViewerPresentationControllerDidPresentViewer:(id)arg1;
- (void)presentReel:(id)arg1 focusFeedItem:(id)arg2 fromViewForAnimation:(id)arg3 profilePictureView:(id)arg4 enableReply:(_Bool)arg5 shouldOpenViewerListAtLaunch:(_Bool)arg6 shouldShowSingleItem:(_Bool)arg7 shouldPresentStoryViewerWithModalTransition:(_Bool)arg8;
- (void)presentReelFromViewForAnimation:(id)arg1 withDestinationString:(id)arg2 enableReply:(_Bool)arg3 shouldOpenViewerListAtLaunch:(_Bool)arg4 shouldShowSingleItem:(_Bool)arg5;
- (id)initWithUserSession:(id)arg1 itemConfig:(id)arg2 hostViewController:(id)arg3 hostSectionController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

