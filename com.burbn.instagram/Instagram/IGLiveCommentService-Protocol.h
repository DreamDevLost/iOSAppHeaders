//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol IGLiveCommentService
@property(nonatomic) __weak id <IGLiveCommentServiceDelegate> delegate;
- (void)updateWithQueueSize:(unsigned long long)arg1;
- (void)stop;
- (void)start;
@end

