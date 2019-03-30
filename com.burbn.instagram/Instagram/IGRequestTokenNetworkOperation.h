//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGNetworkOperation.h"

@class IGRequestToken, NSString, NSURL;

@interface IGRequestTokenNetworkOperation : NSObject <IGNetworkOperation>
{
    NSURL *_url;
    NSString *_requestRangeHeader;
    IGRequestToken *_requestToken;
    id _cancellationIdentifier;
}

@property(nonatomic) __weak id cancellationIdentifier; // @synthesize cancellationIdentifier=_cancellationIdentifier;
@property(retain, nonatomic) IGRequestToken *requestToken; // @synthesize requestToken=_requestToken;
@property(retain, nonatomic) NSString *requestRangeHeader; // @synthesize requestRangeHeader=_requestRangeHeader;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (double)requestDownloadProgress;
- (id)networkMonitorLabel;
- (long long)queuePriority;
- (_Bool)isExecuting;

@end
