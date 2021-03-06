//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGHighlightCoverSectionControllerDelegate.h"
#import "IGHighlightReelFetcherDelegate.h"
#import "IGHighlightsMultiSelectController.h"
#import "IGListAdapterDataSource.h"
#import "IGMediaThumbnailSectionControllerSelectionDelegate.h"

@class IGFeedStarterKit, IGHighlightCreationModel, IGHighlightReelFetcher, IGHighlightsEditViewModel, IGUserSession, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSOrderedSet, NSString, UITapGestureRecognizer, UIView;

@interface IGHighlightsMultiSelectViewController : IGViewController <IGListAdapterDataSource, IGMediaThumbnailSectionControllerSelectionDelegate, IGHighlightCoverSectionControllerDelegate, IGHighlightReelFetcherDelegate, IGHighlightsMultiSelectController>
{
    IGUserSession *_userSession;
    IGFeedStarterKit *_feed;
    IGHighlightReelFetcher *_reelFetcher;
    NSMutableOrderedSet *_storyItems;
    NSMutableOrderedSet *_highlightedItems;
    NSObject<OS_dispatch_queue> *_queue;
    IGHighlightsEditViewModel *_viewModel;
    UIView *_emptyView;
    UITapGestureRecognizer *_titleTextFieldTapRecognizer;
    id <IGHighlightsMultiSelectControllerDelegate> _selectionDelegate;
    id <IGHighlightsMultiSelectViewControllerSelectionDelegate> _editDelegate;
    id <IGHighlightsMultiSelectViewControllerLoadDelegate> _loadDelegate;
    id <IGHighlightsMultiSelectViewControllerTextFieldDelegate> _textFieldDelegate;
    double _headerHeight;
    IGHighlightCreationModel *_highlightsModel;
}

@property(retain, nonatomic) IGHighlightCreationModel *highlightsModel; // @synthesize highlightsModel=_highlightsModel;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) __weak id <IGHighlightsMultiSelectViewControllerTextFieldDelegate> textFieldDelegate; // @synthesize textFieldDelegate=_textFieldDelegate;
@property(nonatomic) __weak id <IGHighlightsMultiSelectViewControllerLoadDelegate> loadDelegate; // @synthesize loadDelegate=_loadDelegate;
@property(nonatomic) __weak id <IGHighlightsMultiSelectViewControllerSelectionDelegate> editDelegate; // @synthesize editDelegate=_editDelegate;
@property(nonatomic) __weak id <IGHighlightsMultiSelectControllerDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
- (void).cxx_destruct;
- (void)_updateFeedItem:(id)arg1 selected:(_Bool)arg2;
- (void)_endEditingTitleTextField;
- (void)_textFieldEditingTapRecognizerTapped:(id)arg1;
- (void)highlightCoverSectionController:(id)arg1 titleTextField:(id)arg2 didUpdateEditState:(_Bool)arg3;
- (void)highlightCoverSectionControllerDidTapCover:(id)arg1;
- (void)didSelectFeedItem:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_updateFeedWithLoadedItems:(id)arg1 coverModel:(id)arg2;
- (void)highlightReelFetcher:(id)arg1 didFailWithError:(id)arg2;
- (void)highlightReelFetcher:(id)arg1 didFetchReel:(id)arg2;
- (struct UIEdgeInsets)preferredContentInsets;
- (id)analyticsModule;
@property(readonly, copy, nonatomic) NSOrderedSet *highlightedItems;
- (void)removeItemsFromHighlights:(id)arg1;
- (void)addItemsToHighlights:(id)arg1;
- (void)_updateContentInsets;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 highlightsModel:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

