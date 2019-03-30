//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGListAdapterDataSource.h"

@class IGImageTitleSubtitleViewLayoutSpec, IGListAdapter, NSArray, NSString, UICollectionView;

@interface IGDirectAtMentionListViewController : UIViewController <IGListAdapterDataSource>
{
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    NSArray *_viewModels;
    IGImageTitleSubtitleViewLayoutSpec *_layoutSpec;
    NSString *_moduleName;
    id <IGDirectAtMentionSectionControllerDelegate> _selectionDelegate;
}

@property(nonatomic) __weak id <IGDirectAtMentionSectionControllerDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
- (void).cxx_destruct;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)displayUsers:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithModuleName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

