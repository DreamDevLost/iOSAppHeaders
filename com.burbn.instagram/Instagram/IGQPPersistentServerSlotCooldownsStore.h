//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession;

@interface IGQPPersistentServerSlotCooldownsStore : NSObject
{
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)writeFetchedDate:(id)arg1;
- (id)lastFetched;
- (struct NSDictionary *)persistedServerCooldowns;
- (void)writeServerSlotCooldowns:(struct NSDictionary *)arg1;
- (id)initWithUserSession:(id)arg1;

@end

