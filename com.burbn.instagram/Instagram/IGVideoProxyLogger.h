//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGVideoProxyLogger : NSObject
{
}

+ (void)logResourceLoaderCancelWithVideoID:(id)arg1 URL:(id)arg2 range:(struct _NSRange)arg3 reason:(long long)arg4;
+ (void)logResourceLoaderLoadEndWithVideoID:(id)arg1 URL:(id)arg2 range:(struct _NSRange)arg3 reason:(long long)arg4;
+ (void)logResourceLoaderLoadBeginWithVideoID:(id)arg1 URL:(id)arg2 range:(struct _NSRange)arg3 reason:(long long)arg4;
+ (void)logMediaRequestWithVideoID:(id)arg1 URL:(id)arg2 range:(struct _NSRange)arg3 reason:(long long)arg4;

@end
