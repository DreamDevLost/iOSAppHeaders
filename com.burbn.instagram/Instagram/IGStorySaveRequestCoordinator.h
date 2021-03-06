//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStoryOwnStoryMediaLoaderDelegate.h"
#import "IGStorySaveVideoRequestCoordinatorDelegate.h"

@class IGStoryOwnStoryMediaLoader, IGStorySaveVideoRequestCoordinator, IGUserSession, NSString;

@interface IGStorySaveRequestCoordinator : NSObject <IGStorySaveVideoRequestCoordinatorDelegate, IGStoryOwnStoryMediaLoaderDelegate>
{
    NSString *_module;
    IGUserSession *_userSession;
    id <IGStoryItemType> _storyItem;
    IGStoryOwnStoryMediaLoader *_mediaLoader;
    IGStorySaveVideoRequestCoordinator *_videoCoordinator;
    id <IGStorySaveRequestCoordinatorDelegate> _delegate;
    long long _retryCount;
}

@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) __weak id <IGStorySaveRequestCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGStorySaveVideoRequestCoordinator *videoCoordinator; // @synthesize videoCoordinator=_videoCoordinator;
@property(readonly, nonatomic) IGStoryOwnStoryMediaLoader *mediaLoader; // @synthesize mediaLoader=_mediaLoader;
@property(readonly, nonatomic) id <IGStoryItemType> storyItem; // @synthesize storyItem=_storyItem;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (void)saveVideoRequestCoordinatorDidFail:(id)arg1 canRetry:(_Bool)arg2;
- (void)saveVideoRequestCoordinator:(id)arg1 didPrepareVideoData:(id)arg2;
- (void)storyMediaLoader:(id)arg1 didFailCanRetry:(_Bool)arg2;
- (void)storyMediaLoader:(id)arg1 didLoadImage:(id)arg2;
- (void)storyMediaLoader:(id)arg1 didLoadVideoData:(id)arg2;
- (void)_handleFetchFailureCanRetry:(_Bool)arg1;
- (void)fetch;
- (id)initWithItem:(id)arg1 userSession:(id)arg2 delegate:(id)arg3 module:(id)arg4;

@end

