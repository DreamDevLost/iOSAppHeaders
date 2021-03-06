//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGLeadGenCollectionViewDynamicSizingCell.h"
#import "IGLeadGenQuestionCell.h"
#import "UITextFieldDelegate.h"

@class IGLeadGenInfoFieldDataViewModel, IGTextField, NSString, UILabel, UIView;

@interface IGLeadGenQuestionTextInputCell : UICollectionViewCell <UITextFieldDelegate, IGLeadGenQuestionCell, IGLeadGenCollectionViewDynamicSizingCell>
{
    UIView *_hairline;
    UILabel *_questionView;
    IGTextField *_answerView;
    UILabel *_errorMessage;
    IGLeadGenInfoFieldDataViewModel *_viewModel;
    id <IGLeadGenQuestionCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (struct CGSize)dynamicSizeWithConstrainingSize:(struct CGSize)arg1;
- (void)_updateErrorMessageView;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)configureWithModel:(id)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

