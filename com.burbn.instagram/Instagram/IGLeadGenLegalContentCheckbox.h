//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGLeadGenLegalContentCheckbox : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isCheckedByDefault;
    _Bool _isRequired;
    NSString *_checkboxBody;
    NSString *_tokenKey;
}

@property(readonly, copy, nonatomic) NSString *tokenKey; // @synthesize tokenKey=_tokenKey;
@property(readonly, nonatomic) _Bool isRequired; // @synthesize isRequired=_isRequired;
@property(readonly, nonatomic) _Bool isCheckedByDefault; // @synthesize isCheckedByDefault=_isCheckedByDefault;
@property(readonly, copy, nonatomic) NSString *checkboxBody; // @synthesize checkboxBody=_checkboxBody;
- (void).cxx_destruct;
- (id)initWithCheckboxBody:(id)arg1 isCheckedByDefault:(_Bool)arg2 isRequired:(_Bool)arg3 tokenKey:(id)arg4;

@end
