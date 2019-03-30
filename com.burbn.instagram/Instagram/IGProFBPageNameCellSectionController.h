//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "UITextFieldDelegate.h"

@class IGBusinessConversionFacebookPageDataSource, IGProFBPageNameViewModel, NSString;

@interface IGProFBPageNameCellSectionController : IGListSectionController <UITextFieldDelegate>
{
    IGProFBPageNameViewModel *_viewModel;
    IGBusinessConversionFacebookPageDataSource *_dataSource;
    id <IGProFBPageNameCellSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)_setIsLoading:(_Bool)arg1;
- (void)_handleValidatePageNameWithInputPageName:(id)arg1 suggestedName:(id)arg2 errorMessage:(id)arg3;
- (void)_validatePageName;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithViewModel:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

