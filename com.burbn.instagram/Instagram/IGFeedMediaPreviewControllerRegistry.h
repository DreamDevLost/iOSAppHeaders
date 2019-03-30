//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface IGFeedMediaPreviewControllerRegistry : NSObject
{
    NSArray *_controllerClasses;
}

+ (id)registryWithMediaPreviewControllerClasses:(id)arg1;
+ (id)defaultRegistry;
- (void).cxx_destruct;
- (id)mediaPreviewControllerWithFeedItem:(id)arg1 previewContext:(id)arg2 module:(id)arg3 userSession:(id)arg4 loggingExtras:(id)arg5;
- (Class)mediaPreviewControllerClassWithFeedItem:(id)arg1;
- (id)initWithMediaPreviewControllerClasses:(id)arg1;

@end
