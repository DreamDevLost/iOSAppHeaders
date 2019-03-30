//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGJSONCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGTVAdMetadata : FBValueObject <IGJSONCoding, NSCopying, NSCoding>
{
    _Bool _canSkip;
    long long _canSkipAfterMilliseconds;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) long long canSkipAfterMilliseconds; // @synthesize canSkipAfterMilliseconds=_canSkipAfterMilliseconds;
@property(readonly, nonatomic) _Bool canSkip; // @synthesize canSkip=_canSkip;
- (id)toJsonDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCanSkip:(_Bool)arg1 canSkipAfterMilliseconds:(long long)arg2;
- (double)canSkipAfter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
