//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface FBARAssetIdentifier : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_identifier;
    NSString *_md5Hash;
    NSString *_GraphQLID;
    NSString *_ID;
    NSString *_cacheKey;
}

+ (_Bool)supportsSecureCoding;
+ (id)identifierWithString:(id)arg1 assetGraphQLID:(id)arg2 effectInstanceID:(id)arg3 cacheKey:(id)arg4;
@property(readonly, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(readonly, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(readonly, nonatomic) NSString *GraphQLID; // @synthesize GraphQLID=_GraphQLID;
- (void).cxx_destruct;
- (id)to_be_removed_rawIdentifier;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *MD5Hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithString:(id)arg1 assetGraphQLID:(id)arg2 effectInstanceID:(id)arg3 cacheKey:(id)arg4;

@end

