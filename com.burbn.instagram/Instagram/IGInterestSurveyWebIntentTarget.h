//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGeneratedIntentTarget.h"

@class NSString;

@interface IGInterestSurveyWebIntentTarget : FBGeneratedIntentTarget
{
    NSString *_userPK;
    id <IGSimpleActionPresentableViewerDelegate> _simpleActionDelegate;
    CDUnknownBlockType _navigationCompletion;
}

@property(readonly, nonatomic) CDUnknownBlockType navigationCompletion; // @synthesize navigationCompletion=_navigationCompletion;
@property(readonly, nonatomic) id <IGSimpleActionPresentableViewerDelegate> simpleActionDelegate; // @synthesize simpleActionDelegate=_simpleActionDelegate;
@property(readonly, nonatomic) NSString *userPK; // @synthesize userPK=_userPK;
- (void).cxx_destruct;
- (id)initWithUserPK:(id)arg1 simpleActionDelegate:(id)arg2 navigationCompletion:(CDUnknownBlockType)arg3;

@end

