//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserDefaults, IGUserSession;

@interface IGConnectContactsDismissManager : NSObject
{
    IGUserSession *_userSession;
    IGUserDefaults *_userSessionDefaults;
}

- (void).cxx_destruct;
- (void)connectContactsOptionDismissedOnFollowList:(long long)arg1;
- (_Bool)shouldShowConnectContactsOptionBasedOnLastDismissedOnFollowList:(long long)arg1;
- (id)initWithUserSession:(id)arg1;

@end

