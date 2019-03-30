//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FNFDashRepresentationMetadata : NSObject
{
    unsigned int _bandwidth;
    NSString *_qualityLabel;
    NSString *_representationId;
    struct CGSize _videoSize;
}

+ (id)metadataForRepresentations:(id)arg1;
@property(readonly, nonatomic) unsigned int bandwidth; // @synthesize bandwidth=_bandwidth;
@property(readonly, nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(readonly, copy, nonatomic) NSString *representationId; // @synthesize representationId=_representationId;
@property(readonly, copy, nonatomic) NSString *qualityLabel; // @synthesize qualityLabel=_qualityLabel;
- (void).cxx_destruct;
- (id)initWithQualityLabel:(id)arg1 representationId:(id)arg2 videoSize:(struct CGSize)arg3 bandwidth:(unsigned int)arg4;
- (id)initWithRepresentation:(id)arg1;

@end
