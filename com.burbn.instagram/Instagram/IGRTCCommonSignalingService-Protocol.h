//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol IGRTCCommonSignalingService
- (id <FBCancelable>)joinWithOfferSessionDescription:(NSString *)arg1 sessionId:(NSString *)arg2 encodingDimension:(struct CGSize)arg3 mediaStatus:(NSDictionary *)arg4 productInfo:(NSDictionary *)arg5 successHandler:(void (^)(NSString *, NSDictionary *))arg6 failureHandler:(void (^)(NSError *))arg7;
@end

