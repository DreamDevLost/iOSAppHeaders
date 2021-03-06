//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGJSONCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSNumber, NSString;

@interface IGTimeSpentInterval : FBValueObject <IGJSONCoding, NSCopying, NSCoding>
{
    NSNumber *_startTime;
    NSNumber *_endTime;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSNumber *endTime; // @synthesize endTime=_endTime;
@property(readonly, copy, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)toJsonDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithStartTime:(id)arg1 endTime:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)elapsedTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

