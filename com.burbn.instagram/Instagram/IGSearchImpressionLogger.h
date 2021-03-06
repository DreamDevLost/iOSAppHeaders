//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionEndingObject.h"

@class IGUserSession, NSMutableDictionary, NSString;

@interface IGSearchImpressionLogger : NSObject <IGUserSessionEndingObject>
{
    IGUserSession *_userSession;
    NSMutableDictionary *_impressions;
}

- (void).cxx_destruct;
- (void)_sendImpressionsLogging;
- (void)userSessionWillEndWithReason:(unsigned long long)arg1;
- (void)searchDidChangeTab;
- (void)searchDidChangeText;
- (void)searchDidExitScreen;
- (void)logImpressionForSearchItem:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

