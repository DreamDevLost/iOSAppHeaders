//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGBusinessFlowBusinessSignUp, NSString;

@protocol IGBusinessFlowBusinessSignUpCompletionDelegate <NSObject>
- (void)businessSignUpFlowGDPRBlocked:(IGBusinessFlowBusinessSignUp *)arg1;
- (void)businessSignUpFlow:(IGBusinessFlowBusinessSignUp *)arg1 didCompleteWithStep:(NSString *)arg2;
@end

