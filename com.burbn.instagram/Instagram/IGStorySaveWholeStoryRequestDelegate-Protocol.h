//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGStorySaveWholeStoryRequest, NSError;

@protocol IGStorySaveWholeStoryRequestDelegate
- (void)saveStoryRequest:(IGStorySaveWholeStoryRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)saveStoryRequestDidComplete:(IGStorySaveWholeStoryRequest *)arg1;
@end
