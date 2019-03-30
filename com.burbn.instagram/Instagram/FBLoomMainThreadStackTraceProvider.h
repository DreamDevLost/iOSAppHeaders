//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBLoomTraceProvider.h"

@class NSString;

@interface FBLoomMainThreadStackTraceProvider : NSObject <FBLoomTraceProvider>
{
    unsigned int _mainPort;
    id <FBLoomCPUTraceProviderDelegate> _delegate;
}

+ (unsigned long long)eventProviderIdentifier;
@property(nonatomic) __weak id <FBLoomCPUTraceProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)loomTraceDidEndWithContext:(id)arg1 extrasPath:(id)arg2;
- (void)loomTraceWillBeginWithContext:(id)arg1 extrasPath:(id)arg2;
- (_Bool)didTracingSucceed;
- (id)customHeaderFromProviderWithContextInfo:(CDStruct_6238c8e0)arg1;
- (id)initWithMainMachPort:(unsigned int)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
