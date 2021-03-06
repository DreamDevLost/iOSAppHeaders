//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGSpacingModel : NSObject
{
    double _offset;
    double _size;
    double _minimum;
    double _maximum;
}

+ (id)fromJSON:(id)arg1;
@property(readonly, nonatomic) double maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) double minimum; // @synthesize minimum=_minimum;
@property(readonly, nonatomic) double size; // @synthesize size=_size;
@property(readonly, nonatomic) double offset; // @synthesize offset=_offset;
- (double)spacingForBrushSize:(double)arg1;
- (id)_initWithJSON:(id)arg1;

@end

