//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMediaUploadJobFactory.h"

@class NSString;

@interface FBMediaUploadJobFactoryImpl : NSObject <FBMediaUploadJobFactory>
{
}

- (id)newUploadJobWithContentSource:(id)arg1 config:(id)arg2 token:(id)arg3 streamAnnouncer:(id)arg4 listener:(id)arg5 eventListener:(id)arg6 networkDispatcher:(id)arg7 queue:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

