//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class IGLabel;

@interface IGVideoPlaybackAnalyticsEventHistoryCell : UITableViewCell
{
    IGLabel *_eventLabel;
    IGLabel *_deltaLabel;
}

- (void).cxx_destruct;
- (id)_extrasString:(id)arg1;
- (void)updateCellWithEventName:(id)arg1 delta:(double)arg2 extras:(id)arg3;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

