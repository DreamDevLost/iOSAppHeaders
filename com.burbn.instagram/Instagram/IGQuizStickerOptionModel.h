//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGJSONCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGQuizStickerOptionModel : FBValueObject <IGJSONCoding, NSCopying, NSCoding>
{
    NSString *_text;
    unsigned long long _count;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)toJsonDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 count:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
