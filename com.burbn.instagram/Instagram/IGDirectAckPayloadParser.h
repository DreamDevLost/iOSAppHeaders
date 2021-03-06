//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectAckPayloadParsing.h"

@class NSString;

@interface IGDirectAckPayloadParser : NSObject <IGDirectAckPayloadParsing>
{
}

+ (id)_stringOrNSNullFromStringRef:(id)arg1;
+ (id)_messageAckFromMultiItemPayloadArray:(id)arg1 statusCode:(long long)arg2 rawResponse:(id)arg3;
+ (id)_messageAckFromDictionary:(id)arg1 statusCode:(long long)arg2 rawResponse:(id)arg3;
- (id)parsePayload:(id)arg1 forResponse:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

