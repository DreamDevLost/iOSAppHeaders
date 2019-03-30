//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface IGSegmentsConfig : NSObject
{
    unsigned long long _count;
    unsigned long long _segmentDuration;
    double _singleSegmentDuration;
    NSURL *_outputFolderURL;
}

@property(readonly, copy, nonatomic) NSURL *outputFolderURL; // @synthesize outputFolderURL=_outputFolderURL;
@property(readonly, nonatomic) double singleSegmentDuration; // @synthesize singleSegmentDuration=_singleSegmentDuration;
@property(readonly, nonatomic) unsigned long long segmentDuration; // @synthesize segmentDuration=_segmentDuration;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)initWithOutputFolderURL:(id)arg1 segmentDuration:(unsigned long long)arg2 singleSegmentDuration:(double)arg3 segmentsCount:(unsigned long long)arg4;

@end

