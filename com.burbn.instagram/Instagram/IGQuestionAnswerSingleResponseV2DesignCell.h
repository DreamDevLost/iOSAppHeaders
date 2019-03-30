//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGQuestionAnswerSingleResponseViewModel, IGRemoteImageView, UIImageView, UILabel, UIView;

@interface IGQuestionAnswerSingleResponseV2DesignCell : UICollectionViewCell
{
    UIView *_wrapperView;
    UIView *_footerView;
    UILabel *_responseLabel;
    UILabel *_usernameLabel;
    UILabel *_replyLabel;
    UIImageView *_chevronImageView;
    IGRemoteImageView *_profilePictureImageView;
    IGQuestionAnswerSingleResponseViewModel *_model;
}

+ (id)_locallyRepliedResponsePks;
+ (id)cellIdentifier;
+ (void)wrapperBorderColor:(id *)arg1 wrapperBorderWidth:(double *)arg2 footerBackgroundColor:(id *)arg3 footerForegroundColor:(id *)arg4 textColor:(id *)arg5 forBackgroundFillColor:(id)arg6;
- (void).cxx_destruct;
- (void)_questionAnswerReshareResponseControllerDidReshareResponse:(id)arg1;
- (void)layoutSubviews;
- (void)_setFillColor:(id)arg1;
- (void)configureWithModel:(id)arg1 userSession:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
