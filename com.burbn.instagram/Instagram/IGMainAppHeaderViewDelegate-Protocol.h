//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMainAppHeaderView, UIButton;

@protocol IGMainAppHeaderViewDelegate <NSObject>
- (void)header:(IGMainAppHeaderView *)arg1 didTapIGTVButton:(UIButton *)arg2;
- (void)headerDidTapRefresh:(IGMainAppHeaderView *)arg1;
- (void)headerDidLongTapProfile:(IGMainAppHeaderView *)arg1;
- (void)headerDidTapProfile:(IGMainAppHeaderView *)arg1;
- (void)headerDidTapActivity:(IGMainAppHeaderView *)arg1;
- (void)headerDidTapDirect:(IGMainAppHeaderView *)arg1;
- (void)headerDidTapLogo:(IGMainAppHeaderView *)arg1;
- (void)headerDidTapCamera:(IGMainAppHeaderView *)arg1;
@end
