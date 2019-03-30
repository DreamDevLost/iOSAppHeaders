//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray;

@interface IGDirectProfileStackViewConfiguration : FBValueObject <NSCopying, NSCoding>
{
    NSArray *_images;
    long long _limit;
    double _diameter;
    double _overlap;
    double _cutoutWidth;
}

@property(readonly, nonatomic) double cutoutWidth; // @synthesize cutoutWidth=_cutoutWidth;
@property(readonly, nonatomic) double overlap; // @synthesize overlap=_overlap;
@property(readonly, nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(readonly, nonatomic) long long limit; // @synthesize limit=_limit;
@property(readonly, copy, nonatomic) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (id)initWithImages:(id)arg1 limit:(long long)arg2 diameter:(double)arg3 overlap:(double)arg4 cutoutWidth:(double)arg5;

@end

