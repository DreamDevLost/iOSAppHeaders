//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGDirectMutationData, NSDate, NSString;

@interface IGDirectMutationRequest : FBValueObject <NSCopying, NSCoding>
{
    NSString *_mutationId;
    IGDirectMutationData *_mutationData;
    NSDate *_requestCreationTime;
}

@property(readonly, copy, nonatomic) NSDate *requestCreationTime; // @synthesize requestCreationTime=_requestCreationTime;
@property(readonly, copy, nonatomic) IGDirectMutationData *mutationData; // @synthesize mutationData=_mutationData;
@property(readonly, copy, nonatomic) NSString *mutationId; // @synthesize mutationId=_mutationId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMutationId:(id)arg1 mutationData:(id)arg2 requestCreationTime:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end
