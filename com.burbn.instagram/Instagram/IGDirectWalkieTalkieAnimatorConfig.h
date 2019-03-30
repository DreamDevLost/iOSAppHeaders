//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class NSURL;

@interface IGDirectWalkieTalkieAnimatorConfig : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    struct CGPoint _presenting_sourcePoint;
    NSURL *_presenting_profilePicURL;
    struct CGPoint _dismissing_destinationPoint;
}

+ (id)presentingWithSourcePoint:(struct CGPoint)arg1 profilePicURL:(id)arg2;
+ (id)dismissingWithDestinationPoint:(struct CGPoint)arg1;
- (void).cxx_destruct;
- (void)matchPresenting:(CDUnknownBlockType)arg1 dismissing:(CDUnknownBlockType)arg2;

@end

