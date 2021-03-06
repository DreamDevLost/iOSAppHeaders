//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray;

@interface IGDirectAudioWaveformViewModel : FBValueObject <NSCopying, NSCoding>
{
    double _maxWidth;
    NSArray *_waveform;
}

@property(readonly, copy, nonatomic) NSArray *waveform; // @synthesize waveform=_waveform;
@property(readonly, nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
- (void).cxx_destruct;
- (id)initWithMaxWidth:(double)arg1 waveform:(id)arg2;

@end

