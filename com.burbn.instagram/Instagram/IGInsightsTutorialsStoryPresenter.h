//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGInsightsTutorial, IGInsightsTutorialsStoryViewController, UIViewController;

@interface IGInsightsTutorialsStoryPresenter : NSObject
{
    IGInsightsTutorial *_tutorial;
    IGInsightsTutorialsStoryViewController *_tutorialsStoryVC;
    UIViewController *_sourceVC;
}

- (void).cxx_destruct;
- (void)presentTutorials;
- (void)_presentDiscoverAccounts;
- (void)_presentEditProfileViewController;
- (void)_dialogAction:(long long)arg1;
- (void)_presentCreatePostViewController;
- (id)initWithTutorial:(id)arg1 withSourceVC:(id)arg2 fromPoint:(struct CGPoint)arg3;

@end
