//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGInsightsAnalyticEvent : NSObject
{
}

+ (id)_analyticsModuleForViewController:(id)arg1;
+ (id)_currentModule;
+ (id)_sourceOfActionFromStack:(id)arg1;
+ (id)_eventWithName:(id)arg1 module:(id)arg2 navState:(id)arg3;
+ (id)_eventWithName:(id)arg1 feedItem:(id)arg2 module:(id)arg3 navState:(id)arg4 sourceOfAction:(id)arg5;
+ (id)eventWithName:(id)arg1 feedItem:(id)arg2 module:(id)arg3 navState:(id)arg4;
+ (id)eventWithName:(id)arg1 feedItem:(id)arg2 module:(id)arg3;
+ (id)eventWithName:(id)arg1 feedItem:(id)arg2;
+ (id)eventWithName:(id)arg1;

@end

