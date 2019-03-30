//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListAdapterDataSource.h"

@class IGDirectPublishedThread, IGDirectThreadDetailViewConfig, IGDirectThreadService, NSString;

@interface IGDirectThreadDetailListAdapterDataSource : NSObject <IGListAdapterDataSource>
{
    IGDirectThreadDetailViewConfig *_config;
    IGDirectThreadService *_threadService;
    IGDirectPublishedThread *_thread;
    id <IGTitleAndToggleCellDelegate> _toggleDelegate;
}

@property(nonatomic) __weak id <IGTitleAndToggleCellDelegate> toggleDelegate; // @synthesize toggleDelegate=_toggleDelegate;
@property(readonly, nonatomic) IGDirectPublishedThread *thread; // @synthesize thread=_thread;
- (void).cxx_destruct;
- (_Bool)_shouldAllowGroupChanges;
- (void)_threadUpdated;
- (id)_groupNameAndMuteSectionViewModels;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)reloadThread;
- (id)initWithConfig:(id)arg1 threadService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

