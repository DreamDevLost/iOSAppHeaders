//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMPWorldTrackingDataConsumer.h"

@class NSString;

@interface FBARSLAMDataInput : NSObject <FBMPWorldTrackingDataConsumer>
{
    struct shared_ptr<facebook::arservices::apple::PlatformSLAMDataInput> _cxxInput;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)consumeWorldTrackingData:(id)arg1;
@property(readonly, nonatomic) shared_ref_67afbc20 cxxInput;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

