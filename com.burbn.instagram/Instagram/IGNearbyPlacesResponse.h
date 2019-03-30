//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGLoadMoreResponseType.h"

@class NSArray, NSString;

@interface IGNearbyPlacesResponse : NSObject <IGLoadMoreResponseType>
{
    NSString *_nextMaxID;
    NSArray *_places;
}

@property(readonly, copy, nonatomic) NSArray *places; // @synthesize places=_places;
- (void).cxx_destruct;
- (id)maxId;
- (id)initWithPlaces:(id)arg1 nextMaxID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
