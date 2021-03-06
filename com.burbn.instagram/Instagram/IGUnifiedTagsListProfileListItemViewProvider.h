//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFollowControllerDelegate.h"
#import "IGListItemViewProvider.h"

@class IGFollowController, IGProfileCellBodyView, IGProfilePictureImageView, IGTableLayoutSpec, NSString;

@interface IGUnifiedTagsListProfileListItemViewProvider : NSObject <IGFollowControllerDelegate, IGListItemViewProvider>
{
    IGProfilePictureImageView *_profileImageView;
    IGFollowController *_followController;
    IGProfileCellBodyView *_bodyView;
    _Bool selected;
    IGTableLayoutSpec *_layoutSpec;
    id <IGListItemViewProviderDelegate> providerDelegate;
    id <IGUnifiedTagsListProfileListItemViewProviderDelegate> _delegate;
    struct UIEdgeInsets _leadingViewInsets;
}

@property(nonatomic) __weak id <IGUnifiedTagsListProfileListItemViewProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGListItemViewProviderDelegate> providerDelegate; // @synthesize providerDelegate;
@property(nonatomic) _Bool selected; // @synthesize selected;
@property(readonly, nonatomic) struct UIEdgeInsets leadingViewInsets; // @synthesize leadingViewInsets=_leadingViewInsets;
@property(readonly, nonatomic) IGTableLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
- (void).cxx_destruct;
- (void)followControllerDidDetectNewButtonState:(id)arg1;
- (void)followController:(id)arg1 buttonWasTappedWithAction:(long long)arg2;
- (void)followController:(id)arg1 didCompleteAction:(long long)arg2 success:(_Bool)arg3;
- (void)configureWithViewModel:(id)arg1 userSession:(id)arg2 analyticsModule:(id)arg3;
- (_Bool)trailingViewDeterminesOwnSize;
- (long long)trailingViewAlignment;
- (double)heightForBodyFittingSize:(struct CGSize)arg1;
- (id)trailingContentView;
- (id)bodyContentView;
- (id)leadingContentView;
- (id)initWithLayoutSpec:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

