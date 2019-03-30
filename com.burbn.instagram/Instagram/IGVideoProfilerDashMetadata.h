//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FNFDashRepresentationMetadata, NSArray;

@interface IGVideoProfilerDashMetadata : NSObject
{
    NSArray *_availableQualities;
    FNFDashRepresentationMetadata *_currentQuality;
    double _videoBufferEndTime;
}

@property(nonatomic) double videoBufferEndTime; // @synthesize videoBufferEndTime=_videoBufferEndTime;
@property(readonly, nonatomic) FNFDashRepresentationMetadata *currentQuality; // @synthesize currentQuality=_currentQuality;
@property(copy, nonatomic) NSArray *availableQualities; // @synthesize availableQualities=_availableQualities;
- (void).cxx_destruct;
- (id)qualityWithId:(id)arg1;
- (void)setCurrentQualityWithId:(id)arg1;

@end

