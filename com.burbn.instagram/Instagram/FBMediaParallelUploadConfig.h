//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying.h"

@interface FBMediaParallelUploadConfig : FBValueObject <NSCopying>
{
    unsigned long long _maxUploadJobsInflight;
    unsigned long long _maxUploadJobsSending;
}

@property(readonly, nonatomic) unsigned long long maxUploadJobsSending; // @synthesize maxUploadJobsSending=_maxUploadJobsSending;
@property(readonly, nonatomic) unsigned long long maxUploadJobsInflight; // @synthesize maxUploadJobsInflight=_maxUploadJobsInflight;
- (id)initWithMaxUploadJobsInflight:(unsigned long long)arg1 maxUploadJobsSending:(unsigned long long)arg2;

@end

