//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface IGSSIMResult : FBValueObject <NSCopying, NSCoding>
{
    double _ssim;
    CDStruct_1b6d18a9 _timestamp;
}

@property(readonly, nonatomic) double ssim; // @synthesize ssim=_ssim;
@property(readonly, nonatomic) CDStruct_1b6d18a9 timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithTimestamp:(CDStruct_1b6d18a9)arg1 ssim:(double)arg2;

@end
