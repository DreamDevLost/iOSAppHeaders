//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGProfileAvatarStatsView;

@protocol IGProfileAvatarStatsViewDelegate
- (void)profileViewDidTapViewEffects:(IGProfileAvatarStatsView *)arg1;
- (void)profileViewDidTapDirectMessage:(IGProfileAvatarStatsView *)arg1;
- (void)profileView:(IGProfileAvatarStatsView *)arg1 didCompleteFollowAction:(long long)arg2;
- (void)profileViewDidTapFollow:(IGProfileAvatarStatsView *)arg1 action:(long long)arg2;
- (void)profileViewDidTapChaining:(IGProfileAvatarStatsView *)arg1 didSelect:(_Bool)arg2;
- (void)profileViewDidTapPromote:(IGProfileAvatarStatsView *)arg1;
- (void)profileViewDidTapEditProfile:(IGProfileAvatarStatsView *)arg1;
- (void)profileViewDidTapFollowing:(IGProfileAvatarStatsView *)arg1;
- (void)profileViewDidTapMedia:(IGProfileAvatarStatsView *)arg1;
- (void)profileViewDidTapFollowers:(IGProfileAvatarStatsView *)arg1;
- (void)profileViewDidLongPressAvatar:(IGProfileAvatarStatsView *)arg1;
- (void)profileViewDidTapAvatar:(IGProfileAvatarStatsView *)arg1;
@end

