//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGBusinessUGCEmojiCellDelegate.h"

@class IGBusinessUGCTopEmojModel, IGUser, IGUserSession, NSString;

@interface IGBusinessUGCEmojiSectionController : IGListSectionController <IGBusinessUGCEmojiCellDelegate>
{
    IGBusinessUGCTopEmojModel *_model;
    long long *_sum;
    IGUserSession *_userSession;
    IGUser *_profileUser;
}

@property(retain, nonatomic) IGUser *profileUser; // @synthesize profileUser=_profileUser;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) long long *sum; // @synthesize sum=_sum;
@property(retain, nonatomic) IGBusinessUGCTopEmojModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)didClickEmojiOnCell:(id)arg1 emoji:(id)arg2;
- (id)_getNetworkSourceFromMediaIDs:(id)arg1;
- (void)_progressToEmojiVCWithNetworkSource:(id)arg1 emoji:(id)arg2;
- (void)_fetchMediaListWithEmoji:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 profileUser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

