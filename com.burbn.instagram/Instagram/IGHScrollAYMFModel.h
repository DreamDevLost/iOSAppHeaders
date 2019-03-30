//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "IGNetegoItem.h"
#import "NSCoding.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface IGHScrollAYMFModel : NSObject <IGListDiffable, IGNetegoItem, NSCoding>
{
    NSString *_pk;
    NSArray *_items;
    NSString *_title;
    NSString *_subtitle;
    NSString *_actionText;
    NSString *_uuid;
    NSString *_trackingToken;
    long long _fbUpsellPosition;
    NSNumber *_viewStateItemType;
    long long _cellType;
    NSString *_netegoType;
    NSDictionary *_bloksData;
}

@property(readonly, copy, nonatomic) NSDictionary *bloksData; // @synthesize bloksData=_bloksData;
@property(readonly, copy, nonatomic) NSString *netegoType; // @synthesize netegoType=_netegoType;
@property(readonly, nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(readonly, copy, nonatomic) NSNumber *viewStateItemType; // @synthesize viewStateItemType=_viewStateItemType;
@property(readonly, nonatomic) long long fbUpsellPosition; // @synthesize fbUpsellPosition=_fbUpsellPosition;
@property(readonly, copy, nonatomic) NSString *trackingToken; // @synthesize trackingToken=_trackingToken;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (unsigned long long)mainFeedItemType;
- (id)itemId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeItemAtIndex:(long long)arg1;
- (unsigned long long)type;
- (id)initWithPK:(id)arg1 title:(id)arg2 subtitle:(id)arg3 items:(id)arg4 cellType:(long long)arg5 upsellPosition:(unsigned long long)arg6 actionText:(id)arg7 uuID:(id)arg8 trackingToken:(id)arg9 viewStateItemType:(id)arg10 netegoType:(id)arg11 bloksData:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
