//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAnalyticsModule.h"
#import "IGGestureHandler.h"
#import "IGStoryMusicBrowserViewControllerDelegate.h"

@class IGGradientView, IGStoryMusicBrowserViewController, IGUserSession, NSString;

@interface IGStoryPrecaptureMusicBrowserViewController : UIViewController <IGStoryMusicBrowserViewControllerDelegate, IGGestureHandler, IGAnalyticsModule>
{
    IGUserSession *_userSession;
    IGStoryMusicBrowserViewController *_musicBrowserViewController;
    IGGradientView *_protectionGradientView;
    _Bool _protectionGradientHidden;
    id <IGStoryPrecaptureMusicBrowserViewControllerDelegate> _delegate;
    NSString *_productName;
}

@property(readonly, copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(nonatomic) _Bool protectionGradientHidden; // @synthesize protectionGradientHidden=_protectionGradientHidden;
@property(nonatomic) __weak id <IGStoryPrecaptureMusicBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *subcategory;
@property(copy, nonatomic) NSString *category;
@property(nonatomic) unsigned long long uploadStep;
@property(nonatomic) _Bool cancelButtonHidden;
- (id)analyticsModule;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)musicBrowserViewControllerDidCancel:(id)arg1;
- (void)musicBrowserViewController:(id)arg1 didTapMusicTrack:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 productName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

