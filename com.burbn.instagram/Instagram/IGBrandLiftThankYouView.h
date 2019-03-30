//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGLabel, IGStringStyle, UILabel;

@interface IGBrandLiftThankYouView : UIView
{
    _Bool _showResults;
    id <IGBrandLiftThankYouViewDelegate> _delegate;
    UILabel *_messageLabel;
    IGLabel *_doneLabel;
    IGLabel *_showResultsLabel;
    IGStringStyle *_buttonStyle;
}

@property(retain, nonatomic) IGStringStyle *buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(retain, nonatomic) IGLabel *showResultsLabel; // @synthesize showResultsLabel=_showResultsLabel;
@property(retain, nonatomic) IGLabel *doneLabel; // @synthesize doneLabel=_doneLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(nonatomic) _Bool showResults; // @synthesize showResults=_showResults;
@property(nonatomic) __weak id <IGBrandLiftThankYouViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_showResultsLabelTapped;
- (void)_doneLabelTapped;
- (id)initWithText:(id)arg1 showResults:(_Bool)arg2 withFrame:(struct CGRect)arg3;

@end

