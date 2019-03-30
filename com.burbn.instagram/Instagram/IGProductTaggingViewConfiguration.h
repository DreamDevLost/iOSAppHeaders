//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGTaggingViewConfiguration.h"

@class IGUserSession, NSString;

@interface IGProductTaggingViewConfiguration : NSObject <IGTaggingViewConfiguration>
{
    IGUserSession *_userSession;
    _Bool _hasBrandedContent;
}

@property(readonly, nonatomic) _Bool hasBrandedContent; // @synthesize hasBrandedContent=_hasBrandedContent;
- (void).cxx_destruct;
- (long long)_maxLineCountInTag;
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
- (id)initWithUserSession:(id)arg1 hasBrandedContent:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
