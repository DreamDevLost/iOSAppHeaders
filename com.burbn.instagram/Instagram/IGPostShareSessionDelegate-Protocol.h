//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGPostShareSession, IGPostShareSessionContext, NSDictionary, NSString;

@protocol IGPostShareSessionDelegate <NSObject>
- (void)postShareSession:(IGPostShareSession *)arg1 shareId:(NSString *)arg2 didUpdateWithStatus:(long long)arg3 serverResponse:(NSDictionary *)arg4;
- (void)postShareSession:(IGPostShareSession *)arg1 didUpdateWithContext:(IGPostShareSessionContext *)arg2;
@end

