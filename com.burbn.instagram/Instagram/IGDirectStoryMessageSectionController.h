//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectMessageSectionController.h"

#import "IGDirectExpiringReshareMessageCellDelegate.h"
#import "IGDirectStoryRepostDelegate.h"
#import "IGStorySuperHackyPostCaptureEditingViewControllerDelegate.h"

@class IGDirectStoryMessageViewModel;

@interface IGDirectStoryMessageSectionController : IGDirectMessageSectionController <IGDirectExpiringReshareMessageCellDelegate, IGDirectStoryRepostDelegate, IGStorySuperHackyPostCaptureEditingViewControllerDelegate>
{
    id <UIViewControllerTransitioningDelegate> _feedToStoriesTransitioningDelegate;
}

- (void).cxx_destruct;
- (void)_didUpdateFeedItemNotification:(id)arg1;
- (void)superHackyPostCaptureEditingViewController:(id)arg1 didShareToStory:(long long)arg2 directRecipients:(id)arg3 exitPoint:(long long)arg4;
- (void)superHackyPostCaptureEditingViewControllerDidCancel:(id)arg1;
- (void)repostMentionedStoryFromMessageCell:(id)arg1;
- (void)messageCellDidTapOnExpiringMediaThumbnail:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;

// Remaining properties
@property(retain, nonatomic) IGDirectStoryMessageViewModel *viewModel; // @dynamic viewModel;

@end
