//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBSDKUtility : NSObject
{
}

+ (id)SHA256Hash:(id)arg1;
+ (id)SHA256HashData:(id)arg1;
+ (id)SHA256HashString:(id)arg1;
+ (void)stopGCDTimer:(id)arg1;
+ (id)startGCDTimerWithInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
+ (id)URLEncode:(id)arg1;
+ (id)URLDecode:(id)arg1;
+ (id)queryStringWithDictionary:(id)arg1 error:(id *)arg2;
+ (id)dictionaryWithQueryString:(id)arg1;

@end
