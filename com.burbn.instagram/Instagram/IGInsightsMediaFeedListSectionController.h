//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

@class IGInsightsMediaSectionModel, IGStoryViewerPresentationController, IGUserSession, NSNumberFormatter, NSString;

@interface IGInsightsMediaFeedListSectionController : IGListSectionController
{
    NSString *_module;
    IGStoryViewerPresentationController *_storyViewerPresentController;
    IGInsightsMediaSectionModel *_mediaSectionModel;
    long long _mediaCellCategory;
    NSNumberFormatter *_commaNumberFormatter;
    long long _mediaFeedType;
    double _cellAspectRatio;
    IGUserSession *_userSession;
}

@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) double cellAspectRatio; // @synthesize cellAspectRatio=_cellAspectRatio;
@property(readonly, nonatomic) long long mediaFeedType; // @synthesize mediaFeedType=_mediaFeedType;
@property(retain, nonatomic) NSNumberFormatter *commaNumberFormatter; // @synthesize commaNumberFormatter=_commaNumberFormatter;
@property(nonatomic) long long mediaCellCategory; // @synthesize mediaCellCategory=_mediaCellCategory;
@property(retain, nonatomic) IGInsightsMediaSectionModel *mediaSectionModel; // @synthesize mediaSectionModel=_mediaSectionModel;
- (void).cxx_destruct;
- (void)_initializeCommaNumberFormatter;
- (struct CGSize)_cellSizeForWidth:(double)arg1;
- (void)_openFullscreenStory:(id)arg1 fromCell:(id)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithMediaFeedType:(long long)arg1 module:(id)arg2 userSession:(id)arg3;

@end

