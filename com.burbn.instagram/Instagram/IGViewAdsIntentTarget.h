//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGeneratedIntentTarget.h"

@class IGUser, IGUserSession;

@interface IGViewAdsIntentTarget : FBGeneratedIntentTarget
{
    IGUserSession *_userSession;
    IGUser *_targetUser;
}

@property(readonly, nonatomic) IGUser *targetUser; // @synthesize targetUser=_targetUser;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 targetUser:(id)arg2;

@end

