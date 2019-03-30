//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>;

@interface IGMultiMediaWriter : NSObject
{
    _Bool _useGlobalSerialQueue;
    _Bool _hasBegunWriting;
    NSMutableArray *_items;
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_coordinatorQueue;
}

+ (id)_sharedMultiMediaWriterQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *coordinatorQueue; // @synthesize coordinatorQueue=_coordinatorQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property _Bool hasBegunWriting; // @synthesize hasBegunWriting=_hasBegunWriting;
@property(nonatomic) _Bool useGlobalSerialQueue; // @synthesize useGlobalSerialQueue=_useGlobalSerialQueue;
- (void).cxx_destruct;
- (void)renderWithCompletion:(CDUnknownBlockType)arg1;
- (void)_renderWithPreparedAssets;
- (void)_prepareAssets;
- (void)appendItem:(id)arg1;
- (id)init;

@end

