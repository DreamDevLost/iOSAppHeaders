//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "MKAnnotation.h"

@class IGNearbyBusinessViewModel, NSString;

@interface IGNearbyBusinessAnnotation : NSObject <MKAnnotation, IGListDiffable>
{
    IGNearbyBusinessViewModel *_business;
    struct CLLocationCoordinate2D coordinate;
}

@property(readonly, nonatomic) IGNearbyBusinessViewModel *business; // @synthesize business=_business;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setReelState:(long long)arg1;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

