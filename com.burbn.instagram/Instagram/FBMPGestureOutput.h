//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMPSingleOutput.h"

@interface FBMPGestureOutput : FBMPSingleOutput
{
    CDUnknownBlockType _callback;
}

+ (id)newGestureOutputWithCallback:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)consume:(id)arg1 metadata:(struct FBMPDataMetadata)arg2;
- (id)initWithCallback:(CDUnknownBlockType)arg1;
- (id)initWithGestureType:(Class)arg1 callback:(CDUnknownBlockType)arg2;

@end
