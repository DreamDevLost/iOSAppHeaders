//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray;

@interface IGMediaUploadDispatcherConfig : FBValueObject <NSCopying, NSCoding>
{
    long long _maxRetryCount;
    NSArray *_instantRetryStatusCodes;
}

@property(readonly, copy, nonatomic) NSArray *instantRetryStatusCodes; // @synthesize instantRetryStatusCodes=_instantRetryStatusCodes;
@property(readonly, nonatomic) long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMaxRetryCount:(long long)arg1 instantRetryStatusCodes:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
