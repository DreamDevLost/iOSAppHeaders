//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class IGProfilePictureImageView, IGTableLayoutSpec, UILabel;

@interface IGEISharedFollowersProfileCell : UITableViewCell
{
    IGTableLayoutSpec *_tableInterface;
    IGProfilePictureImageView *_profilePictureImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

- (void).cxx_destruct;
- (void)configureWithTitleText:(id)arg1 subtitleText:(id)arg2 profileImage:(id)arg3 tableInterface:(id)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
