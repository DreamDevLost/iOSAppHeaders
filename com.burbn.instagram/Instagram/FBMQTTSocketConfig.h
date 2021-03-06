//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface FBMQTTSocketConfig : FBValueObject <NSCopying, NSCoding>
{
    _Bool _keepPersistentConnection;
    int _voipKeepAliveTime;
    int _foregroundKeepAliveTime;
}

@property(readonly, nonatomic) int foregroundKeepAliveTime; // @synthesize foregroundKeepAliveTime=_foregroundKeepAliveTime;
@property(readonly, nonatomic) int voipKeepAliveTime; // @synthesize voipKeepAliveTime=_voipKeepAliveTime;
@property(readonly, nonatomic) _Bool keepPersistentConnection; // @synthesize keepPersistentConnection=_keepPersistentConnection;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithKeepPersistentConnection:(_Bool)arg1 voipKeepAliveTime:(int)arg2 foregroundKeepAliveTime:(int)arg3;
- (id)initWithCoder:(id)arg1;

@end

