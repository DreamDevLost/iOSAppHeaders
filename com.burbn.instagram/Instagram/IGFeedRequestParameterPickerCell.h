//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSString, UIButton, UILabel, UIPickerView, UITextField;

@interface IGFeedRequestParameterPickerCell : UICollectionViewCell <UIPickerViewDelegate, UIPickerViewDataSource>
{
    NSArray *_values;
    NSString *_value;
    UIPickerView *_pickerView;
    UITextField *_textField;
    UIButton *_changeButton;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    id <IGFeedRequestParameterPickerCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGFeedRequestParameterPickerCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)_doneButtonTapped;
- (void)layoutSubviews;
- (void)configureWithTitle:(id)arg1 value:(id)arg2 values:(id)arg3;
- (void)_hidePicker;
- (void)showPicker;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
