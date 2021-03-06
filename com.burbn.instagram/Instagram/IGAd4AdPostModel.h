//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "IGNetegoItem.h"
#import "IGNetegoItemMediaIdProviding.h"
#import "NSCoding.h"

@class IGAd4AdFooterModel, IGFeedItem, NSString;

@interface IGAd4AdPostModel : NSObject <IGListDiffable, IGNetegoItem, IGNetegoItemMediaIdProviding, NSCoding>
{
    IGFeedItem *_mediaItem;
    NSString *_title;
    IGAd4AdFooterModel *_footer;
    NSString *_pk;
    NSString *_trackingToken;
    NSString *_couponOfferId;
}

@property(readonly, copy, nonatomic) NSString *couponOfferId; // @synthesize couponOfferId=_couponOfferId;
@property(readonly, copy, nonatomic) NSString *trackingToken; // @synthesize trackingToken=_trackingToken;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly, copy, nonatomic) IGAd4AdFooterModel *footer; // @synthesize footer=_footer;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) IGFeedItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (unsigned long long)mainFeedItemType;
- (id)itemId;
- (unsigned long long)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)originalMediaId;
- (id)mediaId;
- (id)initWithItem:(id)arg1 title:(id)arg2 footer:(id)arg3 pk:(id)arg4 trackingToken:(id)arg5 couponOfferId:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

