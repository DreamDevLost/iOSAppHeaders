//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAssetModel;

@interface _IGARApplicatorStateController : NSObject
{
    IGAssetModel *_assetModel;
    _Bool _isAREffectApplied;
}

- (void).cxx_destruct;
- (id)arEffectIDForAssetModel:(id)arg1;
- (id)appliedAssetModel;
- (id)persistedAssetModel;
- (void)selectEffectWithAssetModel:(id)arg1;
- (void)selectNoEffect;
- (void)deactivateEffect;

@end

