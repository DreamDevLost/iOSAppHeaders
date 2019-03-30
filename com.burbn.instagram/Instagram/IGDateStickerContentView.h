//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGStickerBundleContentViewType.h"

@class IGStaticStickerPaddedLabel, NSArray, NSDate, NSString;

@interface IGDateStickerContentView : UIView <IGStickerBundleContentViewType>
{
    IGStaticStickerPaddedLabel *_label;
    NSArray *_dateStickerColors;
    id <IGStickerBundleContentViewLoadingDelegate> _loadingDelegate;
    NSDate *_date;
}

@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) __weak id <IGStickerBundleContentViewLoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
- (void).cxx_destruct;
- (id)outlinePath;
- (id)storyAssetDiffableIdentifier;
- (id)stickerView;
- (id)loggingId;
- (id)currentStickerId;
- (void)selectStickerViewAtIndex:(long long)arg1;
- (long long)numberOfStickers;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithDate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

