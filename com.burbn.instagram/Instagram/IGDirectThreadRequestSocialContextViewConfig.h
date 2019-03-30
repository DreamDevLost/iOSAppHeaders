//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGDirectThreadRequestSocialContextViewConfig : FBValueObject <NSCopying, NSCoding>
{
    _Bool _showActionButton;
    _Bool _showDisclaimerLabel;
    NSString *_socialContext;
}

@property(readonly, nonatomic) _Bool showDisclaimerLabel; // @synthesize showDisclaimerLabel=_showDisclaimerLabel;
@property(readonly, nonatomic) _Bool showActionButton; // @synthesize showActionButton=_showActionButton;
@property(readonly, copy, nonatomic) NSString *socialContext; // @synthesize socialContext=_socialContext;
- (void).cxx_destruct;
- (id)initWithSocialContext:(id)arg1 showActionButton:(_Bool)arg2 showDisclaimerLabel:(_Bool)arg3;

@end
