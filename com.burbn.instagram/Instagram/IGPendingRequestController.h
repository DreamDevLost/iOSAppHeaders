//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGPendingRequestView, IGUser, IGUserSession, UIView;

@interface IGPendingRequestController : NSObject
{
    IGUser *_user;
    IGUserSession *_userSession;
    IGPendingRequestView *_requestView;
    id <IGPendingRequestControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGPendingRequestControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_changeFrienshipWithUserAction:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateViewVisibility;
@property(readonly, nonatomic) UIView *view;
- (void)setUser:(id)arg1 userSession:(id)arg2;
- (id)init;

@end

