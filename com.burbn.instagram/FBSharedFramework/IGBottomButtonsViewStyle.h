//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString;

@interface IGBottomButtonsViewStyle : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_primary_primaryButtonTitle;
    CDUnknownBlockType _primary_primaryButtonHandler;
    NSString *_primaryFullWidth_primaryButtonTitle;
    CDUnknownBlockType _primaryFullWidth_primaryButtonHandler;
    NSString *_secondary_secondaryButtonTitle;
    CDUnknownBlockType _secondary_secondaryButtonHandler;
    NSString *_secondaryDestructive_secondaryButtonTitle;
    CDUnknownBlockType _secondaryDestructive_secondaryButtonHandler;
    NSString *_footer_annotatedText;
    CDUnknownBlockType _footer_footerLinkHandler;
    NSString *_primaryAndSecondary_primaryButtonTitle;
    CDUnknownBlockType _primaryAndSecondary_primaryButtonHandler;
    NSString *_primaryAndSecondary_secondaryButtonTitle;
    CDUnknownBlockType _primaryAndSecondary_secondaryButtonHandler;
    NSString *_primaryAndFooter_primaryButtonTitle;
    CDUnknownBlockType _primaryAndFooter_primaryButtonHandler;
    NSString *_primaryAndFooter_annotatedText;
    CDUnknownBlockType _primaryAndFooter_footerLinkHandler;
    NSString *_secondaryAndFooter_secondaryButtonTitle;
    CDUnknownBlockType _secondaryAndFooter_secondaryButtonHandler;
    NSString *_secondaryAndFooter_annotatedText;
    CDUnknownBlockType _secondaryAndFooter_footerLinkHandler;
    NSString *_all_primaryButtonTitle;
    CDUnknownBlockType _all_primaryButtonHandler;
    NSString *_all_secondaryButtonTitle;
    CDUnknownBlockType _all_secondaryButtonHandler;
    NSString *_all_annotatedText;
    CDUnknownBlockType _all_footerLinkHandler;
}

+ (id)secondaryWithSecondaryButtonTitle:(id)arg1 secondaryButtonHandler:(CDUnknownBlockType)arg2;
+ (id)secondaryDestructiveWithSecondaryButtonTitle:(id)arg1 secondaryButtonHandler:(CDUnknownBlockType)arg2;
+ (id)secondaryAndFooterWithSecondaryButtonTitle:(id)arg1 secondaryButtonHandler:(CDUnknownBlockType)arg2 annotatedText:(id)arg3 footerLinkHandler:(CDUnknownBlockType)arg4;
+ (id)primaryWithPrimaryButtonTitle:(id)arg1 primaryButtonHandler:(CDUnknownBlockType)arg2;
+ (id)primaryFullWidthWithPrimaryButtonTitle:(id)arg1 primaryButtonHandler:(CDUnknownBlockType)arg2;
+ (id)primaryAndSecondaryWithPrimaryButtonTitle:(id)arg1 primaryButtonHandler:(CDUnknownBlockType)arg2 secondaryButtonTitle:(id)arg3 secondaryButtonHandler:(CDUnknownBlockType)arg4;
+ (id)primaryAndFooterWithPrimaryButtonTitle:(id)arg1 primaryButtonHandler:(CDUnknownBlockType)arg2 annotatedText:(id)arg3 footerLinkHandler:(CDUnknownBlockType)arg4;
+ (id)footerWithAnnotatedText:(id)arg1 footerLinkHandler:(CDUnknownBlockType)arg2;
+ (id)allWithPrimaryButtonTitle:(id)arg1 primaryButtonHandler:(CDUnknownBlockType)arg2 secondaryButtonTitle:(id)arg3 secondaryButtonHandler:(CDUnknownBlockType)arg4 annotatedText:(id)arg5 footerLinkHandler:(CDUnknownBlockType)arg6;
- (void).cxx_destruct;
- (void)matchPrimary:(CDUnknownBlockType)arg1 primaryFullWidth:(CDUnknownBlockType)arg2 secondary:(CDUnknownBlockType)arg3 secondaryDestructive:(CDUnknownBlockType)arg4 footer:(CDUnknownBlockType)arg5 primaryAndSecondary:(CDUnknownBlockType)arg6 primaryAndFooter:(CDUnknownBlockType)arg7 secondaryAndFooter:(CDUnknownBlockType)arg8 all:(CDUnknownBlockType)arg9;

@end
