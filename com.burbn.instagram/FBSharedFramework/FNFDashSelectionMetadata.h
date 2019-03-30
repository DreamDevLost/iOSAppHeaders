//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FNFDashFetchRange, FNFDashQualityMetadata, FNFDashRepresentationMetadata, FNFResponseMetadata;

@interface FNFDashSelectionMetadata : NSObject
{
    FNFDashRepresentationMetadata *_selectedRepresentation;
    FNFDashQualityMetadata *_qualityMetadata;
    FNFResponseMetadata *_responseMetadata;
    FNFDashFetchRange *_requestMetadata;
    long long _trackType;
}

@property(readonly, nonatomic) long long trackType; // @synthesize trackType=_trackType;
@property(readonly, nonatomic) FNFDashFetchRange *requestMetadata; // @synthesize requestMetadata=_requestMetadata;
@property(readonly, nonatomic) FNFResponseMetadata *responseMetadata; // @synthesize responseMetadata=_responseMetadata;
@property(readonly, nonatomic) FNFDashQualityMetadata *qualityMetadata; // @synthesize qualityMetadata=_qualityMetadata;
@property(readonly, nonatomic) FNFDashRepresentationMetadata *selectedRepresentation; // @synthesize selectedRepresentation=_selectedRepresentation;
- (void).cxx_destruct;
- (id)selectionMetadataWithRequestMetadata:(id)arg1 responseMetadata:(id)arg2;
- (id)initWithSelectedRepresentation:(id)arg1 qualityMetadata:(id)arg2 requestMetadata:(id)arg3 responseMetadata:(id)arg4 trackType:(long long)arg5;
- (id)initWithSelectedRepresentation:(id)arg1 qualityMetadata:(id)arg2 trackType:(long long)arg3;
- (id)initWithSelectedRepresentation:(id)arg1 trackType:(long long)arg2;

@end

