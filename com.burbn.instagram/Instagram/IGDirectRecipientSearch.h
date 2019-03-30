//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IGDirectRecipientSearch : NSObject
{
    _Bool _resultIsFiltered;
    NSString *_query;
    NSArray *_recipients;
    NSArray *_recipientsFoundLocally;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType failureHandler; // @synthesize failureHandler=_failureHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
@property(nonatomic) _Bool resultIsFiltered; // @synthesize resultIsFiltered=_resultIsFiltered;
@property(copy, nonatomic) NSArray *recipientsFoundLocally; // @synthesize recipientsFoundLocally=_recipientsFoundLocally;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)searchWithLocalResultList:(id)arg1;
- (id)searchWithResultList:(id)arg1 resultIsFiltered:(_Bool)arg2;
- (id)initWithQuery:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;

@end
