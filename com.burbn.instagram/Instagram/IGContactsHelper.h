//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGContactsHelper : NSObject
{
}

+ (void)localContactMapForUserPK:(id)arg1 withReaderDelegate:(id)arg2;
+ (void)_addressBookRequestAccessWithDelegate:(id)arg1 userSession:(id)arg2 analyticsModule:(id)arg3 entryPoint:(id)arg4 accessGrantedBlock:(CDUnknownBlockType)arg5;
+ (id)_contactsFromAddressBook:(void *)arg1;
+ (void)_doFetchContactsWithDelegate:(id)arg1 analyticsModule:(id)arg2 entryPoint:(id)arg3;
+ (void)disconnectContactsWithNetworker:(id)arg1 analyticsModule:(id)arg2 userSession:(id)arg3;
+ (_Bool)hasContactPermissionForUserSession:(id)arg1;
+ (void)setContactPermission:(_Bool)arg1 analyticsModule:(id)arg2 entryPoint:(id)arg3 userSession:(id)arg4;
+ (void)fetchContactsWithDelegate:(id)arg1 userSession:(id)arg2 analyticsModule:(id)arg3 entryPoint:(id)arg4 successCallback:(CDUnknownBlockType)arg5;

@end

