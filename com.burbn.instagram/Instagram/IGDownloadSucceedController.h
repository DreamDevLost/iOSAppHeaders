//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGDownloadDataViewDelegate.h"

@class IGDownloadDataView, IGUserSession, NSString;

@interface IGDownloadSucceedController : IGGroupedTableViewController <IGDownloadDataViewDelegate>
{
    IGUserSession *_userSession;
    NSString *_email;
    IGDownloadDataView *_succeedview;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)didTapActionButton;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 email:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

