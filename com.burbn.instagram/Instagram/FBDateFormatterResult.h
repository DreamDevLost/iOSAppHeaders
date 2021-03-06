//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FBDateFormatterResult : NSObject
{
    NSString *_string;
    NSString *_accessibleString;
    long long _rule;
}

+ (id)compositeFormatResultWithString:(id)arg1 accessibleString:(id)arg2;
+ (id)postFormatResultWithString:(id)arg1 accessibleString:(id)arg2;
+ (id)preFormatResultWithString:(id)arg1 accessibleString:(id)arg2;
@property(readonly, nonatomic) long long rule; // @synthesize rule=_rule;
@property(readonly, copy, nonatomic) NSString *accessibleString; // @synthesize accessibleString=_accessibleString;
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)initWithString:(id)arg1 accessibleString:(id)arg2 rule:(long long)arg3;

@end

