//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGGDPRConsentContext : NSObject
{
    NSString *_entryPoint;
    NSString *_userState;
    NSString *_waterfallID;
}

- (void).cxx_destruct;
- (_Bool)isUnderBlocked;
- (_Bool)isNewUser;
- (id)waterfallID;
- (id)userState;
- (id)entryPoint;
- (id)initWithEntryPoint:(id)arg1 userState:(id)arg2 waterfallID:(id)arg3;

@end
