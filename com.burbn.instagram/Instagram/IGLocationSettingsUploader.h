//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGGraphQLService, NSString;

@interface IGLocationSettingsUploader : NSObject
{
    IGGraphQLService *_graphQLService;
    NSString *_deviceID;
}

- (void).cxx_destruct;
- (void)uploadLocationStorageEnabled:(id)arg1 crossAppSharingEnabled:(id)arg2 source:(id)arg3 entryPoint:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithSession:(id)arg1;
- (id)initWithGraphQLService:(id)arg1 deviceID:(id)arg2;

@end
