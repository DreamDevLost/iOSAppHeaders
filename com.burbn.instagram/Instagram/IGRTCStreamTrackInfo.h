//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGRTCStreamTrackInfo : FBValueObject <NSCopying, NSCoding>
{
    NSString *_associatedStreamId;
    long long _trackType;
}

@property(readonly, nonatomic) long long trackType; // @synthesize trackType=_trackType;
@property(readonly, copy, nonatomic) NSString *associatedStreamId; // @synthesize associatedStreamId=_associatedStreamId;
- (void).cxx_destruct;
- (id)initWithAssociatedStreamId:(id)arg1 trackType:(long long)arg2;

@end

