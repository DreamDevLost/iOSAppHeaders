//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGGridLayoutSpec, NSDictionary, NSString;

@interface IGDiscoverySingleRowSectionModel : FBValueObject <NSCopying, NSCoding>
{
    _Bool _videoAutoplayEnabled;
    NSString *_layoutType;
    NSDictionary *_layoutContentDict;
    IGGridLayoutSpec *_gridLayoutSpec;
}

@property(readonly, nonatomic) _Bool videoAutoplayEnabled; // @synthesize videoAutoplayEnabled=_videoAutoplayEnabled;
@property(readonly, copy, nonatomic) IGGridLayoutSpec *gridLayoutSpec; // @synthesize gridLayoutSpec=_gridLayoutSpec;
@property(readonly, copy, nonatomic) NSDictionary *layoutContentDict; // @synthesize layoutContentDict=_layoutContentDict;
@property(readonly, copy, nonatomic) NSString *layoutType; // @synthesize layoutType=_layoutType;
- (void).cxx_destruct;
- (id)initWithLayoutType:(id)arg1 layoutContentDict:(id)arg2 gridLayoutSpec:(id)arg3 videoAutoplayEnabled:(_Bool)arg4;

@end
