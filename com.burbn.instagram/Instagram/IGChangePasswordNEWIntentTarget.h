//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGeneratedIntentTarget.h"

@class IGUserSession;

@interface IGChangePasswordNEWIntentTarget : FBGeneratedIntentTarget
{
    IGUserSession *_userSession;
    unsigned long long _type;
    id <IGChangePasswordViewControllerNEWDelegate> _delegate;
}

@property(readonly, nonatomic) id <IGChangePasswordViewControllerNEWDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 type:(unsigned long long)arg2 delegate:(id)arg3;

@end

