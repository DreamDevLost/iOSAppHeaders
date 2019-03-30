//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListAdapterCompletionListener.h"

@class IGAdsManagerLogger, IGFeedVideoCellManager, IGListAdapterScrollingContext, IGListSectionController<IGFeedSectionControllerType>;

@protocol IGFeedSectionControllerComponentsType <IGListAdapterCompletionListener>
@property(nonatomic) _Bool stopVideoInViewDidDisappear;
@property(retain, nonatomic) IGAdsManagerLogger *adsManagerLogger;
@property(readonly, nonatomic) IGListAdapterScrollingContext *scrollingContext;
@property(readonly, nonatomic) IGFeedVideoCellManager *videoCellManager;
@property(readonly, nonatomic) id <IGFeedItemConfigurationType> itemConfiguration;
@property(readonly, nonatomic) id <IGFeedConfigurationType> feedConfiguration;
- (void)disableListeners;
- (void)enableListeners;
- (void)adapterDidCompleteUpdate;
- (IGListSectionController<IGFeedSectionControllerType> *)newFeedSectionController;
@end
