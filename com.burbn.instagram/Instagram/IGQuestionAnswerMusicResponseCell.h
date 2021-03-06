//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGQuestionAnswerMusicResponseSongContentView, IGRemoteImageView, NSString, NSURL, UIColor, UIImageView, UILabel, UIView;

@interface IGQuestionAnswerMusicResponseCell : UICollectionViewCell
{
    UIView *_wrapperView;
    UILabel *_usernameLabel;
    IGRemoteImageView *_profilePictureImageView;
    UILabel *_responseLabel;
    IGQuestionAnswerMusicResponseSongContentView *_songContentView;
    UIView *_footerView;
    UILabel *_replyLabel;
    UIImageView *_chevronImageView;
    long long _responseType;
    UIColor *_footerFillColor;
    struct UIEdgeInsets _contentInset;
}

@property(retain, nonatomic) UIColor *footerFillColor; // @synthesize footerFillColor=_footerFillColor;
@property(nonatomic) long long responseType; // @synthesize responseType=_responseType;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
@property(nonatomic) _Bool isExplicit;
@property(copy, nonatomic) NSString *artistName;
@property(copy, nonatomic) NSString *songTitle;
@property(retain, nonatomic) NSURL *albumArtURL;
@property(copy, nonatomic) NSString *textResponse;
@property(copy, nonatomic) NSString *userName;
@property(retain, nonatomic) NSURL *profilePicURL;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

