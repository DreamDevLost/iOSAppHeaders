//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGKeyboardObserverFrameChangeDelegate.h"
#import "IGKeyboardObserverHideDelegate.h"
#import "IGKeyboardObserverShowDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGKeyboardObserver, IGTableLayoutSpec, IGTableView, NSString;

@interface IGPlainTableViewController : IGViewController <UITableViewDelegate, UITableViewDataSource, IGKeyboardObserverShowDelegate, IGKeyboardObserverHideDelegate, IGKeyboardObserverFrameChangeDelegate>
{
    _Bool _clearsSelectionOnViewWillAppear;
    _Bool _isListRedesignEnabled;
    IGTableView *_tableView;
    IGTableLayoutSpec *_tableInterface;
    IGKeyboardObserver *_keyboardObserver;
}

@property(readonly, nonatomic) IGKeyboardObserver *keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
@property(readonly, nonatomic) IGTableLayoutSpec *tableInterface; // @synthesize tableInterface=_tableInterface;
@property(readonly, nonatomic) _Bool isListRedesignEnabled; // @synthesize isListRedesignEnabled=_isListRedesignEnabled;
@property(readonly, nonatomic) IGTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool clearsSelectionOnViewWillAppear; // @synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)titleForHeaderInSection:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)hasRowsInSection:(long long)arg1;
- (void)_setTableInsets;
- (void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithTableView:(id)arg1 listRedesignEnabled:(_Bool)arg2;
- (id)initWithListRedesignEnabled:(_Bool)arg1;
- (id)initWithTableView:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
