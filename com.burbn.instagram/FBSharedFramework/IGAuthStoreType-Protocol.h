//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGSessionData, NSMutableDictionary;

@protocol IGAuthStoreType <NSObject>
- (_Bool)clearSessionDataWithExtras:(NSMutableDictionary *)arg1;
- (IGSessionData *)readSessionDataForAppType:(long long)arg1 withUnarchiverDelegate:(id <NSKeyedUnarchiverDelegate>)arg2;
- (_Bool)writeSessionData:(IGSessionData *)arg1 extras:(NSMutableDictionary *)arg2;
@end

