//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGAudioUploadConfig : FBValueObject <NSCopying, NSCoding>
{
    NSString *_uploadId;
    NSString *_waterfallId;
}

@property(readonly, copy, nonatomic) NSString *waterfallId; // @synthesize waterfallId=_waterfallId;
@property(readonly, copy, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUploadId:(id)arg1 waterfallId:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

