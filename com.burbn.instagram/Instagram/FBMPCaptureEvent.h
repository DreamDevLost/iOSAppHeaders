//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMPData.h"

@class NSString;

@interface FBMPCaptureEvent : NSObject <FBMPData>
{
    unsigned char _type;
}

+ (id)newWithType:(unsigned char)arg1;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(unsigned char)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

