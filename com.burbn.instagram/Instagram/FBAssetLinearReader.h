//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FNFMp4StreamingReader.h"

@class FNFDataBlockDistributor, NSString;

@interface FBAssetLinearReader : NSObject <FNFMp4StreamingReader>
{
    FNFDataBlockDistributor *_dataDistributor;
    unsigned long long _offset;
}

- (void).cxx_destruct;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (const char *)bytesAtHead:(long long)arg1;
- (_Bool)hasEnoughDataForBytes:(unsigned long long)arg1;
- (void)moveHead:(unsigned long long)arg1;
- (id)initWithDataDistributor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

