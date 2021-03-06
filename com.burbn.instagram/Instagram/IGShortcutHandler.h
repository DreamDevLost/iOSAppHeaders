//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class NSString, UIApplication;

@interface IGShortcutHandler : NSObject <IGUserSessionObject>
{
    UIApplication *_application;
}

- (void).cxx_destruct;
- (void)updateWithUserSession:(id)arg1;
- (void)handleShortcutAction:(id)arg1 authenticator:(id)arg2 userSession:(id)arg3;
- (id)initWithApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

