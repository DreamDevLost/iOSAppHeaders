//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionEndingObject.h"

@class IGFileCoordinator, IGUserDefaults, NSString;

@interface IGReportMemoryCrashReasonsFetcher : NSObject <IGUserSessionEndingObject>
{
    id <IGAPIClient> _networker;
    IGFileCoordinator *_fileCoordinator;
    IGUserDefaults *_sessionUserDefaults;
}

- (void).cxx_destruct;
- (id)_createReasonForDict:(id)arg1;
- (void)_handleSuccess:(id)arg1;
- (void)userSessionWillEndWithReason:(unsigned long long)arg1;
- (void)fetchTopCrashReasons;
- (id)topCrashReasons;
- (id)initWithNetworker:(id)arg1 sessionUserDefaults:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

