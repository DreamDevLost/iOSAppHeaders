//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGLoadMoreResponseType.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class IGAssetModel, NSString;

@interface IGSegmentationModel : NSObject <IGLoadMoreResponseType, NSSecureCoding, NSCopying>
{
    _Bool _isFullyAsync;
    IGAssetModel *_execNetModel;
    IGAssetModel *_predictNetModel;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool isFullyAsync; // @synthesize isFullyAsync=_isFullyAsync;
@property(readonly, nonatomic) IGAssetModel *predictNetModel; // @synthesize predictNetModel=_predictNetModel;
@property(readonly, nonatomic) IGAssetModel *execNetModel; // @synthesize execNetModel=_execNetModel;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)maxId;
- (id)initWithExecNetModel:(id)arg1 predictNetModel:(id)arg2 isFullyAsync:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

