//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGJSONCoding.h"
#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGGenericSurveyAnswer : FBValueObject <IGJSONCoding, IGListDiffable, NSCopying, NSCoding>
{
    NSString *_answerID;
    NSString *_text;
    NSString *_nextID;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *nextID; // @synthesize nextID=_nextID;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *answerID; // @synthesize answerID=_answerID;
- (void).cxx_destruct;
- (id)toJsonDictionary;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithAnswerID:(id)arg1 text:(id)arg2 nextID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

