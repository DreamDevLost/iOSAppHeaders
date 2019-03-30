//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGHScrollEmbeddedDataSource.h"
#import "IGHScrollPreviewSectionControllerDelegate.h"

@class IGHScrollAYMFModel, IGUserSession, NSMutableArray<IGSuggestedEntityInfo>, NSNumber, NSString;

@interface IGEmbeddedPreviewDataSource : NSObject <IGHScrollPreviewSectionControllerDelegate, IGHScrollEmbeddedDataSource>
{
    IGUserSession *_userSession;
    unsigned long long _netEgoItemType;
    NSNumber *_viewStateItemType;
    NSString *_module;
    IGHScrollAYMFModel *_model;
    NSMutableArray<IGSuggestedEntityInfo> *_items;
    id <IGHScrollEmbeddedDataSourceDelegate> _delegate;
    id <IGEmbeddedPreviewLoggingAttributesDataSource> _loggingAttributesDataSource;
}

@property(nonatomic) __weak id <IGEmbeddedPreviewLoggingAttributesDataSource> loggingAttributesDataSource; // @synthesize loggingAttributesDataSource=_loggingAttributesDataSource;
@property(nonatomic) __weak id <IGHScrollEmbeddedDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)previewSectionController:(id)arg1 didFollowAtIndex:(long long)arg2;
- (void)previewSectionController:(id)arg1 didDismissAtIndex:(long long)arg2;
- (struct CGSize)cellSizeForLayout;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)bloksDataForObject:(id)arg1;
- (void)updateToObject:(id)arg1;
- (id)initWithUserSession:(id)arg1 netEgoItemType:(unsigned long long)arg2 module:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

