//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface IGHTTPResponse : NSObject
{
    long long _statusCode;
    NSDictionary *_allHeaderFields;
}

@property(readonly, copy, nonatomic) NSDictionary *allHeaderFields; // @synthesize allHeaderFields=_allHeaderFields;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;
- (id)description;
- (double)networkRTT;
- (long long)contentLength;
- (long long)rangeContentLength;
- (id)initWithStatusCode:(long long)arg1 headerFields:(id)arg2;

@end
