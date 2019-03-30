//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGFollowControllerDelegate.h"

@class IGFollowController, IGUserContentOldStyleView, NSString;

@interface IGSocialContextUserCell : UICollectionViewCell <IGFollowControllerDelegate>
{
    id <IGSocialContextCellDelegate> _delegate;
    IGFollowController *_followController;
    IGUserContentOldStyleView *_userContentView;
}

@property(readonly, nonatomic) IGUserContentOldStyleView *userContentView; // @synthesize userContentView=_userContentView;
@property(readonly, nonatomic) IGFollowController *followController; // @synthesize followController=_followController;
@property(nonatomic) __weak id <IGSocialContextCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)followControllerDidDetectNewButtonState:(id)arg1;
- (void)followController:(id)arg1 buttonWasTappedWithAction:(long long)arg2;
- (void)followController:(id)arg1 didCompleteAction:(long long)arg2 success:(_Bool)arg3;
- (void)configureCellWithFeaturedUserInfo:(id)arg1 userSession:(id)arg2 module:(id)arg3;
- (void)layoutSubviews;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
