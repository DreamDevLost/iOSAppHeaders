//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSearchControlling.h"

@class IGLabelItemViewModel, IGSpinnerLabelViewModel, NSArray, NSString;

@interface IGDirectGIFSearchDataSource : NSObject <IGSearchControlling>
{
    id <IGGiphyFetching> _giphyDataSource;
    NSArray *_trendingItems;
    NSString *_searchText;
    _Bool _giphyTrendingFetched;
    id <FBCancelable> _giphySearchRequestToken;
    id <FBCancelable> _giphyTrendingRequestToken;
    IGSpinnerLabelViewModel *_giphyLoadingSpinner;
    IGLabelItemViewModel *_emptyResultsLabelModel;
    IGLabelItemViewModel *_failureLabelModel;
    NSArray *_animatedMediaConfigPriorities;
    NSString *_trendingResponseId;
    id <IGDirectGIFSearchDataSourceDelegate> _delegate;
    NSString *_sessionId;
}

@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) __weak id <IGDirectGIFSearchDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleError:(id)arg1 query:(id)arg2 responseId:(id)arg3;
- (void)_updateWithTrendingGIFModels:(id)arg1 responseId:(id)arg2 error:(id)arg3;
- (void)_updateWithGIFModels:(id)arg1 responseId:(id)arg2 requestSearchText:(id)arg3 error:(id)arg4;
- (void)_fetchDefaultItemsFromNetwork;
- (void)_searchWithText:(id)arg1;
- (void)fetchDefaultItems;
- (void)searchWithText:(id)arg1;
- (id)initWithNetworker:(id)arg1 giphyDataStoreUpdater:(id)arg2;

@end

