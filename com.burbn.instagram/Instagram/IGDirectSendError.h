//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGDirectSendError : FBValueObject <NSCopying, NSCoding>
{
    long long _code;
    NSString *_domain;
    NSString *_message;
}

+ (id)sendErrorWithErrorCode:(long long)arg1 domain:(id)arg2;
+ (id)sendErrorWithNSError:(id)arg1;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initWithCode:(long long)arg1 domain:(id)arg2 message:(id)arg3;

@end

