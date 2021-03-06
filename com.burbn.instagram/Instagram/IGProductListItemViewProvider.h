//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListItemViewProvider.h"

@class IGProductListItemViewModel, IGProfileCellBodyView, IGRemoteImageView, IGTableLayoutSpec, IGTapButton;

@interface IGProductListItemViewProvider : NSObject <IGListItemViewProvider>
{
    IGRemoteImageView *_imageView;
    IGProfileCellBodyView *_bodyView;
    IGTapButton *_trailingButtonView;
    _Bool selected;
    IGTableLayoutSpec *_layoutSpec;
    id <IGListItemViewProviderDelegate> providerDelegate;
    IGProductListItemViewModel *_viewModel;
    id <IGProductListItemViewProviderDelegate> _delegate;
    struct UIEdgeInsets _leadingViewInsets;
}

@property(nonatomic) __weak id <IGProductListItemViewProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGProductListItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <IGListItemViewProviderDelegate> providerDelegate; // @synthesize providerDelegate;
@property(nonatomic) _Bool selected; // @synthesize selected;
@property(readonly, nonatomic) struct UIEdgeInsets leadingViewInsets; // @synthesize leadingViewInsets=_leadingViewInsets;
@property(readonly, nonatomic) IGTableLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
- (void).cxx_destruct;
- (_Bool)trailingViewDeterminesOwnSize;
- (void)_buttonTapped;
- (long long)trailingViewAlignment;
- (double)heightForBodyFittingSize:(struct CGSize)arg1;
- (id)trailingContentView;
- (id)bodyContentView;
- (id)leadingContentView;
- (id)initWithLayoutSpec:(id)arg1;

@end

