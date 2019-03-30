//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGTableLayoutSpec, UIView;

@protocol IGListItemViewProvider
@property(nonatomic) __weak id <IGListItemViewProviderDelegate> providerDelegate;
@property(readonly, nonatomic) struct UIEdgeInsets leadingViewInsets;
@property(nonatomic) _Bool selected;
@property(readonly, nonatomic) IGTableLayoutSpec *layoutSpec;
- (_Bool)trailingViewDeterminesOwnSize;
- (long long)trailingViewAlignment;
- (double)heightForBodyFittingSize:(struct CGSize)arg1;
- (UIView *)trailingContentView;
- (UIView *)bodyContentView;
- (UIView *)leadingContentView;
- (id)initWithLayoutSpec:(IGTableLayoutSpec *)arg1;
@end
