//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectShareSheetOneTapButtonViewModel, IGImageTitleSubtitleViewModel, UIColor, UIImage;

@protocol IGDirectRecipientCellViewModelProtocol <NSObject>
- (unsigned long long)recipientTargetType;
- (UIImage *)accessoryViewImage;
- (double)separatorRightInset;
- (double)separatorLeftInset;
- (double)cellHeightForConstrainingSize:(struct CGSize)arg1;
- (UIColor *)backgroundColor;
- (_Bool)showChevron;
- (_Bool)showMoreButton;
- (_Bool)showCameraButton;
- (_Bool)isEnabled;
- (_Bool)isSelected;
- (IGDirectShareSheetOneTapButtonViewModel *)oneTapViewModel;
- (IGImageTitleSubtitleViewModel *)subviewModel;
@end
