//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListItemViewProvider.h"

@class IGDirectAvatarView, IGProfileCellBodyView, IGTableLayoutSpec, UIImageView;

@interface IGFollowListMoreUsersViewProvider : NSObject <IGListItemViewProvider>
{
    IGDirectAvatarView *_facepileView;
    IGProfileCellBodyView *_bodyView;
    UIImageView *_trailingImageView;
    _Bool selected;
    IGTableLayoutSpec *_layoutSpec;
    id <IGListItemViewProviderDelegate> providerDelegate;
    struct UIEdgeInsets _leadingViewInsets;
}

@property(nonatomic) __weak id <IGListItemViewProviderDelegate> providerDelegate; // @synthesize providerDelegate;
@property(nonatomic) _Bool selected; // @synthesize selected;
@property(readonly, nonatomic) struct UIEdgeInsets leadingViewInsets; // @synthesize leadingViewInsets=_leadingViewInsets;
@property(readonly, nonatomic) IGTableLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
- (void).cxx_destruct;
- (_Bool)trailingViewDeterminesOwnSize;
- (long long)trailingViewAlignment;
- (double)heightForBodyFittingSize:(struct CGSize)arg1;
- (id)trailingContentView;
- (id)bodyContentView;
- (id)leadingContentView;
- (void)setViewModel:(id)arg1;
- (id)initWithLayoutSpec:(id)arg1;

@end

