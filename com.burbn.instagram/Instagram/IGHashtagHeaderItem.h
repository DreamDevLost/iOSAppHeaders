//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class IGFeedItem, IGHashtagHeaderViewConfiguration, IGHashtagModel, IGReel;

@interface IGHashtagHeaderItem : NSObject <IGListDiffable>
{
    IGHashtagModel *_hashtagModel;
    IGHashtagHeaderViewConfiguration *_hashtagHeaderViewConfiguration;
    IGReel *_reel;
    IGFeedItem *_headerPhotoFeedItem;
}

@property(readonly, nonatomic) IGFeedItem *headerPhotoFeedItem; // @synthesize headerPhotoFeedItem=_headerPhotoFeedItem;
@property(readonly, nonatomic) IGReel *reel; // @synthesize reel=_reel;
@property(readonly, nonatomic) IGHashtagHeaderViewConfiguration *hashtagHeaderViewConfiguration; // @synthesize hashtagHeaderViewConfiguration=_hashtagHeaderViewConfiguration;
@property(readonly, nonatomic) IGHashtagModel *hashtagModel; // @synthesize hashtagModel=_hashtagModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)headerItemWithUpdatedHashtagFollowState:(long long)arg1 updatedDropdownViewState:(long long)arg2;
- (id)headerItemWithUpdatedDropdownViewState:(long long)arg1;
- (id)initWithHashtagModel:(id)arg1 headerViewConfiguration:(id)arg2 reel:(id)arg3 headerPhotoFeedItem:(id)arg4;

@end
