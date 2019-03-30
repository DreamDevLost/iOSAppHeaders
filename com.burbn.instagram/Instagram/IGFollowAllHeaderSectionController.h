//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGFollowAllUsersCellDelegate.h"

@class IGFollowAllHeaderItem, IGUserSession, NSString;

@interface IGFollowAllHeaderSectionController : IGListSectionController <IGFollowAllUsersCellDelegate>
{
    IGUserSession *_userSession;
    IGFollowAllHeaderItem *_followAllHeaderItem;
    _Bool _followAllButtonEnabled;
    NSString *_module;
    id <IGFollowAllHeaderSectionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGFollowAllHeaderSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_followAllUsersOnServer;
- (void)followAllUsersCellDidTapFollowAll:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (Class)_cellClass;
- (id)initWithUserSession:(id)arg1 module:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
