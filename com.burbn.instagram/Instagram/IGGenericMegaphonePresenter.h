//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGGenericMegaphoneViewDelegate.h"
#import "IGGenericMegaphoneViewV2Delegate.h"
#import "IGMegaphonePresenterProtocol.h"

@class IGGenericMegaphone, IGGenericMegaphoneView, IGGenericMegaphoneViewV2, NSString, UIView;

@interface IGGenericMegaphonePresenter : NSObject <IGGenericMegaphoneViewDelegate, IGGenericMegaphoneViewV2Delegate, IGMegaphonePresenterProtocol>
{
    id <IGMegaphonePresenterDelegate> _delegate;
    IGGenericMegaphone *_megaphone;
    IGGenericMegaphoneView *_megaphoneView;
    IGGenericMegaphoneViewV2 *_megaphoneView2;
    id <IGGenericMegaphoneLogger> _logger;
}

+ (_Bool)canPresentMegaphone:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) id <IGGenericMegaphoneLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) IGGenericMegaphoneViewV2 *megaphoneView2; // @synthesize megaphoneView2=_megaphoneView2;
@property(readonly, nonatomic) IGGenericMegaphoneView *megaphoneView; // @synthesize megaphoneView=_megaphoneView;
@property(readonly, nonatomic) IGGenericMegaphone *megaphone; // @synthesize megaphone=_megaphone;
@property(nonatomic) __weak id <IGMegaphonePresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)legacyMegaphoneView:(id)arg1 didTapButton:(id)arg2;
- (void)legacyMegaphoneViewDidDismiss:(id)arg1;
- (void)legacyMegaphoneView:(id)arg1 didOpenURL:(id)arg2;
- (void)megaphoneViewNeedsResize:(id)arg1;
- (void)megaphoneView:(id)arg1 didSelectButton:(id)arg2;
- (void)megaphoneViewDidDismiss:(id)arg1;
- (void)logMegaphoneSeen;
@property(readonly, nonatomic) UIView *viewForMegaphone;
- (id)initWithMegaphone:(id)arg1 logger:(id)arg2 module:(id)arg3;
- (id)initWithMegaphone:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

