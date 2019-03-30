//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGStoryMusicBrowserPlayPauseButton, IGStoryMusicBrowserSongCellContentView, NSString, NSURL, UIImage, UILabel, UIView;

@interface IGStoryMusicBrowserRecommendedSongCell : UICollectionViewCell
{
    UILabel *_title;
    UILabel *_subtitle;
    IGStoryMusicBrowserSongCellContentView *_songContentView;
    UIView *_bottomSeparator;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool recommendedSongHidden;
@property(nonatomic) _Bool isExplicit;
@property(copy, nonatomic) NSString *artistName;
@property(copy, nonatomic) NSString *songTitle;
@property(retain, nonatomic) NSURL *albumArtURL;
@property(retain, nonatomic) UIImage *albumArtImage;
@property(readonly, nonatomic) IGStoryMusicBrowserPlayPauseButton *playPauseButton;
@property(copy, nonatomic) NSString *subtitleText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

