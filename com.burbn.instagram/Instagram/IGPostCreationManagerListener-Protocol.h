//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGPostCreationManager, IGPostShare, IGPostUpload, NSData, NSURL;

@protocol IGPostCreationManagerListener <NSObject>
- (void)postCreationManager:(IGPostCreationManager *)arg1 post:(IGPostUpload *)arg2 carouselDidRenderVideoUrl:(NSURL *)arg3 hasEdits:(_Bool)arg4;
- (void)postCreationManager:(IGPostCreationManager *)arg1 post:(IGPostUpload *)arg2 carouselDidRenderImageData:(NSData *)arg3 hasEdits:(_Bool)arg4;
- (void)postCreationManager:(IGPostCreationManager *)arg1 didAddShare:(IGPostShare *)arg2;
- (void)postCreationManagerDidResumePost:(IGPostCreationManager *)arg1;
@end

