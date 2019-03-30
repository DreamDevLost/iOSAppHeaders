//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession, NSArray, NSDate, NSMutableSet, NSString;

@interface IGDiscoveryGridDataStore : NSObject
{
    IGUserSession *_userSession;
    NSArray *_surplusGridItems;
    struct IGGridLayoutConfiguration _layoutConfig;
    NSMutableSet *_identificationMap;
    _Bool _hasMoreAvailable;
    NSDate *_fetchTime;
    NSString *_maxId;
    NSArray *_items;
}

+ (id)createWithGridDataModel:(id)arg1 layoutConfig:(struct IGGridLayoutConfiguration)arg2 userSession:(id)arg3;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) _Bool hasMoreAvailable; // @synthesize hasMoreAvailable=_hasMoreAvailable;
@property(readonly, copy, nonatomic) NSString *maxId; // @synthesize maxId=_maxId;
@property(readonly, nonatomic) NSDate *fetchTime; // @synthesize fetchTime=_fetchTime;
- (void).cxx_destruct;
- (id)_mergeItems:(id)arg1 otherArray:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEmpty;
- (id)firstItemMatchingPredicate:(CDUnknownBlockType)arg1;
- (id)modelForFeedItem:(id)arg1;
- (id)dataStoreReplacingFeedItem:(id)arg1 withFeedItem:(id)arg2;
- (id)dataStoreByAddingDataModel:(id)arg1;
- (id)_initWithFetchTime:(id)arg1 maxId:(id)arg2 hasMoreAvailable:(_Bool)arg3 items:(id)arg4 surplusGridItems:(id)arg5 identificationMap:(id)arg6 userSession:(id)arg7 gridLayoutConfiguration:(struct IGGridLayoutConfiguration)arg8;
- (id)initWithUserSession:(id)arg1;

@end

