//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGCompassionResourceModuleDelegate.h"

@class IGLiveBroadcastBannerView, IGUserSession, NSDictionary, NSString, UIView;

@interface IGLiveBroadcastResourceViewController : UIViewController <IGCompassionResourceModuleDelegate>
{
    id <IGLiveBroadcastResourceViewControllerDelegate> _delegate;
    NSString *_resourceType;
    NSDictionary *_resourceData;
    IGUserSession *_userSession;
    UIViewController *_reactNativeResourceController;
    IGLiveBroadcastBannerView *_textBanner;
    UIView *_backgroundView;
}

+ (id)_reactModuleWithUserSession:(id)arg1;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) IGLiveBroadcastBannerView *textBanner; // @synthesize textBanner=_textBanner;
@property(retain, nonatomic) UIViewController *reactNativeResourceController; // @synthesize reactNativeResourceController=_reactNativeResourceController;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) NSDictionary *resourceData; // @synthesize resourceData=_resourceData;
@property(copy, nonatomic) NSString *resourceType; // @synthesize resourceType=_resourceType;
@property(nonatomic) __weak id <IGLiveBroadcastResourceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)compassionResourceModuleDidRequestClose:(id)arg1 rootViewController:(id)arg2;
- (void)_dismissLiveResource;
- (id)_createCompassionAppController;
- (id)_createReactNativeController;
- (id)_createBackgroundView;
- (id)_createTextBanner;
- (void)presentLiveResource;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithResourceType:(id)arg1 resourceData:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

