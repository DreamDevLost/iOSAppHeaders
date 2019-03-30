//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSNotificationCenter;

@interface FBBugReportData : NSObject
{
    NSMutableDictionary *_dict;
    NSMutableDictionary *_attachmentKeysToPath;
    NSMutableSet *_contextsToUploadWithInitialCreationRequest;
    NSMutableDictionary *_parameters;
    NSMutableDictionary *_infoItems;
    NSNotificationCenter *_notificationCenter;
    CDUnknownBlockType _bufferCapacityConfig;
}

+ (id)sharedBugReportData;
- (void).cxx_destruct;
- (void)initialCreationRequestShouldContainAttachmentInformationForContext:(id)arg1;
- (void)appendToContext:(id)arg1 withFormat:(id)arg2;
- (void)setContentsOfContext:(id)arg1 withFormat:(id)arg2;
- (void)setCapacity:(unsigned long long)arg1 forContext:(id)arg2;
- (void)addInfoItem:(id)arg1 value:(id)arg2;
- (void)addParameter:(id)arg1 value:(id)arg2;
- (void)removeAttachmentByKey:(id)arg1;
- (void)addAttachmentPath:(id)arg1 withKey:(id)arg2;
- (id)contextsToUploadWithInitialCreationRequest;
- (id)allInfoItems;
- (id)allParameters;
- (id)allAttachmentPathsByKey;
- (id)allAttachmentPaths;
- (id)stringForContext:(id)arg1;
- (id)_bufferForContextWhileSynchronized:(id)arg1;
- (id)allContexts;
- (id)initWithNotificationCenter:(id)arg1 bufferCapacityConfig:(CDUnknownBlockType)arg2;

@end

