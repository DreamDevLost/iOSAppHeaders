//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGQPActionHandlerProtocol.h"

@class IGUserSession, NSString;

@interface IGQPCommentControlActionHandler : NSObject <IGQPActionHandlerProtocol>
{
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)handleActionURL:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

