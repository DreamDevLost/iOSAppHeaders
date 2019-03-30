//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDiscoveryGridItem.h"
#import "IGListDiffable.h"

@class IGGridLayoutSpec, IGHashtagModel, NSString;

@interface IGDiscoverySuggestedHashtagPivotModel : NSObject <IGDiscoveryGridItem, IGListDiffable>
{
    NSString *_identifier;
    IGHashtagModel *_hashtagModel;
    NSString *_title;
    IGGridLayoutSpec *_gridLayoutSpec;
}

@property(readonly, nonatomic) IGGridLayoutSpec *gridLayoutSpec; // @synthesize gridLayoutSpec=_gridLayoutSpec;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) IGHashtagModel *hashtagModel; // @synthesize hashtagModel=_hashtagModel;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)diffIdentifier;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithHashtagModel:(id)arg1 title:(id)arg2 pivotIdentifier:(id)arg3 gridLayoutSpec:(id)arg4;

@end
