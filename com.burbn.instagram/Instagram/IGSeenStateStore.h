//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionEndingObject.h"

@class IGSeenStateLogger, IGSeenStore, IGUserSession, NSString;

@interface IGSeenStateStore : NSObject <IGUserSessionEndingObject>
{
    IGUserSession *_userSession;
    _Bool _mediaRenderedTimerEnabled;
    _Bool _sendShortFormatViewInfo;
    NSString *_userSessionPK;
    IGSeenStateLogger *_logger;
    IGSeenStore *_seenStore;
}

+ (id)_carouselFormattedId:(id)arg1 carouselIndex:(long long)arg2;
@property(retain, nonatomic) IGSeenStore *seenStore; // @synthesize seenStore=_seenStore;
@property(nonatomic) _Bool sendShortFormatViewInfo; // @synthesize sendShortFormatViewInfo=_sendShortFormatViewInfo;
@property(nonatomic) _Bool mediaRenderedTimerEnabled; // @synthesize mediaRenderedTimerEnabled=_mediaRenderedTimerEnabled;
@property(retain, nonatomic) IGSeenStateLogger *logger; // @synthesize logger=_logger;
@property(copy, nonatomic) NSString *userSessionPK; // @synthesize userSessionPK=_userSessionPK;
- (void).cxx_destruct;
- (void)userSessionWillEndWithReason:(unsigned long long)arg1;
- (void)saveToDiskWithSeenStateSync:(_Bool)arg1 shouldSaveAsynchronously:(_Bool)arg2;
- (_Bool)isItemSeen:(id)arg1;
- (void)itemNoLongerVisible:(id)arg1;
- (id)_getViewInfoFromViewInfoKey:(id)arg1;
- (void)mediaRendered:(id)arg1;
- (void)updateSeenPercentageForItem:(id)arg1 percentage:(double)arg2;
- (void)_markSeen:(id)arg1;
- (void)markSeenForFeedItem:(id)arg1;
- (void)markSeenForCarouselItem:(id)arg1 carouselIndex:(long long)arg2;
- (void)updateSeenStateOnRequestSuccessWithFeedItems:(id)arg1 sentSeenIDsParam:(id)arg2 sentViewInfosParam:(id)arg3 isFirstPage:(_Bool)arg4;
- (_Bool)hasSeenItem:(id)arg1;
- (id)getViewInfosAndMarkViewInfoAsClean;
- (_Bool)supportCarouselViewInfo;
- (id)seenIDs;
- (id)initWithUserSession:(id)arg1 isEmployee:(_Bool)arg2;
- (void)addFakeViewInfoForFeedItem:(id)arg1;
- (id)viewInfoStringFromFeedItem:(id)arg1;
- (double)lastPercentageUpdatOnFeedItem:(id)arg1;
- (double)getVPVTimeOnFeedItem:(id)arg1;
- (double)getMaxPercentageOnFeedItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
