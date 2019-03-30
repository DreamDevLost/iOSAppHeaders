//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGDiscoveryEYMFOneUpCellConfiguration : FBValueObject <NSCopying, NSCoding>
{
    _Bool _showDismissButton;
    NSString *_module;
    NSString *_followControllerContextString;
    id <IGFollowControllerLoggingProvider> _followControllerLoggingProvider;
}

@property(readonly, nonatomic) _Bool showDismissButton; // @synthesize showDismissButton=_showDismissButton;
@property(readonly, nonatomic) id <IGFollowControllerLoggingProvider> followControllerLoggingProvider; // @synthesize followControllerLoggingProvider=_followControllerLoggingProvider;
@property(readonly, copy, nonatomic) NSString *followControllerContextString; // @synthesize followControllerContextString=_followControllerContextString;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (id)initWithModule:(id)arg1 followControllerContextString:(id)arg2 followControllerLoggingProvider:(id)arg3 showDismissButton:(_Bool)arg4;

@end
