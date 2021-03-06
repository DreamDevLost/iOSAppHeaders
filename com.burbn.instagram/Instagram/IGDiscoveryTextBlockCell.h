//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGHashtagTextSectionModel, IGTapButton, UILabel, UIView;

@interface IGDiscoveryTextBlockCell : UICollectionViewCell
{
    IGHashtagTextSectionModel *_textSectionModel;
    UIView *_textContentView;
    UILabel *_headerLabel;
    UILabel *_titleLabel;
    IGTapButton *_dismissButton;
    id <IGDiscoveryTextBlockCellDelegate> _delegate;
}

+ (double)preferredHeightWithModel:(id)arg1 constrainedToWidth:(double)arg2;
@property(nonatomic) __weak id <IGDiscoveryTextBlockCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_didTapDismissButton:(id)arg1;
- (void)layoutSubviews;
- (void)configureWithTextSectionModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

