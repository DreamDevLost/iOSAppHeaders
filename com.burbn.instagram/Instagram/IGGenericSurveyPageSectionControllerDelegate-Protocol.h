//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGGenericSurveyPageSectionController, IGGenericSurveyResult, NSArray, NSDictionary, NSString;

@protocol IGGenericSurveyPageSectionControllerDelegate <NSObject>
- (void)genericSurveyPageSectionController:(IGGenericSurveyPageSectionController *)arg1 didDetectErrorWithMessage:(NSString *)arg2;
- (void)genericSurveyPageSectionController:(IGGenericSurveyPageSectionController *)arg1 didReceiveSurveyResult:(IGGenericSurveyResult *)arg2 extraDict:(NSDictionary *)arg3;
- (void)genericSurveyPageSectionController:(IGGenericSurveyPageSectionController *)arg1 didCompleteWithSurveyResults:(NSArray *)arg2 extraDict:(NSDictionary *)arg3;
@end

