//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FBPremiumVideoAdSRTCaption : NSObject
{
    double _from;
    double _to;
    NSString *_caption;
}

@property(readonly, copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(readonly, nonatomic) double to; // @synthesize to=_to;
@property(readonly, nonatomic) double from; // @synthesize from=_from;
- (void).cxx_destruct;
- (id)initWithCaption:(id)arg1 from:(double)arg2 to:(double)arg3;

@end

