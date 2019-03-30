//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSArray;

@interface IGShimmeringGridModel : NSObject <IGListDiffable>
{
    _Bool _shimmering;
    NSArray *_pattern;
    struct UIEdgeInsets _contentInset;
    struct IGGridLayoutConfiguration _layoutConfiguration;
}

@property(readonly, nonatomic) _Bool shimmering; // @synthesize shimmering=_shimmering;
@property(readonly, nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, copy, nonatomic) NSArray *pattern; // @synthesize pattern=_pattern;
@property(readonly, nonatomic) struct IGGridLayoutConfiguration layoutConfiguration; // @synthesize layoutConfiguration=_layoutConfiguration;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
- (id)initWithLayoutConfiguration:(struct IGGridLayoutConfiguration)arg1 pattern:(id)arg2 contentInset:(struct UIEdgeInsets)arg3 shimmering:(_Bool)arg4;

@end

