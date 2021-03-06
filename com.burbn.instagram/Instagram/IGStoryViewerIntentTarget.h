//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGeneratedIntentTarget.h"

@class IGStoryViewerConfiguration, IGStoryViewerLoggingContext, IGStoryViewerViewModel, IGUserSession, NSArray, UIView;

@interface IGStoryViewerIntentTarget : FBGeneratedIntentTarget
{
    _Bool _shouldPresentStoryViewerWithModalTransition;
    IGUserSession *_userSession;
    NSArray *_viewModels;
    IGStoryViewerViewModel *_currentViewModel;
    id <IGStoryTrayDataSource> _trayDataSource;
    IGStoryViewerLoggingContext *_loggingContext;
    long long _entryPoint;
    id <IGStoryViewerDelegate> _delegate;
    id <IGStoriesBrowsingDelegate> _browsingDelegate;
    IGStoryViewerConfiguration *_configuration;
    UIView *_profilePictureView;
    UIView *_fromViewForAnimation;
}

@property(readonly, nonatomic) UIView *fromViewForAnimation; // @synthesize fromViewForAnimation=_fromViewForAnimation;
@property(readonly, nonatomic) UIView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
@property(readonly, nonatomic) _Bool shouldPresentStoryViewerWithModalTransition; // @synthesize shouldPresentStoryViewerWithModalTransition=_shouldPresentStoryViewerWithModalTransition;
@property(readonly, nonatomic) IGStoryViewerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <IGStoriesBrowsingDelegate> browsingDelegate; // @synthesize browsingDelegate=_browsingDelegate;
@property(readonly, nonatomic) id <IGStoryViewerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) IGStoryViewerLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
@property(readonly, nonatomic) id <IGStoryTrayDataSource> trayDataSource; // @synthesize trayDataSource=_trayDataSource;
@property(readonly, nonatomic) IGStoryViewerViewModel *currentViewModel; // @synthesize currentViewModel=_currentViewModel;
@property(readonly, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 viewModels:(id)arg2 currentViewModel:(id)arg3 trayDataSource:(id)arg4 loggingContext:(id)arg5 entryPoint:(long long)arg6 delegate:(id)arg7 browsingDelegate:(id)arg8 configuration:(id)arg9 shouldPresentStoryViewerWithModalTransition:(_Bool)arg10 profilePictureView:(id)arg11 fromViewForAnimation:(id)arg12;

@end

