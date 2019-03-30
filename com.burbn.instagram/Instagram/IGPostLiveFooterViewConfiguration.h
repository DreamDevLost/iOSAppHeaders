//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStoryViewerPivotModel, NSString;

@interface IGPostLiveFooterViewConfiguration : NSObject
{
    _Bool _showViewerCount;
    _Bool _showPivot;
    _Bool _showShareFailure;
    _Bool _canRetry;
    _Bool _showSendMessage;
    _Bool _showStoriesBrowsingButton;
    _Bool _showMoreButton;
    _Bool _showShareButton;
    long long _viewerCount;
    long long _failureBannerState;
    IGStoryViewerPivotModel *_pivotModel;
    NSString *_sendingUserPK;
}

+ (id)directViewerConfigurationWithSendingUserPK:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sendingUserPK; // @synthesize sendingUserPK=_sendingUserPK;
@property(readonly, nonatomic) IGStoryViewerPivotModel *pivotModel; // @synthesize pivotModel=_pivotModel;
@property(readonly, nonatomic) long long failureBannerState; // @synthesize failureBannerState=_failureBannerState;
@property(readonly, nonatomic) _Bool showShareButton; // @synthesize showShareButton=_showShareButton;
@property(readonly, nonatomic) _Bool showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(readonly, nonatomic) _Bool showStoriesBrowsingButton; // @synthesize showStoriesBrowsingButton=_showStoriesBrowsingButton;
@property(readonly, nonatomic) _Bool showSendMessage; // @synthesize showSendMessage=_showSendMessage;
@property(readonly, nonatomic) _Bool canRetry; // @synthesize canRetry=_canRetry;
@property(readonly, nonatomic) long long viewerCount; // @synthesize viewerCount=_viewerCount;
@property(readonly, nonatomic) _Bool showShareFailure; // @synthesize showShareFailure=_showShareFailure;
@property(readonly, nonatomic) _Bool showPivot; // @synthesize showPivot=_showPivot;
@property(readonly, nonatomic) _Bool showViewerCount; // @synthesize showViewerCount=_showViewerCount;
- (void).cxx_destruct;
- (id)initWithShowPivot:(_Bool)arg1 showViewerCount:(_Bool)arg2 viewerCount:(long long)arg3 failureBannerState:(long long)arg4 canRetry:(_Bool)arg5 showSendMessage:(_Bool)arg6 showStoriesBrowsingButton:(_Bool)arg7 showMoreButton:(_Bool)arg8 showShareButton:(_Bool)arg9 pivotModel:(id)arg10 sendingUserPK:(id)arg11;

@end
