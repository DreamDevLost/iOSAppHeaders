//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGPopoverController, NSString, NSURL;

@interface IGAutoLoginUpsellController : NSObject
{
    NSString *_userPK;
    NSString *_username;
    NSURL *_profileURL;
    NSString *_module;
    _Bool _isFBConnected;
    long long _contactPointType;
    IGPopoverController *_popoverController;
}

- (void).cxx_destruct;
- (id)_createDescriptionText;
- (id)_createImageView;
- (void)displayUpsellFromVC:(id)arg1 primaryActionHandler:(CDUnknownBlockType)arg2 secondaryActionHandler:(CDUnknownBlockType)arg3 title:(id)arg4 description:(id)arg5 primaryActionText:(id)arg6 secondaryActionText:(id)arg7;
- (void)displayUpsellFromVC:(id)arg1 primaryActionHandler:(CDUnknownBlockType)arg2 secondaryActionHandler:(CDUnknownBlockType)arg3;
- (id)initWithUserPK:(id)arg1 username:(id)arg2 profileURL:(id)arg3 isFBConnected:(_Bool)arg4 contactPointType:(long long)arg5 module:(id)arg6;

@end
