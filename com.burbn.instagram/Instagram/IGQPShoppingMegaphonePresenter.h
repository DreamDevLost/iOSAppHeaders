//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGQPMegaphonePresenterProtocol.h"
#import "IGQPMegaphoneViewDelegate.h"

@class IGQPMegaphone, IGQPMegaphoneView, IGUserSession, NSString;

@interface IGQPShoppingMegaphonePresenter : NSObject <IGQPMegaphoneViewDelegate, IGQPMegaphonePresenterProtocol>
{
    IGQPMegaphone *_megaphone;
    IGQPMegaphoneView *_megaphoneView;
    IGUserSession *_userSession;
    id <IGQPViewPresenterDelegate> _delegate;
}

@property(nonatomic) __weak id <IGQPViewPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)qpMegaphoneViewDidTapCountryButton:(id)arg1;
- (void)qpMegaphoneViewNeedsResize:(id)arg1;
- (void)qpMegaphoneView:(id)arg1 didTapButton:(id)arg2 extraQPInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)qpMegaphoneViewDidDismiss:(id)arg1;
- (id)viewForMegaphone;
- (id)initWithMegaphone:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

