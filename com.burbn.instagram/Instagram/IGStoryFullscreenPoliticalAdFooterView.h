//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTapButton.h"

@class UILabel;

@interface IGStoryFullscreenPoliticalAdFooterView : IGTapButton
{
    UILabel *_fundingSourceNameLabel;
    id <IGStoryFullscreenPoliticalAdFooterViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStoryFullscreenPoliticalAdFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_politicalAdsFooterViewDidTap:(id)arg1;
- (void)configureWithFundingSourceName:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

