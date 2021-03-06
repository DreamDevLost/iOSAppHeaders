//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface IGLeadGenDependentQuestionDynamicInfo : FBValueObject <NSCopying, NSCoding>
{
    NSString *_customizedToken;
    NSArray *_nextQuestionChoices;
    NSString *_value;
}

@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSArray *nextQuestionChoices; // @synthesize nextQuestionChoices=_nextQuestionChoices;
@property(readonly, copy, nonatomic) NSString *customizedToken; // @synthesize customizedToken=_customizedToken;
- (void).cxx_destruct;
- (id)initWithCustomizedToken:(id)arg1 nextQuestionChoices:(id)arg2 value:(id)arg3;

@end

