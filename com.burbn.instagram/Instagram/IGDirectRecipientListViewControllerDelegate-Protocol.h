//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectRecipientOneTapStateTracker, IGDirectShareRecipient, IGFeedItem, IGSharedStoriesModel, IGStoryViewerLoggingContext, IGStoryViewerViewModel, IGUser, IGViewController<IGDirectRecipientListViewControllerType>, NSArray, NSOrderedSet, NSSet, NSString;

@protocol IGDirectRecipientListViewControllerDelegate <NSObject>
- (void)selectRecipientViewController:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1 didTapWhatsappShareWithFeedItem:(IGFeedItem *)arg2;
- (void)selectRecipientViewController:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1 didTapSMSShareWithFeedItem:(IGFeedItem *)arg2;
- (void)selectRecipientViewController:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1 didTapGeneralShareWithFeedItem:(IGFeedItem *)arg2;
- (void)selectRecipientViewController:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1 didTapCopyLinkWithFeedItem:(IGFeedItem *)arg2;
- (void)selectRecipientViewController:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1 didTapDirectReplyToAuthorWithFeedItem:(IGFeedItem *)arg2;
- (void)selectRecipientViewControllerDidPresentFullscreen:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1;
- (void)selectRecipientViewController:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1 wantsToToggleFullScreen:(_Bool)arg2;
- (void)selectRecipientViewController:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1 didSwipeOnHeaderWithDirection:(unsigned long long)arg2;
- (void)selectRecipientViewController:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1 didTapRecipient:(IGDirectShareRecipient *)arg2 selected:(_Bool)arg3;
- (void)selectRecipientViewController:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1 didUpdateSelectedRecipients:(NSOrderedSet *)arg2;
- (void)selectRecipientViewControllerDidTapBackButton:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1;
- (void)selectRecipientViewControllerDidDismissRecipientList:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1 selectedStorySendTarget:(long long)arg2 selectedExternalServices:(NSSet *)arg3 selectedDirectRecipients:(NSOrderedSet *)arg4 recipientsFromSearch:(NSOrderedSet *)arg5 bumpedRecipients:(NSSet *)arg6 oneTapStateTracker:(IGDirectRecipientOneTapStateTracker *)arg7 fromOneTap:(_Bool)arg8;
- (void)selectRecipientViewControllerDidTapFinishButton:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1 storySendTarget:(long long)arg2 sender:(IGUser *)arg3 directRecipients:(NSSet *)arg4 externalServices:(NSSet *)arg5 text:(NSString *)arg6 fromOneTap:(_Bool)arg7 storyViewerViewModel:(IGStoryViewerViewModel *)arg8 storyViewerLoggingContext:(IGStoryViewerLoggingContext *)arg9 currentStoryItem:(id <IGStoryItemType>)arg10 loggingProvider:(id <IGFeedItemWithCarouselLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate><IGFeedItemVideoLoggingProviderDelegate>)arg11 feedItem:(IGFeedItem *)arg12;
- (NSOrderedSet *)selectedRecipientsSoFarFromOneTapping:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1;
- (void)selectRecipientViewControllerDidTapAddToHighlight:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1;
- (void)selectRecipientViewController:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1 didOneTapSendToSharedStories:(IGSharedStoriesModel *)arg2;
- (void)selectRecipientViewController:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1 didOneTapSendToBlastList:(NSArray *)arg2;
- (void)selectRecipientViewController:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1 didOneTapSendToDirectRecipient:(IGDirectShareRecipient *)arg2 messageText:(NSString *)arg3;
- (void)selectRecipientViewController:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1 didOneTapSendToExternalService:(long long)arg2;
- (void)selectRecipientViewController:(IGViewController<IGDirectRecipientListViewControllerType> *)arg1 didOneTapSendToStoryTarget:(long long)arg2;
@end
