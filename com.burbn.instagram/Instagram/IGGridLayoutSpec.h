//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface IGGridLayoutSpec : NSObject <NSCopying>
{
    double _aspectRatio;
    unsigned long long _totalNumberOfColumns;
    unsigned long long _numberOfColumns;
}

@property(readonly, nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(readonly, nonatomic) unsigned long long totalNumberOfColumns; // @synthesize totalNumberOfColumns=_totalNumberOfColumns;
@property(readonly, nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)gridDimensionStringRepresentation;
- (struct CGSize)sizeConstrainedToWidth:(double)arg1 interitemSpacing:(double)arg2;
- (id)initWithAspectRatio:(double)arg1 totalNumberOfColumns:(unsigned long long)arg2 numberOfColumns:(unsigned long long)arg3;

@end

