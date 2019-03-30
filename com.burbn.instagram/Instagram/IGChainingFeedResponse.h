//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGLoadMoreResponseType.h"

@class NSArray, NSNumber, NSString;

@interface IGChainingFeedResponse : NSObject <IGLoadMoreResponseType>
{
    NSString *_maxId;
    _Bool _hasMoreAvailable;
    NSArray *_items;
    NSNumber *_estimatedChainLength;
    NSNumber *_totalItemsReceived;
}

@property(readonly, nonatomic) NSNumber *totalItemsReceived; // @synthesize totalItemsReceived=_totalItemsReceived;
@property(readonly, nonatomic) NSNumber *estimatedChainLength; // @synthesize estimatedChainLength=_estimatedChainLength;
@property(readonly, nonatomic) _Bool hasMoreAvailable; // @synthesize hasMoreAvailable=_hasMoreAvailable;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)maxId;
- (id)initWithItems:(id)arg1 maxId:(id)arg2 hasMoreAvailable:(_Bool)arg3 estimatedChainLength:(id)arg4 totalItemsReceived:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

