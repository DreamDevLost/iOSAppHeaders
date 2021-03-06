//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class NSMutableDictionary, NSString;

@interface IGScriptMessageRegistryAdaptor : NSObject <IGUserSessionObject>
{
    NSMutableDictionary *_registry;
}

- (void).cxx_destruct;
- (id)scriptMessageHandlerForMessageName:(id)arg1;
- (void)registerScriptMessageHandler:(id)arg1 forEventNames:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

