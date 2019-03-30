//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding.h"
#import "NSCopying.h"

@interface IGVideoPlaybackAbrDecision : FBValueObject <NSCopying, NSCoding>
{
    long long _decision;
    unsigned long long _time;
}

@property(readonly, nonatomic) unsigned long long time; // @synthesize time=_time;
@property(readonly, nonatomic) long long decision; // @synthesize decision=_decision;
- (id)initWithDecision:(long long)arg1 time:(unsigned long long)arg2;

@end

