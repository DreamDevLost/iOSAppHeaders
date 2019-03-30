//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGQPSlotID;

@interface IGQPSlots : FBValueObject <NSCopying, NSCoding>
{
    IGQPSlotID *_accountSetting;
    IGQPSlotID *_mainFeed;
    IGQPSlotID *_explore;
    IGQPSlotID *_activityFeed;
    IGQPSlotID *_directAppInbox;
    IGQPSlotID *_directInbox;
    IGQPSlotID *_directInboxThread;
    IGQPSlotID *_hashtagFeed;
    IGQPSlotID *_liveCamera;
    IGQPSlotID *_personalProfile;
    IGQPSlotID *_saveHome;
    IGQPSlotID *_shoppingProductDetails;
    IGQPSlotID *_survey;
    IGQPSlotID *_otherProfile;
    IGQPSlotID *_editProfile;
    IGQPSlotID *_locationPageInfo;
    IGQPSlotID *_createFeedPost;
    IGQPSlotID *_defaultSlot;
}

@property(readonly, copy, nonatomic) IGQPSlotID *defaultSlot; // @synthesize defaultSlot=_defaultSlot;
@property(readonly, copy, nonatomic) IGQPSlotID *createFeedPost; // @synthesize createFeedPost=_createFeedPost;
@property(readonly, copy, nonatomic) IGQPSlotID *locationPageInfo; // @synthesize locationPageInfo=_locationPageInfo;
@property(readonly, copy, nonatomic) IGQPSlotID *editProfile; // @synthesize editProfile=_editProfile;
@property(readonly, copy, nonatomic) IGQPSlotID *otherProfile; // @synthesize otherProfile=_otherProfile;
@property(readonly, copy, nonatomic) IGQPSlotID *survey; // @synthesize survey=_survey;
@property(readonly, copy, nonatomic) IGQPSlotID *shoppingProductDetails; // @synthesize shoppingProductDetails=_shoppingProductDetails;
@property(readonly, copy, nonatomic) IGQPSlotID *saveHome; // @synthesize saveHome=_saveHome;
@property(readonly, copy, nonatomic) IGQPSlotID *personalProfile; // @synthesize personalProfile=_personalProfile;
@property(readonly, copy, nonatomic) IGQPSlotID *liveCamera; // @synthesize liveCamera=_liveCamera;
@property(readonly, copy, nonatomic) IGQPSlotID *hashtagFeed; // @synthesize hashtagFeed=_hashtagFeed;
@property(readonly, copy, nonatomic) IGQPSlotID *directInboxThread; // @synthesize directInboxThread=_directInboxThread;
@property(readonly, copy, nonatomic) IGQPSlotID *directInbox; // @synthesize directInbox=_directInbox;
@property(readonly, copy, nonatomic) IGQPSlotID *directAppInbox; // @synthesize directAppInbox=_directAppInbox;
@property(readonly, copy, nonatomic) IGQPSlotID *activityFeed; // @synthesize activityFeed=_activityFeed;
@property(readonly, copy, nonatomic) IGQPSlotID *explore; // @synthesize explore=_explore;
@property(readonly, copy, nonatomic) IGQPSlotID *mainFeed; // @synthesize mainFeed=_mainFeed;
@property(readonly, copy, nonatomic) IGQPSlotID *accountSetting; // @synthesize accountSetting=_accountSetting;
- (void).cxx_destruct;
- (id)initWithAccountSetting:(id)arg1 mainFeed:(id)arg2 explore:(id)arg3 activityFeed:(id)arg4 directAppInbox:(id)arg5 directInbox:(id)arg6 directInboxThread:(id)arg7 hashtagFeed:(id)arg8 liveCamera:(id)arg9 personalProfile:(id)arg10 saveHome:(id)arg11 shoppingProductDetails:(id)arg12 survey:(id)arg13 otherProfile:(id)arg14 editProfile:(id)arg15 locationPageInfo:(id)arg16 createFeedPost:(id)arg17 defaultSlot:(id)arg18;

@end

