//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGVideoCallInviteListHeaderView;

@interface IGVideoCallAddUsersView : UIView
{
    UIView *_pullBarContainer;
    UIView *_pullBarView;
    UIView *_recipientListView;
    IGVideoCallInviteListHeaderView *_headerView;
    long long _groupExpansionState;
}

- (void).cxx_destruct;
- (void)_setupPullBarView;
- (void)_setupHeaderView;
- (void)setGroupExpansionState:(long long)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) IGVideoCallInviteListHeaderView *headerView;
- (id)initWithRecipientListView:(id)arg1 groupExpansionState:(long long)arg2;

@end
