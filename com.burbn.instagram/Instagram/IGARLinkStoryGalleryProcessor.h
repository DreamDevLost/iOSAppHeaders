//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGARLinkManager, IGNametagLoggingContext, IGUserSession;

@interface IGARLinkStoryGalleryProcessor : NSObject
{
    _Bool _shouldProcessNametag;
    _Bool _showVisualFeedback;
    IGUserSession *_userSession;
    IGARLinkManager *_ARLinkManager;
    IGNametagLoggingContext *_loggingContext;
}

- (void).cxx_destruct;
- (void)processPhotoFromAssetManager:(id)arg1 storyCreationModel:(id)arg2 creationConfiguration:(id)arg3 fromViewController:(id)arg4;
- (id)initWithUserSession:(id)arg1 ARLinkManager:(id)arg2 loggingContext:(id)arg3;

@end

