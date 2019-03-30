//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBARRemoteAssetModel, NSString;

@interface FBARModelMetadataWithType : FBValueObject <NSCopying, NSCoding>
{
    NSString *_modelType;
    FBARRemoteAssetModel *_remoteModel;
}

@property(readonly, copy, nonatomic) FBARRemoteAssetModel *remoteModel; // @synthesize remoteModel=_remoteModel;
@property(readonly, copy, nonatomic) NSString *modelType; // @synthesize modelType=_modelType;
- (void).cxx_destruct;
- (id)initWithModelType:(id)arg1 remoteModel:(id)arg2;

@end
