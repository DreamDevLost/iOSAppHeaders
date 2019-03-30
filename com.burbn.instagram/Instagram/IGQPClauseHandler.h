//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGQPClause, IGQPFilterHandlersHelper, IGQPPromotion, NSArray, NSString;

@interface IGQPClauseHandler : NSObject
{
    IGQPClause *_clause;
    NSArray *_subClauseHandlers;
    IGQPPromotion *_promotion;
    NSString *_surfaceID;
    IGQPFilterHandlersHelper *_filterHandlerHelper;
}

- (void).cxx_destruct;
- (_Bool)_passesClauseWithContext:(id)arg1 error:(id *)arg2;
- (_Bool)passesClauseWithContext:(id)arg1 error:(id *)arg2;
- (id)initWithClause:(id)arg1 promotion:(id)arg2 surfaceID:(id)arg3 filterHandlerHelper:(id)arg4;

@end

