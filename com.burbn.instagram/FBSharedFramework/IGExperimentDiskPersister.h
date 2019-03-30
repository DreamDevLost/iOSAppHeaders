//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeaturePersisting.h"

@class NSString, NSURL;

@interface IGExperimentDiskPersister : NSObject <IGFeaturePersisting>
{
    NSURL *_fileURL;
}

- (void).cxx_destruct;
- (id)readFeaturePayloadWithError:(id *)arg1;
- (_Bool)writeFeaturePayload:(id)arg1 error:(id *)arg2;
- (id)initWithFileURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

