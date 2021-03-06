//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListAdapterDataSource.h"

@class IGFeedItem, IGShoppingConsumptionFeedItemLogger, IGShoppingFeedNetworkFetchState, IGShoppingPDPDataModel, IGShoppingPDPGridImpressionManager, IGUserSession, NSString;

@interface IGShoppingPDPListKitDataSource : NSObject <IGListAdapterDataSource>
{
    IGUserSession *_userSession;
    struct {
        _Bool productSharingEnabled;
    } _options;
    IGFeedItem *_feedItem;
    IGShoppingConsumptionFeedItemLogger *_logger;
    NSString *_entryPoint;
    NSString *_checkoutSessionId;
    IGShoppingPDPGridImpressionManager *_mftbImpressionManager;
    IGShoppingPDPDataModel *_dataModel;
    IGShoppingFeedNetworkFetchState *_fetchState;
    id <IGShoppingPDPListKitDataSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <IGShoppingPDPListKitDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) IGShoppingFeedNetworkFetchState *fetchState; // @synthesize fetchState=_fetchState;
@property(copy, nonatomic) IGShoppingPDPDataModel *dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)initWithUserSession:(id)arg1 options:(CDStruct_b31ca263)arg2 dataModel:(id)arg3 feedItem:(id)arg4 logger:(id)arg5 entryPoint:(id)arg6 checkoutSessionId:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

