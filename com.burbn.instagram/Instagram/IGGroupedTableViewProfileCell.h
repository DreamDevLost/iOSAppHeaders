//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewCell.h"

@class IGTextField, UIView, UIViewController<UITextFieldDelegate>;

@interface IGGroupedTableViewProfileCell : IGGroupedTableViewCell
{
    UIView *_lineView;
    IGTextField *_usernameField;
    IGTextField *_passwordField;
    UIViewController<UITextFieldDelegate> *_delegate;
}

+ (double)height;
@property(nonatomic) __weak UIViewController<UITextFieldDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain, nonatomic) IGTextField *usernameField; // @synthesize usernameField=_usernameField;
- (void).cxx_destruct;
- (void)setListRedesignOn:(_Bool)arg1;
- (void)_configureTextLabels;
@property(readonly, nonatomic) double rightImagePadding;
@property(readonly, nonatomic) double leftImagePadding;
- (void)_layoutLineViewWithContentWidth:(double)arg1 horizontalContentInset:(double)arg2;
- (void)layoutSubviews;
- (id)init;
- (void)dealloc;

@end

