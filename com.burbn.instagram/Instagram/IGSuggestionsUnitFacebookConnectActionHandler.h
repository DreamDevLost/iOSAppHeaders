//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSuggestionsUnitActionHandlerProtocol.h"

@class IGSuggestionsUnitLogger, IGUserSession, NSString;

@interface IGSuggestionsUnitFacebookConnectActionHandler : NSObject <IGSuggestionsUnitActionHandlerProtocol>
{
    IGUserSession *_userSession;
    NSString *_module;
    IGSuggestionsUnitLogger *_logger;
    id <IGSuggestionsUnitActionHandlerDelegate> delegate;
}

@property(nonatomic) __weak id <IGSuggestionsUnitActionHandlerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)_onFacebookAuthFailedAtPosition:(unsigned long long)arg1;
- (void)_onFacebookAuthSuccessAtPosition:(unsigned long long)arg1;
- (void)handleActionAtPosition:(unsigned long long)arg1;
- (id)initWithUserSession:(id)arg1 module:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
