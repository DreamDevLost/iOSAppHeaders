//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGQPEntity.h"

@class NSString;

@interface IGQPTemplateParameter : IGQPEntity
{
    _Bool _required;
    NSString *_name;
    NSString *_stringValue;
}

@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, nonatomic) _Bool required; // @synthesize required=_required;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isValid;
- (void)parseParameters:(id)arg1;

@end

