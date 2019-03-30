//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, NSURL;

@protocol IGQueueTimeLogging
- (void)endMarkerWithIdentifier:(NSString *)arg1;
- (void)setSourceAsDiskForMarkerWithIdentifier:(NSString *)arg1;
- (void)setSourceAsNetworkForMarkerWithIdentifier:(NSString *)arg1;
- (void)setPrefetchOngoingForMarkerWithIdentifier:(NSString *)arg1;
- (void)startMarkerWithIdentifier:(NSString *)arg1 type:(NSString *)arg2 url:(NSURL *)arg3 module:(NSString *)arg4 currentBandwidth:(double)arg5;
- (_Bool)isTrackingIdentifier:(NSString *)arg1;
- (void)setShouldLogURLs:(_Bool)arg1;
@end

