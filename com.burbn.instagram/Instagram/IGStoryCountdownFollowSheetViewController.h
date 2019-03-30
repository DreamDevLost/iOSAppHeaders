//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAnalyticsModule.h"
#import "IGGestureHandler.h"
#import "IGStoryCountdownFollowSheetContentViewDelegate.h"

@class IGCountdownStickerConsumptionModel, IGStoryCountdownFollowSheetContentView, IGUser, IGUserSession, NSString;

@interface IGStoryCountdownFollowSheetViewController : UIViewController <IGStoryCountdownFollowSheetContentViewDelegate, IGGestureHandler, IGAnalyticsModule>
{
    IGCountdownStickerConsumptionModel *_model;
    IGUserSession *_userSesion;
    IGUser *_countdownOwner;
    IGStoryCountdownFollowSheetContentView *_contentView;
    id <IGStoryCountdownFollowSheetViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStoryCountdownFollowSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)countdownFollowSheetContentViewDidTapOwnerUsername:(id)arg1;
- (void)countdownFollowSheetContentViewDidShareCountdown:(id)arg1;
- (void)countdownFollowSheetContentView:(id)arg1 didTurnReminderOn:(_Bool)arg2;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCountdownModel:(id)arg1 countdownOwner:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
