//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGJSONCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGSimpleAction, NSString;

@interface IGGenericSurveyEndingScreenContext : FBValueObject <IGJSONCoding, NSCopying, NSCoding>
{
    unsigned long long _type;
    NSString *_navBarTitle;
    IGSimpleAction *_simpleAction;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) IGSimpleAction *simpleAction; // @synthesize simpleAction=_simpleAction;
@property(readonly, copy, nonatomic) NSString *navBarTitle; // @synthesize navBarTitle=_navBarTitle;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 navBarTitle:(id)arg2 simpleAction:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

