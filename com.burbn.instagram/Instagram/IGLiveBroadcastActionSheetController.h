//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGActionSheetDelegate.h"

@class IGLiveCommentModel, IGUserSession, NSString, UIViewController;

@interface IGLiveBroadcastActionSheetController : NSObject <IGActionSheetDelegate>
{
    _Bool _showCommentReportingActionSheet;
    id <IGLiveBroadcastActionSheetControllerDelegate> _delegate;
    IGLiveCommentModel *_targetComment;
    IGUserSession *_userSession;
    UIViewController *_viewController;
}

@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGLiveCommentModel *targetComment; // @synthesize targetComment=_targetComment;
@property(nonatomic) _Bool showCommentReportingActionSheet; // @synthesize showCommentReportingActionSheet=_showCommentReportingActionSheet;
@property(nonatomic) __weak id <IGLiveBroadcastActionSheetControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionSheetFinishedHiding;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)presentActionSheetForComment:(id)arg1 isPinnedComment:(_Bool)arg2 isCurrentlyLiveWith:(_Bool)arg3 module:(id)arg4;
- (void)presentActionSheetToEndBroadcast;
- (void)presentActionSheetForMoreOptionsWithCommentsCurrentlyMuted:(_Bool)arg1 requestToJoinCurrentlyEnabled:(_Bool)arg2 shareEnabled:(_Bool)arg3;
- (id)initWithUserSession:(id)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

