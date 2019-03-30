//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGDrawControllerDelegate.h"
#import "IGStoryBrushButtonsDelegate.h"
#import "IGStoryBrushDataSourceDelegate.h"
#import "IGStoryCreationDrawingViewControllerType.h"
#import "IGStoryDrawingControlsDataSource.h"
#import "IGStoryDrawingControlsDelegate.h"

@class FBTimer, IGDrawViewController, IGStoryBrushButtonsView, IGStoryBrushDataSource, IGStoryDrawingControlsOverlayView, IGUserSession, NSString;

@interface IGStoryCreationDrawingViewController : UIViewController <IGDrawControllerDelegate, IGStoryBrushButtonsDelegate, IGStoryBrushDataSourceDelegate, IGStoryDrawingControlsDelegate, IGStoryDrawingControlsDataSource, IGStoryCreationDrawingViewControllerType>
{
    _Bool _viewIsShowing;
    IGDrawViewController *_drawViewController;
    IGStoryDrawingControlsOverlayView *_drawingControlsOverlayView;
    IGStoryBrushButtonsView *_brushButtonsView;
    FBTimer *_chromeAppearanceDelayTimer;
    IGStoryBrushDataSource *_brushDataSource;
    id <IGDrawBrushCommon> _selectedBrush;
    long long _selectedDrawMode;
    _Bool _isBrushDeveloper;
    NSString *_module;
    id <IGStoryCreationDrawingViewControllerDelegate> _delegate;
    id <IGStoryCreationDrawingViewControllerDataSource> _dataSource;
    IGUserSession *_userSession;
}

@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGStoryCreationDrawingViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGStoryCreationDrawingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)storyBrushDataSource:(id)arg1 didLoadItems:(id)arg2 versionID:(id)arg3;
- (id)drawingControls:(id)arg1 colorAtWindowCoordinates:(struct CGPoint)arg2;
- (void)drawingControlsFinishedSelectingColorFromScreen:(id)arg1;
- (void)drawingControlsBeganSelectingColorFromScreen:(id)arg1;
- (void)drawingControls:(id)arg1 didSelectColor:(id)arg2;
- (void)drawingControls:(id)arg1 didSelectBrushWidth:(double)arg2;
- (void)drawControllerDidAddStroke:(id)arg1 withLength:(double)arg2;
- (void)drawControllerDidBeginDrawing:(id)arg1;
- (id)createDrawingImage;
- (_Bool)hasStrokesMarkedInternal;
- (_Bool)hasStrokesWithBrushName:(id)arg1;
- (id)specialBrushVersion;
- (_Bool)hasDrawing;
- (void)_clearDrawing;
- (void)_setDrawingChromeHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_dismiss;
- (void)_undoLastStroke;
- (void)storyBrushButtonsView:(id)arg1 didTapButtonForMode:(long long)arg2;
- (void)_updateSelectedBrushDrawMode:(long long)arg1;
- (void)setCanvasView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (id)initWithUserSession:(id)arg1 containerModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

