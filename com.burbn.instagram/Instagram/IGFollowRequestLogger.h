//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFollowPeopleLoggerProtocol.h"

@class NSMutableSet, NSString;

@interface IGFollowRequestLogger : NSObject <IGFollowPeopleLoggerProtocol>
{
    NSString *_module;
    NSString *_view;
    NSMutableSet *_set;
    unsigned long long _offset;
}

@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSMutableSet *set; // @synthesize set=_set;
@property(copy, nonatomic) NSString *view; // @synthesize view=_view;
@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (void)_logEvent:(id)arg1 userID:(id)arg2 position:(unsigned long long)arg3 module:(id)arg4 view:(id)arg5;
- (void)logUnblockWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logDeclineFollowRequestWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logAcceptFollowRequestWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logFollowWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logDismissWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logClickWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (void)logImpressionWithUserInfo:(id)arg1 position:(unsigned long long)arg2;
- (id)initWithModule:(id)arg1 view:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

