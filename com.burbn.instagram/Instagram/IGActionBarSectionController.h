//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

@class IG4BLogger, IGBusinessActionBarHandler, IGBusinessActionBarViewModel, IGProfileExtendableActionBarController, IGUserSession;

@interface IGActionBarSectionController : IGListSectionController
{
    IGUserSession *_session;
    IGBusinessActionBarHandler *_handler;
    IGBusinessActionBarViewModel *_model;
    IGProfileExtendableActionBarController *_extendableActionBarController;
    _Bool _useNeueProfileHeader;
    IG4BLogger *_businessLogger;
}

- (void).cxx_destruct;
- (struct CGRect)addShopButtonFrameRelativeToView:(id)arg1;
- (void)registerShopButtonTooltipPromotion:(_Bool)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1 user:(id)arg2 module:(id)arg3 contactActionHandler:(Class)arg4 mediaAttribution:(id)arg5 trackingToken:(id)arg6;

@end

