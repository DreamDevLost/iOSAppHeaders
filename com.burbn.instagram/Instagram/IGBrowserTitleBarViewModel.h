//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, IGUserSession, NSString;

@interface IGBrowserTitleBarViewModel : NSObject
{
    _Bool _supportProfileInfoHeaderView;
    IGFeedItem *_feedItem;
    NSString *_webUrl;
    IGUserSession *_userSession;
    unsigned long long _leftButtonType;
    unsigned long long _rightButtonType;
}

@property(readonly, nonatomic) _Bool supportProfileInfoHeaderView; // @synthesize supportProfileInfoHeaderView=_supportProfileInfoHeaderView;
@property(readonly, nonatomic) unsigned long long rightButtonType; // @synthesize rightButtonType=_rightButtonType;
@property(readonly, nonatomic) unsigned long long leftButtonType; // @synthesize leftButtonType=_leftButtonType;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (id)initWithFeedItem:(id)arg1 webUrl:(id)arg2 userSession:(id)arg3 leftButtonType:(unsigned long long)arg4 rightButtonType:(unsigned long long)arg5 supportProfileInfoHeaderView:(_Bool)arg6;

@end
