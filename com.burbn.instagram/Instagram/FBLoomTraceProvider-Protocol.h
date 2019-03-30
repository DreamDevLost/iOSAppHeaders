//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBLoomTraceContext, NSString, NSURL;

@protocol FBLoomTraceProvider <NSObject>
+ (unsigned long long)eventProviderIdentifier;
- (NSString *)customHeaderFromProviderWithContextInfo:(CDStruct_6238c8e0)arg1;
- (_Bool)loomTraceDidEndWithContext:(FBLoomTraceContext *)arg1 extrasPath:(NSURL *)arg2;
- (void)loomTraceWillBeginWithContext:(FBLoomTraceContext *)arg1 extrasPath:(NSURL *)arg2;
@end
