//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGeneratedIntentTarget.h"

@class IGUserSession, NSString;

@interface IGPromoteMediaSelectIntentTarget : FBGeneratedIntentTarget
{
    IGUserSession *_userSession;
    NSString *_entryPointIdentifier;
}

@property(readonly, nonatomic) NSString *entryPointIdentifier; // @synthesize entryPointIdentifier=_entryPointIdentifier;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 entryPointIdentifier:(id)arg2;

@end

