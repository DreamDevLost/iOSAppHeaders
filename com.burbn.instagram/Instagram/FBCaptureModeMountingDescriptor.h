//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface FBCaptureModeMountingDescriptor : NSObject
{
    CDUnknownBlockType _shouldFilterDataForOutput;
    _Bool _shouldLockFilters;
    id <FBMPInput> _input;
    NSArray *_outputs;
    NSArray *_filters;
}

@property(readonly, nonatomic) _Bool shouldLockFilters; // @synthesize shouldLockFilters=_shouldLockFilters;
@property(readonly, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(readonly, nonatomic) NSArray *outputs; // @synthesize outputs=_outputs;
@property(readonly, nonatomic) id <FBMPInput> input; // @synthesize input=_input;
- (void).cxx_destruct;
- (_Bool)shouldFilterDataForOutput:(id)arg1;
- (id)initWithInput:(id)arg1 outputs:(id)arg2 filters:(id)arg3 shouldLockFilters:(_Bool)arg4;
- (id)initWithInput:(id)arg1 outputs:(id)arg2 filters:(id)arg3 shouldLockFilters:(_Bool)arg4 shouldFilterDataForOutput:(CDUnknownBlockType)arg5;

@end

