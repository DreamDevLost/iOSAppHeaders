//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectLightweightTabBarButtonViewModel, UIViewController<IGDirectScrollingTabChildViewControllerProtocol>;

@interface IGDirectScrollingTabViewModel : NSObject
{
    UIViewController<IGDirectScrollingTabChildViewControllerProtocol> *_viewController;
    IGDirectLightweightTabBarButtonViewModel *_buttonViewModel;
}

@property(readonly, nonatomic) IGDirectLightweightTabBarButtonViewModel *buttonViewModel; // @synthesize buttonViewModel=_buttonViewModel;
@property(readonly, nonatomic) UIViewController<IGDirectScrollingTabChildViewControllerProtocol> *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 buttonViewModel:(id)arg2;

@end

