//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPlainTableViewCell.h"

@class IGSwitch;

@interface IGDirectToggleTableViewCell : IGPlainTableViewCell
{
    IGSwitch *_toggle;
    id <IGDirectToggleTableViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectToggleTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGSwitch *toggle; // @synthesize toggle=_toggle;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

