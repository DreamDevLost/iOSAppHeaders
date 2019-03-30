//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying.h"

@class NSString;

@interface FBLanguageNameFormat : FBValueObject <NSCopying>
{
    _Bool _shortNameIsFullName;
    _Bool _lastNameFirst;
    NSString *_nameSeparator;
}

@property(readonly, copy, nonatomic) NSString *nameSeparator; // @synthesize nameSeparator=_nameSeparator;
@property(readonly, nonatomic) _Bool lastNameFirst; // @synthesize lastNameFirst=_lastNameFirst;
@property(readonly, nonatomic) _Bool shortNameIsFullName; // @synthesize shortNameIsFullName=_shortNameIsFullName;
- (void).cxx_destruct;
- (id)initWithShortNameIsFullName:(_Bool)arg1 lastNameFirst:(_Bool)arg2 nameSeparator:(id)arg3;

@end
