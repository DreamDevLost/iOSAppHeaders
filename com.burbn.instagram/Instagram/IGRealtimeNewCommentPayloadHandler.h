//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGRealtimeServerPayloadHandler.h"

@class IGUserSession, NSString;

@interface IGRealtimeNewCommentPayloadHandler : NSObject <IGRealtimeServerPayloadHandler>
{
    NSString *_mediaId;
    IGUserSession *_userSession;
    id <IGRealtimeNewCommentPayloadHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGRealtimeNewCommentPayloadHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handlePayload:(id)arg1;
- (id)initWithMediaId:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

