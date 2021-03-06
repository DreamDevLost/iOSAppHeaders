//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGBusinessCategorySelectionViewController, IGBusinessConversionFacebookPageCategory, IGTextButton, NSArray, NSError, NSString;

@protocol IGBusinessCategorySelectionViewControllerDelegate <NSObject>
- (void)categorySelectionViewControllerdidStartEditingSearchCell:(IGBusinessCategorySelectionViewController *)arg1;
- (void)categorySelectionViewControllerdidStartTypingInCategorySearchCell:(IGBusinessCategorySelectionViewController *)arg1 searchText:(NSString *)arg2;
- (void)categorySelectionViewController:(IGBusinessCategorySelectionViewController *)arg1 didTapContinueButton:(IGTextButton *)arg2;
- (void)categorySelectionViewController:(IGBusinessCategorySelectionViewController *)arg1 didFetchSuggestedCategoryError:(NSError *)arg2 forPageName:(NSString *)arg3;
- (void)categorySelectionViewController:(IGBusinessCategorySelectionViewController *)arg1 didFetchSuggestedCategories:(NSArray *)arg2 forPageName:(NSString *)arg3;
- (void)categorySelectionViewController:(IGBusinessCategorySelectionViewController *)arg1 didFetchSubCategoryError:(NSError *)arg2 forSuperCategory:(IGBusinessConversionFacebookPageCategory *)arg3;
- (void)categorySelectionViewController:(IGBusinessCategorySelectionViewController *)arg1 didFetchSubCategories:(NSArray *)arg2 forSuperCategory:(IGBusinessConversionFacebookPageCategory *)arg3;
- (void)categorySelectionViewController:(IGBusinessCategorySelectionViewController *)arg1 didFetchSuperCategoryError:(NSError *)arg2;
- (void)categorySelectionViewController:(IGBusinessCategorySelectionViewController *)arg1 didFetchSuperCategories:(NSArray *)arg2;
- (void)categorySelectionViewController:(IGBusinessCategorySelectionViewController *)arg1 userDidSelectCategory:(IGBusinessConversionFacebookPageCategory *)arg2;
@end

