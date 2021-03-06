//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface BKBloksNativeComponentReference : NSObject
{
    NSNumber *_clientID;
    NSNumber *_serverID;
}

+ (id)newWithModel:(id)arg1;
+ (id)newWithClientID:(id)arg1 serverID:(id)arg2;
@property(readonly, nonatomic) NSNumber *serverID; // @synthesize serverID=_serverID;
@property(readonly, nonatomic) NSNumber *clientID; // @synthesize clientID=_clientID;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;
- (id)initWithClientID:(id)arg1 serverID:(id)arg2;

@end

