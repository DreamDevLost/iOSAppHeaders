//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset;

@interface FBCCAssetSampleBufferIterator : NSObject
{
    AVAsset *_asset;
    CDStruct_e83c9415 _timeRange;
}

@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (_Bool)iterateVideoSampleBuffersInFormat:(unsigned int)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)initWithAsset:(id)arg1;

@end

