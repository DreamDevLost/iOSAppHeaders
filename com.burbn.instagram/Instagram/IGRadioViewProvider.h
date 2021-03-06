//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListItemViewProvider.h"

@class IGRadioButton, IGSettingsDescriptionBodyView, IGTableLayoutSpec;

@interface IGRadioViewProvider : NSObject <IGListItemViewProvider>
{
    IGTableLayoutSpec *_layoutSpec;
    IGSettingsDescriptionBodyView *_bodyView;
    IGRadioButton *_radioButton;
    _Bool _selected;
    id <IGListItemViewProviderDelegate> providerDelegate;
    struct UIEdgeInsets _leadingViewInsets;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak id <IGListItemViewProviderDelegate> providerDelegate; // @synthesize providerDelegate;
@property(readonly, nonatomic) struct UIEdgeInsets leadingViewInsets; // @synthesize leadingViewInsets=_leadingViewInsets;
@property(readonly, nonatomic) IGTableLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
- (void).cxx_destruct;
- (double)heightForBodyFittingSize:(struct CGSize)arg1;
- (_Bool)trailingViewDeterminesOwnSize;
- (long long)trailingViewAlignment;
- (id)trailingContentView;
- (id)bodyContentView;
- (id)leadingContentView;
- (void)configureWithTitle:(id)arg1 description:(id)arg2;
- (id)initWithLayoutSpec:(id)arg1;

@end

