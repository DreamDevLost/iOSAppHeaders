//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, NSDate, NSMutableArray, NSString;

@interface IGWebViewRedirectTracker : NSObject
{
    IGFeedItem *_feedItem;
    unsigned long long _urlSource;
    NSString *_initialURLString;
    NSString *_profileUserId;
    NSMutableArray *_redirectChain;
    NSDate *_startDate;
    _Bool _isPageDoneLoading;
    _Bool _recording;
}

@property(readonly, nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
- (void).cxx_destruct;
- (_Bool)_canLogRedirectEvent;
- (void)_logInitialURLStringAndStartDateIfNecessary:(id)arg1;
- (void)_logRedirectEvent;
- (void)stopRecording;
- (void)recordLandingPageDoneLoading;
- (void)recordURL:(id)arg1;
- (void)dealloc;
- (id)initWithFeedItem:(id)arg1 urlSource:(unsigned long long)arg2 profileUserId:(id)arg3;

@end

