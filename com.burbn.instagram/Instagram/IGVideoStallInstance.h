//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGVideoStallInstance : NSObject
{
    unsigned long long _positionMs;
    unsigned long long _startTimeMs;
    unsigned long long _endTimeMs;
}

@property(nonatomic) unsigned long long endTimeMs; // @synthesize endTimeMs=_endTimeMs;
@property(readonly, nonatomic) unsigned long long startTimeMs; // @synthesize startTimeMs=_startTimeMs;
@property(readonly, nonatomic) unsigned long long positionMs; // @synthesize positionMs=_positionMs;
@property(readonly, nonatomic) unsigned long long stallDurationMs;
- (id)initWithPositionMs:(unsigned long long)arg1 startTimeMs:(unsigned long long)arg2;

@end
