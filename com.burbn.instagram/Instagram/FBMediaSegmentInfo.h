//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying.h"

@class FBMediaUploadContentSource, NSString;

@interface FBMediaSegmentInfo : FBValueObject <NSCopying>
{
    FBMediaUploadContentSource *_contentSource;
    unsigned long long _segmentType;
    unsigned long long _segmentStartOffset;
    unsigned long long _segmentLength;
    NSString *_segmentJobId;
}

@property(readonly, copy, nonatomic) NSString *segmentJobId; // @synthesize segmentJobId=_segmentJobId;
@property(readonly, nonatomic) unsigned long long segmentLength; // @synthesize segmentLength=_segmentLength;
@property(readonly, nonatomic) unsigned long long segmentStartOffset; // @synthesize segmentStartOffset=_segmentStartOffset;
@property(readonly, nonatomic) unsigned long long segmentType; // @synthesize segmentType=_segmentType;
@property(readonly, copy, nonatomic) FBMediaUploadContentSource *contentSource; // @synthesize contentSource=_contentSource;
- (void).cxx_destruct;
- (id)initWithContentSource:(id)arg1 segmentType:(unsigned long long)arg2 segmentStartOffset:(unsigned long long)arg3 segmentLength:(unsigned long long)arg4 segmentJobId:(id)arg5;

@end

