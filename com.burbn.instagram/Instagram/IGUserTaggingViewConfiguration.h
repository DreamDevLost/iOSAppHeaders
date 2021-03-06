//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGTaggingViewConfiguration.h"

@class NSString;

@interface IGUserTaggingViewConfiguration : NSObject <IGTaggingViewConfiguration>
{
}

- (long long)currentPostItemTagCountLimit;
- (long long)feedItemTagCountLimit;
- (id)viewModelForError;
- (id)viewModelForNoResults;
- (id)viewModelsForResults:(id)arg1;
- (id)searchDataSourceWithUserSession:(id)arg1 delegate:(id)arg2;
- (id)pendingTagViewAtPosition:(struct CGPoint)arg1;
- (id)tagViewWithTag:(id)arg1 experimentSet:(id)arg2;
- (id)analyticsModuleName;
- (id)searchBarPlaceholder;
- (id)addLimitReachedLabelText;
- (id)addMoreTagsLabelText;
- (id)addFirstTagLabelText;
- (unsigned long long)mediaOverlayIndicatorIconTypes;
- (id)taggingViewTitle;
- (long long)taggingType;
- (long long)taggingMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

