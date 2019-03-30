//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBVideoCaptionParser.h"

@class NSArray, NSString;

@interface FBVideoSRTParser : NSObject <FBVideoCaptionParser>
{
    NSArray *_captions;
}

+ (double)timeIntervalFromString:(id)arg1;
+ (id)parse:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)getCaptionForTime:(double)arg1;
- (id)initWithCaptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
