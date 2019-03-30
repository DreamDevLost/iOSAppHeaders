//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSString, UIImage;

@interface IGBusinessAttributeSyncContactInfoViewModel : NSObject <IGListDiffable>
{
    _Bool _showRadioButton;
    _Bool _isSelected;
    _Bool _showBottomSeparator;
    UIImage *_icon;
    NSString *_contactInfoText;
    long long _selectedType;
}

@property(nonatomic) long long selectedType; // @synthesize selectedType=_selectedType;
@property(nonatomic) _Bool showBottomSeparator; // @synthesize showBottomSeparator=_showBottomSeparator;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool showRadioButton; // @synthesize showRadioButton=_showRadioButton;
@property(readonly, copy, nonatomic) NSString *contactInfoText; // @synthesize contactInfoText=_contactInfoText;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIcon:(id)arg1 contactInfoText:(id)arg2 showRadioButton:(_Bool)arg3 isSelected:(_Bool)arg4 showBottomSeparator:(_Bool)arg5 selectedType:(long long)arg6;

@end
