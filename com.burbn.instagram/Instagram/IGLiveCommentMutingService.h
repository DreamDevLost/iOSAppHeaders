//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGLiveCommentMutingService : NSObject
{
    id <IGLiveCommentMutingServiceDelegate> _delegate;
    id <IGAPIClient> _networker;
    NSString *_mediaId;
}

@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(nonatomic) __weak id <IGLiveCommentMutingServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)unmuteComments;
- (void)muteComments;
- (id)initWithMediaId:(id)arg1 networker:(id)arg2;

@end
