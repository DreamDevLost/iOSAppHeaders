//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/IGNavigationController.h>

@class IGPopoverController;

@interface IGPopoverNavigationController : IGNavigationController
{
    IGPopoverController *_containerController;
}

@property(nonatomic) __weak IGPopoverController *containerController; // @synthesize containerController=_containerController;
- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end

