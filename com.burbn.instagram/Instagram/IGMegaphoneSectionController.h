//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListDisplayDelegate.h"
#import "IGMegaphonePresenterDelegate.h"

@class IGGenericMegaphone, IGMegaphonePresenterRegistry, IGUserSession, NSString, UIView;

@interface IGMegaphoneSectionController : IGListSectionController <IGMegaphonePresenterDelegate, IGListDisplayDelegate>
{
    IGMegaphonePresenterRegistry *_registry;
    id <IGMegaphoneSectionControllerDelegate> _delegate;
    id <IGMegaphonePresenterConfigurationDelegate> _configurationDelegate;
    IGUserSession *_userSession;
    IGGenericMegaphone *_megaphone;
    unsigned long long _displaySource;
    id <IGMegaphonePresenterProtocol> _presenter;
    UIView *_megaphoneView;
}

@property(readonly, nonatomic) UIView *megaphoneView; // @synthesize megaphoneView=_megaphoneView;
@property(readonly, nonatomic) id <IGMegaphonePresenterProtocol> presenter; // @synthesize presenter=_presenter;
@property(readonly, nonatomic) unsigned long long displaySource; // @synthesize displaySource=_displaySource;
@property(readonly, nonatomic) IGGenericMegaphone *megaphone; // @synthesize megaphone=_megaphone;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGMegaphonePresenterConfigurationDelegate> configurationDelegate; // @synthesize configurationDelegate=_configurationDelegate;
@property(nonatomic) __weak id <IGMegaphoneSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)megaphonePresenter:(id)arg1 handleIntent:(id)arg2;
- (void)megaphonePresenterNeedsMegaphoneResize:(id)arg1;
- (void)megaphonePresenter:(id)arg1 presentViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)megaphonePresenterPopToMegaphonePresenterViewController;
- (void)megaphonePresenterPopViewController:(id)arg1;
- (void)megaphonePresenter:(id)arg1 pushViewController:(id)arg2;
- (void)megaphonePresenter:(id)arg1 handleButton:(id)arg2;
- (void)megaphonePresenter:(id)arg1 handleURL:(id)arg2 shouldDismiss:(_Bool)arg3;
- (void)megaphonePresenterDidDismiss:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithDisplaySource:(unsigned long long)arg1 registry:(id)arg2 userSession:(id)arg3;
- (id)initWithDisplaySource:(unsigned long long)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

