//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface IGFilter : NSObject <NSSecureCoding>
{
    struct CGSize _destinationSize;
    CDStruct_1b6d18a9 _mediaTime;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) struct CGSize destinationSize; // @synthesize destinationSize=_destinationSize;
@property(nonatomic) CDStruct_1b6d18a9 mediaTime; // @synthesize mediaTime=_mediaTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)render:(id)arg1 to:(id)arg2;
- (id)init;

@end

