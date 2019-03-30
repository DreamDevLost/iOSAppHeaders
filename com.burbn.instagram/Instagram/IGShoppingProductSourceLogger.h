//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession, NSDictionary, NSString;

@interface IGShoppingProductSourceLogger : NSObject
{
    IGUserSession *_userSession;
    NSString *_module;
    NSDictionary *_defaultExtras;
    NSString *_priorModule;
}

@property(readonly, nonatomic) NSString *priorModule; // @synthesize priorModule=_priorModule;
@property(readonly, nonatomic) NSString *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (id)_eventWithSuffix:(id)arg1 extras:(id)arg2;
- (id)_eventWithName:(id)arg1 extras:(id)arg2;
- (void)_logCatalogSelectionForSuffix:(id)arg1 catalogType:(id)arg2 catalogId:(id)arg3 catalogName:(id)arg4 errorMessage:(id)arg5;
- (void)logSelectionFailureWithCatalogType:(id)arg1 catalogId:(id)arg2 catalogName:(id)arg3 errorMessage:(id)arg4;
- (void)logSelectionSuccessWithCatalogType:(id)arg1 catalogId:(id)arg2 catalogName:(id)arg3;
- (void)logSelectionStartWithCatalogType:(id)arg1 catalogId:(id)arg2 catalogName:(id)arg3;
- (void)logLoadMoreFailureForCatalogType:(id)arg1 errorMessage:(id)arg2;
- (void)logLoadMoreSuccessForCatalogType:(id)arg1;
- (void)logLoadMoreStartForCatalogType:(id)arg1;
- (void)logLoadFailureWithErrorMessage:(id)arg1;
- (void)logLoadSuccess;
- (void)logLoadStart;
- (id)initWithUserSession:(id)arg1 pk:(id)arg2 module:(id)arg3 priorModule:(id)arg4 waterfallId:(id)arg5 entryPoint:(id)arg6;

@end

