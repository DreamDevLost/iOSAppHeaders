//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBLoomConfigurable.h"
#import "FBLoomRingBufferReaderDelegate.h"

@class FBLoomRingBufferWriter, FBLoomTraceContext, NSMutableSet, NSNumber, NSString;

@interface FBLoomTraceManager : NSObject <FBLoomRingBufferReaderDelegate, FBLoomConfigurable>
{
    FBLoomRingBufferWriter *_writer;
    struct mutex _mutex;
    NSMutableSet *_traceControllers;
    NSMutableSet *_traceProviders;
    FBLoomTraceContext *_traceContext;
    FBLoomTraceContext *_inMemoryTraceContext;
    int _enabledProviders;
    unsigned long long _configID;
    id <FBLoomInternalExperimentationSource> _experimentSource;
    NSNumber *_maximumTraceDuration;
}

+ (id)JSONKeyForConfiguration;
@property(readonly, nonatomic) NSNumber *maximumTraceDuration; // @synthesize maximumTraceDuration=_maximumTraceDuration;
@property(readonly) __weak id <FBLoomInternalExperimentationSource> experimentSource; // @synthesize experimentSource=_experimentSource;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setTraceControllers:(id)arg1;
- (void)setTraceProviders:(id)arg1;
- (void)invalidateConfiguration;
- (void)updateConfigurationWithDictionary:(id)arg1;
- (void)bufferedReader:(id)arg1 traceDidFail:(long long)arg2;
- (void)bufferedReader:(id)arg1 didTimeoutWithTrace:(long long)arg2;
- (id)customHeadersForProviders:(int)arg1;
- (void)addMobileLabInfo;
- (void)addFinalTraceAnnotations;
- (void)_writeDyldImageMappings:(int)arg1;
- (void)stopInMemoryTrace;
- (id)writeInMemoryTrace:(int)arg1;
- (_Bool)_startInMemoryTraceIfNeeded;
- (_Bool)activateInMemoryTrace:(id)arg1;
- (void)_setEnabledProviders:(int)arg1;
- (id)getCurrentTraceIDTriggeredByQPL:(unsigned int)arg1;
- (id)getCurrentTraceID;
- (_Bool)isInsideTraceTriggeredByQPL:(unsigned int)arg1;
- (_Bool)isInsideTrace;
- (_Bool)isInsideInMemoryTrace;
- (_Bool)_endOrAbortCurrentTrace:(_Bool)arg1;
- (_Bool)abortTraceWithTriggerId:(long long)arg1 controller:(id)arg2;
- (_Bool)stopTraceWithTriggerId:(long long)arg1 controller:(id)arg2;
- (_Bool)activateTrace:(id)arg1;
@property(readonly) unsigned long long configID;
- (void)addTraceController:(id)arg1;
- (void)removeProvider:(id)arg1;
- (void)addProvider:(id)arg1;
- (id)configurableTraceControllers;
- (id)initWithRingBufferWriter:(id)arg1 experimentSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
