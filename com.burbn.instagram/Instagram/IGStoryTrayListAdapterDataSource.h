//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListAdapterDataSource.h"

@class IGStoryTrayLoggingContext, IGStoryTraySectionConfiguration, IGUserSession, NSString;

@interface IGStoryTrayListAdapterDataSource : NSObject <IGListAdapterDataSource>
{
    id <IGStoryTrayDataSource> _dataSource;
    id <IGStorySectionControllerDelegate> _storySectionControllerDelegate;
    id <IGPostLiveItemSectionControllerDelegate> _postLiveItemSectionControllerDelegate;
    id <IGTVHighlightsTraySectionControllerDelegate> _igtvSectionControllerDelegate;
    id <IGStorySectionCollapsibleControllerDataSource> _collapsibleControllerdataSourceDelegate;
    id <IGStoryTraySuggestionCardSectionControllerDelegate> _suggestionCardSectionControllerDelegate;
    long long _entryPoint;
    CDStruct_afe9634b _layoutSpec;
    IGStoryTrayLoggingContext *_loggingContext;
    IGStoryTraySectionConfiguration *_traySectionConfiguration;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)initWithUserSession:(id)arg1 dataSource:(id)arg2 storySectionControllerDelegate:(id)arg3 postLiveItemSectionControllerDelegate:(id)arg4 igtvSectionControllerDelegate:(id)arg5 collapsibleControllerdataSourceDelegate:(id)arg6 suggestionCardSectionControllerDelegate:(id)arg7 entryPoint:(long long)arg8 traySectionConfiguration:(id)arg9 loggingContext:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

