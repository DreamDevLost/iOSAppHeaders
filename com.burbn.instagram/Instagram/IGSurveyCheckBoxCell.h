//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPlainTableViewCell.h"

@class UIImage, UIImageView, UILabel;

@interface IGSurveyCheckBoxCell : IGPlainTableViewCell
{
    _Bool _isTop;
    UIImageView *_checkmarkImageView;
    UIImage *_checkMark;
    UIImage *_emptyCheckBox;
    UILabel *_questionOptionTextLabel;
}

@property(retain, nonatomic) UILabel *questionOptionTextLabel; // @synthesize questionOptionTextLabel=_questionOptionTextLabel;
@property(retain, nonatomic) UIImage *emptyCheckBox; // @synthesize emptyCheckBox=_emptyCheckBox;
@property(retain, nonatomic) UIImage *checkMark; // @synthesize checkMark=_checkMark;
@property(retain, nonatomic) UIImageView *checkmarkImageView; // @synthesize checkmarkImageView=_checkmarkImageView;
@property(nonatomic) _Bool isTop; // @synthesize isTop=_isTop;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setQuestionOptionText:(id)arg1;
- (id)initWithQuestionOption:(id)arg1 reuseIdentifier:(id)arg2;

@end

