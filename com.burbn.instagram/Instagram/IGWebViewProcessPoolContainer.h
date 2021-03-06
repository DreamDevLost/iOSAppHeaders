//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBWebViewProcessPoolContaining.h"

@class NSString;

@interface IGWebViewProcessPoolContainer : NSObject <FBWebViewProcessPoolContaining>
{
    CDUnknownBlockType _invalidationHandler;
}

+ (id)sharedWebViewProcessPoolContainer;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void).cxx_destruct;
- (void)invalidate;
- (void)registerHandlerToBeCalledOnSessionInvalidation:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

