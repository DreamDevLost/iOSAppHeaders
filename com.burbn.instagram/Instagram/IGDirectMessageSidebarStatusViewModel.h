//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, UIColor;

@interface IGDirectMessageSidebarStatusViewModel : FBValueObject <NSCopying, NSCoding>
{
    _Bool _showSendingIndicator;
    NSString *_iconImageName;
    UIColor *_iconTintColor;
    NSString *_status;
}

+ (id)viewModelForMessageWithSentDate:(id)arg1 isSenderCurrentUser:(_Bool)arg2 isGroupThread:(_Bool)arg3 actionSummary:(id)arg4 outgoingMessageStatus:(id)arg5;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool showSendingIndicator; // @synthesize showSendingIndicator=_showSendingIndicator;
@property(readonly, copy, nonatomic) UIColor *iconTintColor; // @synthesize iconTintColor=_iconTintColor;
@property(readonly, copy, nonatomic) NSString *iconImageName; // @synthesize iconImageName=_iconImageName;
- (void).cxx_destruct;
- (id)initWithIconImageName:(id)arg1 iconTintColor:(id)arg2 showSendingIndicator:(_Bool)arg3 status:(id)arg4;

@end
