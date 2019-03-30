//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSUserDefaults.h"

#import "IGAuthStoreType.h"

@class NSString;

@interface NSUserDefaults (IGAuthStoreType) <IGAuthStoreType>
- (_Bool)clearSessionDataWithExtras:(id)arg1;
- (id)readSessionDataForAppType:(long long)arg1 withUnarchiverDelegate:(id)arg2;
- (_Bool)writeSessionData:(id)arg1 extras:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
