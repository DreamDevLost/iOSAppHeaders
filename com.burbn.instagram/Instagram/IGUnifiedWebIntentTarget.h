//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGeneratedIntentTarget.h"

@class IGUserSession, IGWebViewControllerAppearanceHandler, NSURLRequest;

@interface IGUnifiedWebIntentTarget : FBGeneratedIntentTarget
{
    _Bool _shareButtonVisible;
    _Bool _navigationToolBarEnabled;
    NSURLRequest *_urlRequest;
    unsigned long long _titleViewType;
    unsigned long long _titleTextType;
    IGUserSession *_userSession;
    IGWebViewControllerAppearanceHandler *_appearanceHandler;
}

@property(readonly, nonatomic) IGWebViewControllerAppearanceHandler *appearanceHandler; // @synthesize appearanceHandler=_appearanceHandler;
@property(readonly, nonatomic) _Bool navigationToolBarEnabled; // @synthesize navigationToolBarEnabled=_navigationToolBarEnabled;
@property(readonly, nonatomic) _Bool shareButtonVisible; // @synthesize shareButtonVisible=_shareButtonVisible;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) unsigned long long titleTextType; // @synthesize titleTextType=_titleTextType;
@property(readonly, nonatomic) unsigned long long titleViewType; // @synthesize titleViewType=_titleViewType;
@property(readonly, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
- (void).cxx_destruct;
- (id)initWithUrlRequest:(id)arg1 titleViewType:(unsigned long long)arg2 titleTextType:(unsigned long long)arg3 userSession:(id)arg4 shareButtonVisible:(_Bool)arg5 navigationToolBarEnabled:(_Bool)arg6 appearanceHandler:(id)arg7;

@end

