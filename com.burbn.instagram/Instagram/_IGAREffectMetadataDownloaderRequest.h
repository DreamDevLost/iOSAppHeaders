//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAREffectMetadataDownloaderRequestable.h"

@class NSString;

@interface _IGAREffectMetadataDownloaderRequest : NSObject <IGAREffectMetadataDownloaderRequestable>
{
    long long _assetType;
    CDUnknownBlockType _version;
}

@property(readonly, nonatomic) long long assetType; // @synthesize assetType=_assetType;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *version;
- (id)initWithAssetType:(long long)arg1 version:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

