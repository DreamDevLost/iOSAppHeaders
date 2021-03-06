//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListGenericSectionController.h"

#import "IGUploadCellContentViewDelegate.h"

@class IGUserSession, NSString;

@interface IGTVBrowsePendingUploadSectionController : IGListGenericSectionController <IGUploadCellContentViewDelegate>
{
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)uploadCellWantsRetry:(id)arg1 forActivePost:(id)arg2;
- (void)uploadCellActivePostDidConfigureSuccess:(id)arg1;
- (void)uploadCellActivePostDidSuspend:(id)arg1;
- (void)uploadCellWantsDeletion:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

