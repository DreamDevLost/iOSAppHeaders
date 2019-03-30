//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDate;

@interface IGDiscoveryTopicMuteStatus : FBValueObject <NSCoding, NSCopying>
{
    _Bool _canBeMuted;
    _Bool _isMuted;
    NSDate *_lastLocalMutedTime;
}

@property(readonly, copy, nonatomic) NSDate *lastLocalMutedTime; // @synthesize lastLocalMutedTime=_lastLocalMutedTime;
@property(readonly, nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(readonly, nonatomic) _Bool canBeMuted; // @synthesize canBeMuted=_canBeMuted;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCanBeMuted:(_Bool)arg1 isMuted:(_Bool)arg2 lastLocalMutedTime:(id)arg3;

@end

