//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KFInputManager, KFInteractivityListenerAnnouncer, KFProgressMonitor;

@interface KFInteractivityToolbox : NSObject
{
    KFInteractivityListenerAnnouncer *_announcer;
    KFInputManager *_inputManager;
    id <KFAnimationPlaybackControllerProtocol> _animationPlaybackController;
    id <KFMutationCreatorProtocol> _mutationCreator;
    KFProgressMonitor *_progressMonitor;
}

@property(readonly, nonatomic) KFProgressMonitor *progressMonitor; // @synthesize progressMonitor=_progressMonitor;
@property(readonly, nonatomic) id <KFMutationCreatorProtocol> mutationCreator; // @synthesize mutationCreator=_mutationCreator;
@property(readonly, nonatomic) __weak id <KFAnimationPlaybackControllerProtocol> animationPlaybackController; // @synthesize animationPlaybackController=_animationPlaybackController;
@property(readonly, nonatomic) KFInputManager *inputManager; // @synthesize inputManager=_inputManager;
@property(readonly, nonatomic) KFInteractivityListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
- (void).cxx_destruct;
- (id)initWithAnnouncer:(id)arg1 inputManager:(id)arg2 animationPlaybackController:(id)arg3 mutationCreator:(id)arg4 progressMonitor:(id)arg5;

@end
