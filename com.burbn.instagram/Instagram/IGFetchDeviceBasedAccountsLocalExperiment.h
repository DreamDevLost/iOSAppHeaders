//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGLocalExperimentProtocol.h"

@class IGLocalExperiment, NSString;

@interface IGFetchDeviceBasedAccountsLocalExperiment : NSObject <IGLocalExperimentProtocol>
{
    IGLocalExperiment *_experiment;
    NSString *_selectedGroupName;
}

@property(retain, nonatomic) NSString *selectedGroupName; // @synthesize selectedGroupName=_selectedGroupName;
@property(retain, nonatomic) IGLocalExperiment *experiment; // @synthesize experiment=_experiment;
- (void).cxx_destruct;
- (id)peekGroupName;
- (id)groupName;
@property(readonly, nonatomic, getter=isEnabledPeek) _Bool enabledPeek;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
