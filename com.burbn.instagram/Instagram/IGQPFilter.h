//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGJSONCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGQPFilterTemplateParam, NSArray, NSString;

@interface IGQPFilter : FBValueObject <IGJSONCoding, NSCopying, NSCoding>
{
    _Bool _passesIfNotSupported;
    NSString *_filterType;
    NSString *_unknownAction;
    IGQPFilterTemplateParam *_value;
    NSArray *_extraDatas;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSArray *extraDatas; // @synthesize extraDatas=_extraDatas;
@property(readonly, copy, nonatomic) IGQPFilterTemplateParam *value; // @synthesize value=_value;
@property(readonly, nonatomic) _Bool passesIfNotSupported; // @synthesize passesIfNotSupported=_passesIfNotSupported;
@property(readonly, copy, nonatomic) NSString *unknownAction; // @synthesize unknownAction=_unknownAction;
@property(readonly, copy, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;
- (void).cxx_destruct;
- (id)initWithFilterType:(id)arg1 unknownAction:(id)arg2 passesIfNotSupported:(_Bool)arg3 value:(id)arg4 extraDatas:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

