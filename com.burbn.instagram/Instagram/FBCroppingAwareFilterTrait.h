//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBFilterTrait.h"

@class NSString;

@interface FBCroppingAwareFilterTrait : NSObject <FBFilterTrait>
{
    _Bool _allowsCroppingInput;
}

+ (id)newWithAllowsCroppingInput:(_Bool)arg1;
@property(readonly, nonatomic) _Bool allowsCroppingInput; // @synthesize allowsCroppingInput=_allowsCroppingInput;
- (id)initWithAllowsCroppingInput:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

