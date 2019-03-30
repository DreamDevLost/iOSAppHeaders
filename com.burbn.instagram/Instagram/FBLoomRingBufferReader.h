//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBLoomFileLogWriter, FBLoomTraceManager;

@interface FBLoomRingBufferReader : NSObject
{
    _Bool _isRecordingATrace;
    _Bool _enabled;
    long long _currentTraceID;
    int _currentTraceTriggerQPLID;
    // Error parsing type: ^{LockFreeRingBuffer<facebook::dextr::FBLoomLogEntry, std::atomic>=I{unique_ptr<folly::detail::RingBufferSlot<facebook::dextr::FBLoomLogEntry, atomic> [], std::__1::default_delete<folly::detail::RingBufferSlot<facebook::dextr::FBLoomLogEntry, atomic> []> >={__compressed_pair<folly::detail::RingBufferSlot<facebook::dextr::FBLoomLogEntry, atomic> *, std::__1::default_delete<folly::detail::RingBufferSlot<facebook::dextr::FBLoomLogEntry, atomic> []> >=^{RingBufferSlot<facebook::dextr::FBLoomLogEntry, atomic>}}}{atomic<unsigned long long>=AQ}}, name: _ringBuffer
    shared_ptr_b7cf6321 _wakeupQueue;
    FBLoomFileLogWriter *_logWriter;
    FBLoomTraceManager *_manager;
    int _activeInMemoryProviders;
    id <FBLoomRingBufferReaderDelegate> _delegate;
    id <FBLoomRingBufferReaderDataSource> _dataSource;
}

@property(nonatomic) __weak id <FBLoomRingBufferReaderDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <FBLoomRingBufferReaderDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)run:(id)arg1;
- (void)_writeInMemoryTrace:(struct FBLoomLogEntry)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)beginReadingRingBuffer;
-     // Error parsing type: @48@0:8^{LockFreeRingBuffer<facebook::dextr::FBLoomLogEntry, std::atomic>=I{unique_ptr<folly::detail::RingBufferSlot<facebook::dextr::FBLoomLogEntry, atomic> [], std::__1::default_delete<folly::detail::RingBufferSlot<facebook::dextr::FBLoomLogEntry, atomic> []> >={__compressed_pair<folly::detail::RingBufferSlot<facebook::dextr::FBLoomLogEntry, atomic> *, std::__1::default_delete<folly::detail::RingBufferSlot<facebook::dextr::FBLoomLogEntry, atomic> []> >=^{RingBufferSlot<facebook::dextr::FBLoomLogEntry, atomic>}}}{atomic<unsigned long long>=AQ}}16{shared_ptr<facebook::FBBlockingQueue<folly::LockFreeRingBuffer<facebook::dextr::FBLoomLogEntry, std::atomic>::Cursor> >=^{FBBlockingQueue<folly::LockFreeRingBuffer<facebook::dextr::FBLoomLogEntry, std::atomic>::Cursor>}^{__shared_weak_count}}24@40, name: initWithRingBuffer:wakeupQueue:traceManager:

@end
