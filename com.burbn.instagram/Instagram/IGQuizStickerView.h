//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGQuizStickerOptionCellDelegate.h"
#import "IGStickerViewType.h"
#import "IGTappableStickerViewType.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UITextViewDelegate.h"

@class IGGradientView, IGTapButton, IGTextView, NSArray, NSNumber, NSString, UICollectionView;

@interface IGQuizStickerView : UIView <UITextViewDelegate, IGQuizStickerOptionCellDelegate, UICollectionViewDataSource, UICollectionViewDelegate, IGStickerViewType, IGTappableStickerViewType>
{
    UIView *_containerCardView;
    IGTextView *_questionTextView;
    IGGradientView *_questionContainer;
    UICollectionView *_optionsCollectionView;
    IGTapButton *_submitButton;
    NSArray *_options;
    unsigned long long _correctOption;
    NSString *_pk;
    _Bool _viewerCanAnswer;
    NSNumber *_viewerAnswer;
    NSNumber *_tentativeViewerAnswer;
    _Bool _creationMode;
    _Bool _editingQuestion;
    _Bool _isAnswering;
    _Bool _interactiveElementsEnabled;
    _Bool _shouldRenderAddCell;
    id <IGQuizStickerViewDelegate> _delegate;
    id <IGQuizStickerViewConsumptionDelegate> _consumptionDelegate;
    NSArray *_colorSchemeColors;
    unsigned long long _colorScheme;
}

@property(nonatomic) _Bool shouldRenderAddCell; // @synthesize shouldRenderAddCell=_shouldRenderAddCell;
@property(nonatomic) _Bool interactiveElementsEnabled; // @synthesize interactiveElementsEnabled=_interactiveElementsEnabled;
@property(readonly, nonatomic) _Bool isAnswering; // @synthesize isAnswering=_isAnswering;
@property(nonatomic, getter=isEditingQuestion) _Bool editingQuestion; // @synthesize editingQuestion=_editingQuestion;
@property(nonatomic) unsigned long long colorScheme; // @synthesize colorScheme=_colorScheme;
@property(retain, nonatomic) NSArray *colorSchemeColors; // @synthesize colorSchemeColors=_colorSchemeColors;
@property(nonatomic) __weak id <IGQuizStickerViewConsumptionDelegate> consumptionDelegate; // @synthesize consumptionDelegate=_consumptionDelegate;
@property(nonatomic) __weak id <IGQuizStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)storyAssetDiffableIdentifier;
- (id)tapModelObject;
- (id)stickerView;
- (id)loggingId;
- (void)_applyStateToCell:(id)arg1 atIndexPath:(id)arg2;
- (unsigned long long)_stateForCellAtIndex:(unsigned long long)arg1;
- (_Bool)_optionsComplete;
- (void)_reloadCellStates;
- (void)_assignRandomCorrectOption;
- (id)_textViewWithQuestion:(id)arg1;
- (void)_didTapSubmit;
- (void)_refreshAddCell;
- (void)quizStickerOptionCell:(id)arg1 didUpdateText:(id)arg2;
- (void)quizStickerOptionCellDidTapNext:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)_registerVoteAtIndex:(unsigned long long)arg1;
- (void)endAnswering;
- (void)beginAnsweringWithInitialVoteIndex:(id)arg1;
- (id)voteIndexAtPointInWindowCoordinates:(struct CGPoint)arg1;
- (id)consumptionModel;
@property(readonly, nonatomic) _Bool isComplete;
- (void)paste:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_defaultInitWithQuestion:(id)arg1;
- (id)initConsumptionViewWithConsumptionModel:(id)arg1;
- (id)initCreationView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

