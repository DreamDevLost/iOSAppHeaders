//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMainFeedNetworkSourceController, IGNavigationController, IGTabPageViewController<IGNewsViewControllerType>, IGUserSession, IGViewController<IGProfileViewControllerType>;

@interface IGTabBarViewControllerManager : NSObject
{
    IGUserSession *_userSession;
    IGMainFeedNetworkSourceController *_mainFeedNetworkSourceController;
    id <IGNewsPresentationDelegate> _newsPresentationDelegate;
    IGNavigationController *_feedNavigationController;
    IGNavigationController *_exploreNavigationController;
    IGNavigationController *_newsNavigationController;
    IGTabPageViewController<IGNewsViewControllerType> *_newsViewController;
    IGNavigationController *_profileNavigationController;
    IGViewController<IGProfileViewControllerType> *_profileViewController;
    IGNavigationController *_directInboxNavigationController;
}

- (void).cxx_destruct;
- (void)destroyCurrentDirectInboxNavigationController;
- (void)destroyCurrentProfileNavigationController;
- (void)destroyCurrentNewsNavigationController;
- (void)destroyCurrentExploreNavigationController;
- (void)destroyCurrentFeedNavigationController;
@property(readonly, nonatomic) IGNavigationController *directInboxNavigationController; // @synthesize directInboxNavigationController=_directInboxNavigationController;
@property(readonly, nonatomic) IGViewController<IGProfileViewControllerType> *profileViewController; // @synthesize profileViewController=_profileViewController;
@property(readonly, nonatomic) IGNavigationController *profileNavigationController; // @synthesize profileNavigationController=_profileNavigationController;
@property(readonly, nonatomic) IGTabPageViewController<IGNewsViewControllerType> *newsViewController; // @synthesize newsViewController=_newsViewController;
@property(readonly, nonatomic) IGNavigationController *newsNavigationController; // @synthesize newsNavigationController=_newsNavigationController;
@property(readonly, nonatomic) IGNavigationController *postNavigationController;
@property(readonly, nonatomic) IGNavigationController *exploreNavigationController; // @synthesize exploreNavigationController=_exploreNavigationController;
@property(readonly, nonatomic) IGNavigationController *feedNavigationController; // @synthesize feedNavigationController=_feedNavigationController;
- (id)initWithUserSession:(id)arg1 networkSourceController:(id)arg2 newsPresentationDelegate:(id)arg3;

@end
