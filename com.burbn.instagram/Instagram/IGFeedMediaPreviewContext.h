//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession, UIImage;

@interface IGFeedMediaPreviewContext : NSObject
{
    UIImage *_placeholderImage;
    double _layoutWidth;
    id <UIViewControllerPreviewing> _previewingContext;
    IGUserSession *_userSession;
}

+ (id)contextWithPlaceholderImage:(id)arg1 layoutWidth:(double)arg2 previewingContext:(id)arg3 userSession:(id)arg4;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) id <UIViewControllerPreviewing> previewingContext; // @synthesize previewingContext=_previewingContext;
@property(readonly, nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(readonly, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (void).cxx_destruct;
- (id)initWithPlaceholderImage:(id)arg1 layoutWidth:(double)arg2 previewingContext:(id)arg3 userSession:(id)arg4;

@end

