//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface IGGraphQLRequest : NSObject <NSCopying>
{
    _Bool _useDjangoProxy;
    NSString *_queryId;
    NSDictionary *_queryParams;
    id <IGGraphQLParsing> _parser;
    unsigned long long _requestType;
    unsigned long long _schemaType;
    id <IGGraphQLCachePolicy> _cachePolicy;
    NSString *_vcPolicy;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType failHandler; // @synthesize failHandler=_failHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
@property(readonly, copy, nonatomic) NSString *vcPolicy; // @synthesize vcPolicy=_vcPolicy;
@property(readonly, nonatomic) id <IGGraphQLCachePolicy> cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(readonly, nonatomic) _Bool useDjangoProxy; // @synthesize useDjangoProxy=_useDjangoProxy;
@property(readonly, nonatomic) unsigned long long schemaType; // @synthesize schemaType=_schemaType;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(readonly, nonatomic) id <IGGraphQLParsing> parser; // @synthesize parser=_parser;
@property(readonly, copy, nonatomic) NSDictionary *queryParams; // @synthesize queryParams=_queryParams;
@property(readonly, copy, nonatomic) NSString *queryId; // @synthesize queryId=_queryId;
- (void).cxx_destruct;
- (id)requestWithFailHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_isEqualToRequest:(id)arg1;
- (_Bool)isCacheValidForObject:(id)arg1;
- (void)successWithResult:(id)arg1;
- (void)failWithError:(id)arg1;
- (id)initRequestWithQueryId:(id)arg1 queryParams:(id)arg2 requestType:(unsigned long long)arg3 schemaType:(unsigned long long)arg4 useDjangoProxy:(_Bool)arg5 vcPolicy:(id)arg6 parser:(id)arg7 cachePolicy:(id)arg8 successHandler:(CDUnknownBlockType)arg9 failHandler:(CDUnknownBlockType)arg10;

@end

