//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBStateMachine;

@interface IGVideoPlaybackStateMachine : NSObject
{
    FBStateMachine *_stateMachine;
}

- (void).cxx_destruct;
- (_Bool)reasonRequired;
- (_Bool)supportsAudioStateChanged;
- (void)transitionToState:(long long)arg1;
- (_Bool)canTransitionToState:(long long)arg1;
- (long long)currentState;
- (id)initWithConsecutiveSeeksEnabled:(_Bool)arg1;

@end

