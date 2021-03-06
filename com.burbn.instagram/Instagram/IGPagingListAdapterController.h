//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListAdapterDataSource.h"

@class IGListAdapter, IGListAdapterScrollingContext, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface IGPagingListAdapterController : NSObject <IGListAdapterDataSource>
{
    long long _initialSize;
    long long _pageSize;
    _Bool _processInitialBatch;
    id <IGListDiffable> _focusItem;
    IGListAdapter *_listAdapter;
    id <IGPagingListAdapterControllerItemProcessing> _processor;
    IGListAdapterScrollingContext *_scrollingContext;
    NSArray *_currentItems;
    long long _focusIndex;
    _Bool _isLoading;
    struct IGPagingFocusOffsets _focusOffsets;
    NSObject<OS_dispatch_queue> *_processingQueue;
    id <IGPagingListAdapterControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGPagingListAdapterControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateFocusOffsets:(struct IGPagingFocusOffsets)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)load:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processBatch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)initWithInitialSize:(long long)arg1 pageSize:(long long)arg2 processInitialBatch:(_Bool)arg3 focusItem:(id)arg4 listAdapter:(id)arg5 processor:(id)arg6 scrollingContext:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

