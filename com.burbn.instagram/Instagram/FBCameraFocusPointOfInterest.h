//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface FBCameraFocusPointOfInterest : FBValueObject <NSCopying, NSCoding>
{
    struct CGPoint _value;
}

@property(readonly, nonatomic) struct CGPoint value; // @synthesize value=_value;
- (id)initWithValue:(struct CGPoint)arg1;

@end

