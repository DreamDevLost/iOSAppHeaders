//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGRequestToken, IGUserSession;

@interface IGShoppingPDPProductGroupNetworker : NSObject
{
    IGUserSession *_userSession;
    IGRequestToken *_activeRequestToken;
    long long _fetchState;
    id <IGShoppingPDPProductGroupNetworkerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGShoppingPDPProductGroupNetworkerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long fetchState; // @synthesize fetchState=_fetchState;
- (void).cxx_destruct;
- (void)_handleRequestCancellation;
- (void)_handleRequestFailureWithError:(id)arg1;
- (void)_handleRequestSuccessWithProductGroup:(id)arg1;
- (void)cancelRequest;
- (void)fetchProductGroupForProductItem:(id)arg1 merchant:(id)arg2;
- (id)initWithUserSession:(id)arg1;

@end

