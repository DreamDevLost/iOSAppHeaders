//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGGenericSurveyAlertAssistant : NSObject
{
    id <IGGenericSurveyAlertAssistantDeleagte> _delegate;
    _Bool _isStoryViewed;
}

@property(nonatomic) _Bool isStoryViewed; // @synthesize isStoryViewed=_isStoryViewed;
- (void).cxx_destruct;
- (void)reportErrorWithType:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1;

@end
