//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGLoadMoreResponseType.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class FBARWorldTrackingDataProviderConfiguration, IGFaceTrackerModel, IGSegmentationModel, NSString;

@interface IGAREffectModelsMetadata : FBValueObject <IGLoadMoreResponseType, NSCopying, NSCoding>
{
    IGFaceTrackerModel *_faceTrackerModel;
    IGSegmentationModel *_segmentationModel;
    FBARWorldTrackingDataProviderConfiguration *_worldConfig;
}

@property(readonly, copy, nonatomic) FBARWorldTrackingDataProviderConfiguration *worldConfig; // @synthesize worldConfig=_worldConfig;
@property(readonly, copy, nonatomic) IGSegmentationModel *segmentationModel; // @synthesize segmentationModel=_segmentationModel;
@property(readonly, copy, nonatomic) IGFaceTrackerModel *faceTrackerModel; // @synthesize faceTrackerModel=_faceTrackerModel;
- (void).cxx_destruct;
- (id)initWithFaceTrackerModel:(id)arg1 segmentationModel:(id)arg2 worldConfig:(id)arg3;
- (id)maxId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

