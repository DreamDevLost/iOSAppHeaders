//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class IGUserSession, NSMutableOrderedSet, NSMutableSet, NSString, UIButton, UICollectionView, UIView;

@interface IGDraftBrowserViewController : IGViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _isEditing;
    id <IGDraftBrowserViewControllerDelegate> _delegate;
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    NSMutableOrderedSet *_draftPreviews;
    NSMutableSet *_selectedDraftPreviews;
    UIView *_bottomBar;
    UIButton *_discardButton;
}

@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) UIButton *discardButton; // @synthesize discardButton=_discardButton;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) NSMutableSet *selectedDraftPreviews; // @synthesize selectedDraftPreviews=_selectedDraftPreviews;
@property(retain, nonatomic) NSMutableOrderedSet *draftPreviews; // @synthesize draftPreviews=_draftPreviews;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGDraftBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onCancelModal;
- (void)_loadData;
- (void)_deleteConfirmed;
- (void)_deleteSelectedButtonTapped;
- (void)_doneButtonTapped;
- (void)_editButtonTapped;
- (void)_updateDeleteSelectedButton;
- (id)analyticsModule;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

