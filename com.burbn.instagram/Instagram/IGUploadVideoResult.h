//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary;

@interface IGUploadVideoResult : FBValueObject <NSCopying, NSCoding>
{
    _Bool _hasResponseDict;
    NSDictionary *_responseDict;
}

@property(readonly, copy, nonatomic) NSDictionary *responseDict; // @synthesize responseDict=_responseDict;
@property(readonly, nonatomic) _Bool hasResponseDict; // @synthesize hasResponseDict=_hasResponseDict;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithHasResponseDict:(_Bool)arg1 responseDict:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

