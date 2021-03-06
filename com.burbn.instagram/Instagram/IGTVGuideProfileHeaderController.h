//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserUpdatedListener.h"

@class IGFollowController, IGTVGuideProfileHeaderView, IGTVGuideView, IGUser, IGUserSession, NSString, UIViewController;

@interface IGTVGuideProfileHeaderController : NSObject <IGUserUpdatedListener>
{
    IGUserSession *_userSession;
    IGTVGuideView *_tvGuideView;
    NSString *_analyticsModule;
    IGFollowController *_followController;
    IGUser *_displayedUser;
    IGTVGuideProfileHeaderView *_profileHeader;
    id <IGTVGuideProfileHeaderControllerDelegate> _delegate;
    UIViewController *_hostViewController;
}

@property(nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(nonatomic) __weak id <IGTVGuideProfileHeaderControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleUserDataFetch;
- (void)userWasUpdated:(id)arg1;
- (void)_viewProfileTapped;
- (void)_addButtonTapped;
- (void)_backButtonTapped;
- (void)pushProfileHeaderForUser:(id)arg1 attributingMediaPK:(id)arg2 showBackButton:(_Bool)arg3 showAddButtonForOwnProfile:(_Bool)arg4 animated:(_Bool)arg5;
- (id)initWithUserSession:(id)arg1 tvGuideView:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

