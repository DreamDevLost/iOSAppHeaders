//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, NSURL;

@protocol FBLoomUploadNetworkSourceDelegate
- (void)loomUploadNetworkSource:(id <FBLoomUploadNetworkSource>)arg1 didCancelUploadTraceFile:(NSURL *)arg2;
- (void)loomUploadNetworkSource:(id <FBLoomUploadNetworkSource>)arg1 didFailToUploadTraceFile:(NSURL *)arg2 withError:(NSError *)arg3;
- (void)loomUploadNetworkSource:(id <FBLoomUploadNetworkSource>)arg1 didSuccessfullyUploadTraceFile:(NSURL *)arg2 withResponse:(id)arg3;
@end

