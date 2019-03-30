//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGDirectRecipientCellViewModelProtocol.h"
#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGDirectShareRecipient, IGDirectShareSheetOneTapButtonViewModel, IGImageTitleSubtitleViewModel, NSString, UIColor;

@interface IGDirectRecipientCellViewModel : FBValueObject <IGDirectRecipientCellViewModelProtocol, IGListDiffable, NSCopying, NSCoding>
{
    _Bool _isSelected;
    _Bool _isEnabled;
    _Bool _isExpanded;
    _Bool _showCameraButton;
    _Bool _showAccessoryViewImage;
    _Bool _hasDynamicHeight;
    IGDirectShareRecipient *_recipient;
    IGImageTitleSubtitleViewModel *_subviewModel;
    IGDirectShareSheetOneTapButtonViewModel *_oneTapViewModel;
    long long _sectionType;
    UIColor *_backgroundColor;
    long long _duplicationId;
}

@property(readonly, nonatomic) long long duplicationId; // @synthesize duplicationId=_duplicationId;
@property(readonly, nonatomic) _Bool hasDynamicHeight; // @synthesize hasDynamicHeight=_hasDynamicHeight;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) _Bool showAccessoryViewImage; // @synthesize showAccessoryViewImage=_showAccessoryViewImage;
@property(readonly, nonatomic) _Bool showCameraButton; // @synthesize showCameraButton=_showCameraButton;
@property(readonly, nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(readonly, nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, copy, nonatomic) IGDirectShareSheetOneTapButtonViewModel *oneTapViewModel; // @synthesize oneTapViewModel=_oneTapViewModel;
@property(readonly, copy, nonatomic) IGImageTitleSubtitleViewModel *subviewModel; // @synthesize subviewModel=_subviewModel;
@property(readonly, copy, nonatomic) IGDirectShareRecipient *recipient; // @synthesize recipient=_recipient;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithRecipient:(id)arg1 subviewModel:(id)arg2 oneTapViewModel:(id)arg3 sectionType:(long long)arg4 isSelected:(_Bool)arg5 isEnabled:(_Bool)arg6 isExpanded:(_Bool)arg7 showCameraButton:(_Bool)arg8 showAccessoryViewImage:(_Bool)arg9 backgroundColor:(id)arg10 hasDynamicHeight:(_Bool)arg11 duplicationId:(long long)arg12;
- (id)initWithRecipient:(id)arg1 layoutSpec:(id)arg2 showCameraButton:(_Bool)arg3 showAccessoryViewImage:(_Bool)arg4 isSelected:(_Bool)arg5 isEnabled:(_Bool)arg6 isExpanded:(_Bool)arg7 backgroundColor:(id)arg8 duplicationId:(long long)arg9 sectionType:(long long)arg10 showFullNameBeforeUsername:(_Bool)arg11 oneTapSendViewModel:(id)arg12 presenceDigest:(id)arg13 avatarSpec:(id)arg14 hasDynamicHeight:(_Bool)arg15 module:(id)arg16;
- (id)_deselectedMark;
- (id)_selectedMark;
- (unsigned long long)recipientTargetType;
- (id)accessoryViewImage;
- (double)separatorRightInset;
- (double)separatorLeftInset;
- (double)cellHeightForConstrainingSize:(struct CGSize)arg1;
- (_Bool)showChevron;
- (_Bool)showMoreButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
