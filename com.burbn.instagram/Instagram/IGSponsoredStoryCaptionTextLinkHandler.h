//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface IGSponsoredStoryCaptionTextLinkHandler : NSObject
{
    NSDictionary *_mentionedList;
    id <IGSponsoredStoryCaptionTextLinkHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGSponsoredStoryCaptionTextLinkHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleCaptionLinkTapWithURL:(id)arg1 atPoint:(struct CGPoint)arg2 scrollEnabled:(_Bool)arg3;
- (id)initWithMentionList:(id)arg1;

@end

