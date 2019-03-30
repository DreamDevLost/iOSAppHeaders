//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBKVOController, IGUser, IGUserSession, UIBarButtonItem, UIButton, UIView;

@interface IGProfileNavigationItemsController : NSObject
{
    IGUser *_user;
    IGUserSession *_userSession;
    _Bool _isMainProfileSurface;
    _Bool _isCurrentUser;
    UIBarButtonItem *_moreBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_archiveBarButtonItem;
    UIBarButtonItem *_favoritesBarButtonItem;
    UIBarButtonItem *_sideTrayButtonItem;
    long long _sideTrayBadgeCount;
    _Bool _headerCollapsed;
    _Bool _showFadingFollowButton;
    UIView *_transformingRightBarButtonView;
    UIButton *_transformingRightBarButtonViewMoreButton;
    UIButton *_transformingRightBarButtonViewFollowButton;
    FBKVOController *_followStatusKVOController;
    id <IGProfileNavigationItemsControllerDelegate> _delegate;
}

+ (id)_sizedNavigationBarButtonWithTitle:(id)arg1 textColor:(id)arg2;
@property(nonatomic) __weak id <IGProfileNavigationItemsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_showTemporaryButtonWithTitle:(id)arg1;
- (void)_crossFadeTransformingRightBarButtonToBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_tryAnimateTransformingRightBarButtonViewWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_transformingRightBarButtonViewShowFollowButton;
- (void)_updateTransformingRightBarButtonView;
- (void)_onSideTrayButton:(id)arg1;
- (void)_onFavoritesButton:(id)arg1;
- (void)_onArchiveButtonTapped:(id)arg1;
- (void)_onEnvironmentToggleButton:(id)arg1;
- (void)_onBackButton:(id)arg1;
- (void)_onFollowButton:(id)arg1;
- (void)_onMoreButton:(id)arg1;
- (void)_sideTrayBadgeUpdated:(id)arg1;
- (id)_barButtonItemForNavigationItem:(long long)arg1;
- (id)_newEnvironmentBarButtonItem;
- (struct CGRect)_frameForBarButtonItem:(id)arg1 inView:(id)arg2;
- (id)_sideTrayButtonItem;
- (id)_favoritesBarButtonItem;
- (id)_archiveBarButtonItem;
- (id)_backBarButtonItem;
- (id)_moreBarButtonItem;
- (void)setHeaderCollapsed:(_Bool)arg1;
- (struct CGRect)sideTrayButtonFrameRelativeToView:(id)arg1;
- (struct CGRect)archiveBarButtonFrameRelativeToView:(id)arg1;
- (void)fetchArchiveBadgeStatus;
- (id)generateBarButtonItems:(id)arg1;
- (void)dealloc;
- (id)initWithBarContext:(id)arg1;

@end
