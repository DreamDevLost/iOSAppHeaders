//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKStoreProductViewController.h"

#import "SKStoreProductViewControllerDelegate.h"

@class MAIAppStoreLoadStatus, NSString;

@interface MAISKStoreProductViewController : SKStoreProductViewController <SKStoreProductViewControllerDelegate>
{
    _Bool _isPreloadingEnabled;
    double _loadStartTime;
    MAIAppStoreLoadStatus *_loadStatus;
    unsigned long long _orientationMask;
    NSString *_iTunesIdentifier;
    id <MAISKStoreProductViewControllerDelegate> _maiDelegate;
}

@property(nonatomic) __weak id <MAISKStoreProductViewControllerDelegate> maiDelegate; // @synthesize maiDelegate=_maiDelegate;
@property(readonly, copy, nonatomic) NSString *iTunesIdentifier; // @synthesize iTunesIdentifier=_iTunesIdentifier;
@property(readonly, nonatomic) unsigned long long orientationMask; // @synthesize orientationMask=_orientationMask;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)setPreloadingEnabledFlag:(_Bool)arg1;
- (void)loadProductWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) MAIAppStoreLoadStatus *loadStatus;
- (void)setDelegate:(id)arg1;
- (void)loadProductWithParameters:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithOrientationMask:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

