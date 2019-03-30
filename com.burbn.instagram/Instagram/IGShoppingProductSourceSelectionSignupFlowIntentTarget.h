//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGeneratedIntentTarget.h"

@class IGUserSession, NSString;

@interface IGShoppingProductSourceSelectionSignupFlowIntentTarget : FBGeneratedIntentTarget
{
    IGUserSession *_userSession;
    NSString *_entryPoint;
    NSString *_priorModule;
    long long _stepperIndex;
    long long _stepperCapacity;
    NSString *_buttonText;
    NSString *_buttonClickRoute;
}

@property(readonly, nonatomic) NSString *buttonClickRoute; // @synthesize buttonClickRoute=_buttonClickRoute;
@property(readonly, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(readonly, nonatomic) long long stepperCapacity; // @synthesize stepperCapacity=_stepperCapacity;
@property(readonly, nonatomic) long long stepperIndex; // @synthesize stepperIndex=_stepperIndex;
@property(readonly, nonatomic) NSString *priorModule; // @synthesize priorModule=_priorModule;
@property(readonly, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 entryPoint:(id)arg2 priorModule:(id)arg3 stepperIndex:(long long)arg4 stepperCapacity:(long long)arg5 buttonText:(id)arg6 buttonClickRoute:(id)arg7;

@end

