//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol FBBusinessExtensionAutofillUIProviding <NSObject>
- (void)showSaveDialogWithGroupsToUpdate:(NSArray *)arg1 saveAutofillOnAcceptBlock:(void (^)(void))arg2 saveAutofillOnDeclineBlock:(void (^)(void))arg3;
- (void)hideAutofillScrollView;
- (void)showAutofillScrollViewWithAutofillGroups:(NSArray *)arg1 autofillConfirmedCallback:(void (^)(id <FBBusinessExtensionAutofillGroup>))arg2;
@end

