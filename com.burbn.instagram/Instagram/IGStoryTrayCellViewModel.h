//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGReelOwner, IGRingViewSpec, NSArray, NSAttributedString, NSData, NSString, NSURL;

@interface IGStoryTrayCellViewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _grayed;
    _Bool _faded;
    _Bool _showPlaceholderIcon;
    _Bool _showCopyrightViolation;
    _Bool _showRightsManagerViolation;
    _Bool _showVerifiedBadge;
    _Bool _showHighlightAnimation;
    _Bool _animatable;
    _Bool _showCameraButton;
    _Bool _isUnpublished;
    _Bool _isCurrentUserReel;
    _Bool _isSuggestion;
    _Bool _hasBadgeBorder;
    _Bool _isBadged;
    _Bool _hasSensitiveContent;
    IGReelOwner *_reelOwner;
    NSArray *_guests;
    NSString *_title;
    NSAttributedString *_subtitle;
    NSString *_context;
    long long _trayCellStyle;
    IGRingViewSpec *_customRingSpec;
    long long _liveLabelContentType;
    long long _storyTrayViewModelType;
    NSURL *_previewImageURL;
    double _profilePicPadding;
    long long _profilePicBorderStyle;
    NSURL *_coverImageURL;
    NSString *_module;
    long long _placeholderStyle;
    NSString *_timeSinceInteraction;
    NSData *_previewImageData;
}

@property(readonly, nonatomic) _Bool hasSensitiveContent; // @synthesize hasSensitiveContent=_hasSensitiveContent;
@property(readonly, copy, nonatomic) NSData *previewImageData; // @synthesize previewImageData=_previewImageData;
@property(readonly, copy, nonatomic) NSString *timeSinceInteraction; // @synthesize timeSinceInteraction=_timeSinceInteraction;
@property(readonly, nonatomic) _Bool isBadged; // @synthesize isBadged=_isBadged;
@property(readonly, nonatomic) long long placeholderStyle; // @synthesize placeholderStyle=_placeholderStyle;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, copy, nonatomic) NSURL *coverImageURL; // @synthesize coverImageURL=_coverImageURL;
@property(readonly, nonatomic) _Bool hasBadgeBorder; // @synthesize hasBadgeBorder=_hasBadgeBorder;
@property(readonly, nonatomic) long long profilePicBorderStyle; // @synthesize profilePicBorderStyle=_profilePicBorderStyle;
@property(readonly, nonatomic) double profilePicPadding; // @synthesize profilePicPadding=_profilePicPadding;
@property(readonly, copy, nonatomic) NSURL *previewImageURL; // @synthesize previewImageURL=_previewImageURL;
@property(readonly, nonatomic) _Bool isSuggestion; // @synthesize isSuggestion=_isSuggestion;
@property(readonly, nonatomic) _Bool isCurrentUserReel; // @synthesize isCurrentUserReel=_isCurrentUserReel;
@property(readonly, nonatomic) _Bool isUnpublished; // @synthesize isUnpublished=_isUnpublished;
@property(readonly, nonatomic) _Bool showCameraButton; // @synthesize showCameraButton=_showCameraButton;
@property(readonly, nonatomic) _Bool animatable; // @synthesize animatable=_animatable;
@property(readonly, nonatomic) _Bool showHighlightAnimation; // @synthesize showHighlightAnimation=_showHighlightAnimation;
@property(readonly, nonatomic) _Bool showVerifiedBadge; // @synthesize showVerifiedBadge=_showVerifiedBadge;
@property(readonly, nonatomic) _Bool showRightsManagerViolation; // @synthesize showRightsManagerViolation=_showRightsManagerViolation;
@property(readonly, nonatomic) _Bool showCopyrightViolation; // @synthesize showCopyrightViolation=_showCopyrightViolation;
@property(readonly, nonatomic) _Bool showPlaceholderIcon; // @synthesize showPlaceholderIcon=_showPlaceholderIcon;
@property(readonly, nonatomic) _Bool faded; // @synthesize faded=_faded;
@property(readonly, nonatomic) _Bool grayed; // @synthesize grayed=_grayed;
@property(readonly, nonatomic) long long storyTrayViewModelType; // @synthesize storyTrayViewModelType=_storyTrayViewModelType;
@property(readonly, nonatomic) long long liveLabelContentType; // @synthesize liveLabelContentType=_liveLabelContentType;
@property(readonly, copy, nonatomic) IGRingViewSpec *customRingSpec; // @synthesize customRingSpec=_customRingSpec;
@property(readonly, nonatomic) long long trayCellStyle; // @synthesize trayCellStyle=_trayCellStyle;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSArray *guests; // @synthesize guests=_guests;
@property(readonly, copy, nonatomic) IGReelOwner *reelOwner; // @synthesize reelOwner=_reelOwner;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithReelOwner:(id)arg1 guests:(id)arg2 title:(id)arg3 subtitle:(id)arg4 context:(id)arg5 trayCellStyle:(long long)arg6 customRingSpec:(id)arg7 liveLabelContentType:(long long)arg8 storyTrayViewModelType:(long long)arg9 grayed:(_Bool)arg10 faded:(_Bool)arg11 showPlaceholderIcon:(_Bool)arg12 showCopyrightViolation:(_Bool)arg13 showRightsManagerViolation:(_Bool)arg14 showVerifiedBadge:(_Bool)arg15 showHighlightAnimation:(_Bool)arg16 animatable:(_Bool)arg17 showCameraButton:(_Bool)arg18 isUnpublished:(_Bool)arg19 isCurrentUserReel:(_Bool)arg20 isSuggestion:(_Bool)arg21 previewImageURL:(id)arg22 profilePicPadding:(double)arg23 profilePicBorderStyle:(long long)arg24 hasBadgeBorder:(_Bool)arg25 coverImageURL:(id)arg26 module:(id)arg27 placeholderStyle:(long long)arg28 isBadged:(_Bool)arg29 timeSinceInteraction:(id)arg30 previewImageData:(id)arg31 hasSensitiveContent:(_Bool)arg32;

@end

