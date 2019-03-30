//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KFMutatorProtocol.h"

@class NSString;

@interface KFSubdocumentSwapMutator : NSObject <KFMutatorProtocol>
{
    unsigned long long _subdocumentIndex;
    NSString *_layerTag;
}

- (void).cxx_destruct;
- (id)mutateAsset:(id)arg1;
- (id)initWithlayerTag:(id)arg1 subdocumentIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

