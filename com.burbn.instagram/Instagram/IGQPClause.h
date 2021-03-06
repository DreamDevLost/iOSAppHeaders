//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGJSONCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface IGQPClause : FBValueObject <IGJSONCoding, NSCopying, NSCoding>
{
    NSString *_clauseType;
    NSArray *_clauses;
    NSArray *_filters;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(readonly, copy, nonatomic) NSArray *clauses; // @synthesize clauses=_clauses;
@property(readonly, copy, nonatomic) NSString *clauseType; // @synthesize clauseType=_clauseType;
- (void).cxx_destruct;
- (id)initWithClauseType:(id)arg1 clauses:(id)arg2 filters:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

