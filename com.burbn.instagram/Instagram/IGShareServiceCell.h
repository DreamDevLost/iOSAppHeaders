//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGCollectionViewCell.h"

@class IGKVOHandle, IGShareService, IGUserSession;

@interface IGShareServiceCell : IGCollectionViewCell
{
    IGUserSession *_userSession;
    _Bool _willShare;
    IGShareService *_shareService;
    IGKVOHandle *_shareServiceObserver;
}

@property(readonly, nonatomic) _Bool willShare; // @synthesize willShare=_willShare;
@property(retain, nonatomic) IGKVOHandle *shareServiceObserver; // @synthesize shareServiceObserver=_shareServiceObserver;
@property(readonly, nonatomic) IGShareService *shareService; // @synthesize shareService=_shareService;
- (void).cxx_destruct;
- (void)_updateLabel;
- (void)setEnabled:(_Bool)arg1;
- (void)_updateShareStateForUserSession:(id)arg1;
- (void)setShareService:(id)arg1 userSession:(id)arg2;
- (void)dealloc;

@end
