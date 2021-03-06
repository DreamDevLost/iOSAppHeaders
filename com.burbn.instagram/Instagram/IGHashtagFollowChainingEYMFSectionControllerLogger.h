//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDiscoveryRecommendationSectionControllerLogger.h"

@class IGHashtagModel, IGUserSession, NSString;

@interface IGHashtagFollowChainingEYMFSectionControllerLogger : NSObject <IGDiscoveryRecommendationSectionControllerLogger>
{
    IGHashtagModel *_hashtagModel;
    long long _hashtagFeedType;
    IGUserSession *_userSession;
    NSString *_module;
}

- (void).cxx_destruct;
- (void)discoveryRecommendationSectionController:(id)arg1 sectionControllerGridItemPosition:(CDStruct_1d3354f4)arg2 didDismissSuggestion:(id)arg3 suggestionPosition:(long long)arg4 inventorySource:(long long)arg5 viewStyle:(long long)arg6 gridLayoutSpec:(id)arg7;
- (void)discoveryRecommendationSectionController:(id)arg1 sectionControllerGridItemPosition:(CDStruct_1d3354f4)arg2 didTapFollow:(id)arg3 suggestionPosition:(long long)arg4 userAction:(long long)arg5 inventorySource:(long long)arg6 viewStyle:(long long)arg7 gridLayoutSpec:(id)arg8;
- (void)discoveryRecommendationSectionController:(id)arg1 sectionControllerGridItemPosition:(CDStruct_1d3354f4)arg2 didTapSuggestion:(id)arg3 suggestionPosition:(long long)arg4 inventorySource:(long long)arg5 viewStyle:(long long)arg6 gridLayoutSpec:(id)arg7;
- (void)discoveryRecommendationSectionController:(id)arg1 sectionControllerGridItemPosition:(CDStruct_1d3354f4)arg2 didShowSuggestion:(id)arg3 suggestionPosition:(long long)arg4 inventorySource:(long long)arg5 viewStyle:(long long)arg6 gridLayoutSpec:(id)arg7;
- (id)initWithHashtagModel:(id)arg1 hashtagFeedType:(long long)arg2 userSession:(id)arg3 module:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

