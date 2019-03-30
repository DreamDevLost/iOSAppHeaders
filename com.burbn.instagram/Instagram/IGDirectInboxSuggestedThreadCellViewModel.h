//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectRecipientCellViewModelProtocol.h"
#import "IGListDiffable.h"

@class IGImageTitleSubtitleViewModel, IGUser, NSString;

@interface IGDirectInboxSuggestedThreadCellViewModel : NSObject <IGDirectRecipientCellViewModelProtocol, IGListDiffable>
{
    IGImageTitleSubtitleViewModel *_subviewModel;
    IGUser *_user;
}

@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (unsigned long long)recipientTargetType;
- (id)oneTapViewModel;
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
- (id)subviewModel;
- (id)initWithUser:(id)arg1 module:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

