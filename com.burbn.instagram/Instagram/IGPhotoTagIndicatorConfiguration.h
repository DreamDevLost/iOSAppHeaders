//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession, NSString;

@interface IGPhotoTagIndicatorConfiguration : NSObject
{
    _Bool _showTagIndicator;
    NSString *_indicatorText;
    NSString *_secondaryText;
    unsigned long long _indicatorIconTypes;
    NSString *_feedItemPk;
    NSString *_module;
    IGUserSession *_userSession;
}

@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) NSString *feedItemPk; // @synthesize feedItemPk=_feedItemPk;
@property(readonly, nonatomic) unsigned long long indicatorIconTypes; // @synthesize indicatorIconTypes=_indicatorIconTypes;
@property(readonly, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, nonatomic) NSString *indicatorText; // @synthesize indicatorText=_indicatorText;
@property(readonly, nonatomic) _Bool showTagIndicator; // @synthesize showTagIndicator=_showTagIndicator;
- (void).cxx_destruct;
- (id)initWithShowTagIndicator:(_Bool)arg1 indicatorText:(id)arg2 secondaryText:(id)arg3 indicatorIconTypes:(unsigned long long)arg4 feedItemPk:(id)arg5 module:(id)arg6 userSession:(id)arg7;

@end

