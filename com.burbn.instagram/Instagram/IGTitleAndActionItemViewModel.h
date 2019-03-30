//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "IGTitleAndActionItemViewModelProtocol.h"

@class IGLabelItemConfiguration, NSString, UIFont;

@interface IGTitleAndActionItemViewModel : NSObject <IGTitleAndActionItemViewModelProtocol, IGListDiffable>
{
    NSString *_labelTitle;
    NSString *_actionButtonTitle;
    IGLabelItemConfiguration *_labelConfiguration;
    UIFont *_actionButtonFont;
    double _actionButtonRightPadding;
}

@property(readonly, nonatomic) double actionButtonRightPadding; // @synthesize actionButtonRightPadding=_actionButtonRightPadding;
@property(readonly, nonatomic) UIFont *actionButtonFont; // @synthesize actionButtonFont=_actionButtonFont;
@property(readonly, nonatomic) IGLabelItemConfiguration *labelConfiguration; // @synthesize labelConfiguration=_labelConfiguration;
@property(readonly, copy, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
@property(readonly, copy, nonatomic) NSString *labelTitle; // @synthesize labelTitle=_labelTitle;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithLabelTitle:(id)arg1 actionButtonTitle:(id)arg2 labelConfiguration:(id)arg3 actionButtonFont:(id)arg4 actionButtonRightPadding:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
