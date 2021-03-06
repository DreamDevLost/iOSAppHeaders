//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGSoundEffect, IGUserSession;

@interface IGVideoCallSoundEffects : NSObject
{
    IGUserSession *_userSession;
    IGSoundEffect *_currentlyPlayingSoundEffect;
    IGSoundEffect *_ringbackSoundEffect;
    IGSoundEffect *_userJoinSoundEffect;
    IGSoundEffect *_userLeftSoundEffect;
    IGSoundEffect *_endCallSoundEffect;
}

- (void).cxx_destruct;
- (void)stopCurrentSound;
- (void)_playSoundEffect:(id)arg1 volumeMultiplier:(float)arg2;
- (void)playEndCallSound;
- (void)playRingbackSound;
- (void)playLeaveSound;
- (void)playJoinSound;
- (id)initWithUserSession:(id)arg1;

@end

