//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGeneratedIntentTarget.h"

@class IGFeedItem, IGUserSession, UIViewController;

@interface IGEditPostIntentTarget : FBGeneratedIntentTarget
{
    IGUserSession *_userSession;
    IGFeedItem *_feedItem;
    long long _currentPage;
    UIViewController *_presentingViewController;
}

@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 feedItem:(id)arg2 currentPage:(long long)arg3 presentingViewController:(id)arg4;

@end

