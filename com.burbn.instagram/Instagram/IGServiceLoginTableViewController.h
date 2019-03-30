//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import "UITextFieldDelegate.h"

@class IGTextField, NSString, UIBarButtonItem;

@interface IGServiceLoginTableViewController : IGGroupedTableViewController <UITextFieldDelegate>
{
    UIBarButtonItem *_doneButtonItem;
    IGTextField *_usernameField;
    IGTextField *_passwordField;
    NSString *_serviceName;
    long long _serviceUsernameType;
    id <IGServiceHelperLoginProtocol> _serviceHelper;
    CDUnknownBlockType _successCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType successCompletion; // @synthesize successCompletion=_successCompletion;
@property(nonatomic) __weak id <IGServiceHelperLoginProtocol> serviceHelper; // @synthesize serviceHelper=_serviceHelper;
@property(nonatomic) long long serviceUsernameType; // @synthesize serviceUsernameType=_serviceUsernameType;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_doLogin;
- (_Bool)_canLogin;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_configureLoginCell:(id)arg1 forRow:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onLoginFailed:(id)arg1;
- (void)onLoginSucceeded:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (id)initWithStyle:(long long)arg1 serviceName:(id)arg2 serviceHelper:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

