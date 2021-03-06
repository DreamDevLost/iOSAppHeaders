//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectCameraPresentationManagerDelegate.h"
#import "IGDirectGalleryComponentsDataSource.h"
#import "IGDirectGalleryComponentsDelegate.h"
#import "IGDirectReplyToAuthorViewControllerCameraDelegate.h"
#import "IGDirectReplyToAuthorViewControllerDismissDelegate.h"
#import "IGDirectReplyToAuthorViewControllerGalleryDelegate.h"
#import "IGDirectReplyToAuthorViewControllerPresenting.h"

@class IGDirectCameraPresentationManager, IGDirectGalleryComponents, IGDirectMessageModalShareContent, IGDirectReplyToAuthorViewController, IGDirectShareRecipient, IGDirectThreadService, IGUser, IGUserSession, NSString;

@interface IGDirectReplyToAuthorViewControllerPresenter : NSObject <IGDirectCameraPresentationManagerDelegate, IGDirectGalleryComponentsDataSource, IGDirectGalleryComponentsDelegate, IGDirectReplyToAuthorViewControllerCameraDelegate, IGDirectReplyToAuthorViewControllerDismissDelegate, IGDirectReplyToAuthorViewControllerGalleryDelegate, IGDirectReplyToAuthorViewControllerPresenting>
{
    IGUserSession *_userSession;
    IGDirectThreadService *_threadService;
    NSString *_analyticsModule;
    IGDirectMessageModalShareContent *_shareContent;
    long long _source;
    IGDirectReplyToAuthorViewController *_replyToAuthorViewController;
    IGDirectCameraPresentationManager *_cameraPresentationManager;
    IGDirectGalleryComponents *_galleryComponents;
    IGDirectShareRecipient *_galleryRecipient;
    IGUser *_replyToUser;
    _Bool _shouldPresentThreadOnDismiss;
}

- (void).cxx_destruct;
- (void)replyToAuthorViewControllerDidDismiss:(id)arg1;
- (void)replyToAuthorViewControllerDidTapTitle:(id)arg1;
- (void)replyToAuthorViewController:(id)arg1 didTapGalleryButtonWithRecipient:(id)arg2;
- (void)replyToAuthorViewController:(id)arg1 didTapCameraButton:(id)arg2 configuration:(id)arg3;
- (void)_presentThreadIfNeeded;
- (void)_fetchThreadAndSendDirectReplyToAuthorAttachmentToUser:(id)arg1 source:(id)arg2;
- (void)galleryComponentsStartToReshareFeedItem:(id)arg1;
- (void)galleryComponentsStartToUpload:(id)arg1;
- (id)mediaRecipient;
- (void)presentationManagerDidDismiss:(id)arg1 withDirectRecipients:(id)arg2;
- (void)dismissalDestinationViewForRecipients:(id)arg1 sourceIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)presentationManagerWillDismiss:(id)arg1 withDirectRecipients:(id)arg2;
- (void)presentationManagerWillSend:(id)arg1 withDirectRecipients:(id)arg2;
- (void)presentReplyToAuthorViewControllerWithShareContent:(id)arg1 onTopOfSourceViewController:(id)arg2 replyToUser:(id)arg3 source:(long long)arg4;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

