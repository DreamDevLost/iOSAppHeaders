//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGeneratedIntentTarget.h"

@class IGUser, IGUserSession;

@interface IGRAReceiverIntentTarget : FBGeneratedIntentTarget
{
    IGUser *_sender;
    IGUserSession *_userSession;
}

@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGUser *sender; // @synthesize sender=_sender;
- (void).cxx_destruct;
- (id)initWithSender:(id)arg1 userSession:(id)arg2;

@end

