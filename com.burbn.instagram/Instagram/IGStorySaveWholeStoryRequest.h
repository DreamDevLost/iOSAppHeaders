//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStorySaveRequestCoordinatorDelegate.h"

@class IGStorySaveRequestCoordinator, IGUserSession, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface IGStorySaveWholeStoryRequest : NSObject <IGStorySaveRequestCoordinatorDelegate>
{
    NSString *_module;
    _Bool _hasStartedSave;
    id <IGStorySaveWholeStoryRequestDelegate> _delegate;
    IGUserSession *_userSession;
    NSMutableArray *_remainingItemsToFetch;
    NSMutableArray *_multiMediaItems;
    IGStorySaveRequestCoordinator *_currentCoordinator;
    NSObject<OS_dispatch_queue> *_savingQueue;
    struct CGSize _videoSize;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *savingQueue; // @synthesize savingQueue=_savingQueue;
@property(retain, nonatomic) IGStorySaveRequestCoordinator *currentCoordinator; // @synthesize currentCoordinator=_currentCoordinator;
@property(retain, nonatomic) NSMutableArray *multiMediaItems; // @synthesize multiMediaItems=_multiMediaItems;
@property(retain, nonatomic) NSMutableArray *remainingItemsToFetch; // @synthesize remainingItemsToFetch=_remainingItemsToFetch;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property _Bool hasStartedSave; // @synthesize hasStartedSave=_hasStartedSave;
@property(nonatomic) __weak id <IGStorySaveWholeStoryRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestCoordinator:(id)arg1 didFailWithReason:(long long)arg2;
- (void)requestCoordinator:(id)arg1 didLoadImage:(id)arg2;
- (void)requestCoordinator:(id)arg1 didLoadVideoData:(id)arg2;
- (void)_readyToWrite;
- (void)_processRemainingItems;
- (void)_queueNextItem;
- (void)_failWithError:(id)arg1;
- (id)_errorWithMessage:(id)arg1;
- (void)saveWholeStoryToVideoSize:(struct CGSize)arg1;
- (id)initWithItems:(id)arg1 userSession:(id)arg2 module:(id)arg3;

@end

