//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession, NSString;

@interface IGSingleFeedTitleHelper : NSObject
{
    IGUserSession *_userSession;
    NSString *_adPreviewTitle;
}

- (void).cxx_destruct;
- (id)_singleFeedTitleForPromotion;
- (_Bool)_isPostPromotionFromCurrentUser:(id)arg1;
- (id)singleFeedTitleFromPost:(id)arg1;
- (id)initWithUserSession:(id)arg1 adPreviewTitle:(id)arg2;

@end

