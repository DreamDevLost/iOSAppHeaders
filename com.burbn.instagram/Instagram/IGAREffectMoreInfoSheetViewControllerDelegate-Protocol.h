//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FBInspirationEffectAttributionModel, IGAREffectMoreInfoSheetViewController, NSString, UIViewController;

@protocol IGAREffectMoreInfoSheetViewControllerDelegate
- (void)moreInfoSheetViewController:(IGAREffectMoreInfoSheetViewController *)arg1 didTapProfileForUserID:(NSString *)arg2;
- (void)arEffectMoreInfoSheetViewController:(IGAREffectMoreInfoSheetViewController *)arg1 requestsPresentIPViolationViewController:(UIViewController *)arg2;
- (void)arEffectMoreInfoSheetViewController:(IGAREffectMoreInfoSheetViewController *)arg1 requestsPresentLicensingViewController:(UIViewController *)arg2;
- (FBInspirationEffectAttributionModel *)arEffectMoreInfoSheetViewControllerAttributionModelForCurrentAREffect:(IGAREffectMoreInfoSheetViewController *)arg1;
- (void)arEffectMoreInfoSheetViewController:(IGAREffectMoreInfoSheetViewController *)arg1 didRequestRemoveEffectWithID:(NSString *)arg2;
- (void)arEffectMoreInfoSheetViewController:(IGAREffectMoreInfoSheetViewController *)arg1 didReportAREffectWithID:(NSString *)arg2;
@end

