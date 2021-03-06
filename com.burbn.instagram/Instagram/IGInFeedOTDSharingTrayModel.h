//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "IGMainFeedItemIdProviding.h"
#import "IGNetegoItem.h"

@class IGReel, NSString;

@interface IGInFeedOTDSharingTrayModel : NSObject <IGListDiffable, IGMainFeedItemIdProviding, IGNetegoItem>
{
    IGReel *_reel;
    NSString *_mediaID;
    NSString *_title;
    NSString *_subtitle;
    NSString *_netegoTrackingToken;
}

@property(readonly, copy, nonatomic) NSString *netegoTrackingToken; // @synthesize netegoTrackingToken=_netegoTrackingToken;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)trackingToken;
- (unsigned long long)type;
- (id)pk;
- (unsigned long long)mainFeedItemType;
- (id)itemId;
- (id)initWithReel:(id)arg1 mediaID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 netegoTrackingToken:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

