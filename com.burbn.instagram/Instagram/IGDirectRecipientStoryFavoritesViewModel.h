//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectRecipientCellViewModelProtocol.h"
#import "IGListDiffable.h"

@class IGDirectShareSheetOneTapButtonViewModel, IGImageTitleSubtitleViewModel, NSString, UIColor;

@interface IGDirectRecipientStoryFavoritesViewModel : NSObject <IGListDiffable, IGDirectRecipientCellViewModelProtocol>
{
    IGImageTitleSubtitleViewModel *_subviewModel;
    IGDirectShareSheetOneTapButtonViewModel *_oneTapViewModel;
    _Bool _isSelected;
    _Bool _isEnabled;
    UIColor *_backgroundColor;
}

- (void).cxx_destruct;
- (unsigned long long)recipientTargetType;
- (id)accessoryViewImage;
- (double)separatorRightInset;
- (double)separatorLeftInset;
- (double)cellHeightForConstrainingSize:(struct CGSize)arg1;
- (id)backgroundColor;
- (_Bool)showChevron;
- (_Bool)showMoreButton;
- (_Bool)showCameraButton;
- (_Bool)isEnabled;
- (_Bool)isSelected;
- (id)oneTapViewModel;
- (id)subviewModel;
- (id)diffIdentifier;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithLayoutSpec:(id)arg1 isSelected:(_Bool)arg2 isEnabled:(_Bool)arg3 backgroundColor:(id)arg4 oneTapButtonViewModel:(id)arg5 module:(id)arg6;
- (id)initWithSubviewModel:(id)arg1 isSelected:(_Bool)arg2 isEnabled:(_Bool)arg3 backgroundColor:(id)arg4 oneTapButtonViewModel:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

