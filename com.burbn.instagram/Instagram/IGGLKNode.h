//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGGLKCanvas, IGGLKTexture2D, NSArray, NSMutableArray, UIColor;

@interface IGGLKNode : NSObject
{
    _Bool _needsLayout;
    _Bool _needsUpdatedTransformationMatrices;
    NSMutableArray *_children;
    union _GLKMatrix4 _modelViewMatrix;
    union _GLKVector4 _backgroundColorVector;
    _Bool _hidden;
    _Bool _clipsToBounds;
    _Bool _userInteractionEnabled;
    double _alpha;
    UIColor *_backgroundColor;
    double _cornerRadius;
    IGGLKCanvas *_canvas;
    IGGLKNode *_parent;
    IGGLKTexture2D *_sampleTexture;
    struct CGPoint _position;
    struct CGPoint _anchorPoint;
    struct CGRect _bounds;
    union _GLKMatrix4 _modelViewProjectionMatrix;
    struct CATransform3D _transform3D;
}

@property(retain, nonatomic) IGGLKTexture2D *sampleTexture; // @synthesize sampleTexture=_sampleTexture;
@property(readonly, nonatomic) union _GLKMatrix4 modelViewProjectionMatrix; // @synthesize modelViewProjectionMatrix=_modelViewProjectionMatrix;
@property(nonatomic) __weak IGGLKNode *parent; // @synthesize parent=_parent;
@property(nonatomic) __weak IGGLKCanvas *canvas; // @synthesize canvas=_canvas;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic) _Bool clipsToBounds; // @synthesize clipsToBounds=_clipsToBounds;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) struct CATransform3D transform3D; // @synthesize transform3D=_transform3D;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (void).cxx_destruct;
- (void)_updateModelViewProjectionMatrix;
- (void)_updateModelViewMatrix;
- (union _GLKMatrix4)_projectionMatrix;
- (union _GLKMatrix4)_localToParentTransform;
- (void)_setNeedsUpdatedTransformationMatrices;
- (union _GLKVector4)_convertVector:(union _GLKVector4)arg1 withMatrix:(union _GLKMatrix4)arg2;
- (struct CGPoint)_localPosition;
- (void)draw;
- (void)drawBackgroundWithRenderer:(id)arg1;
- (void)setNeedsDisplay;
- (_Bool)requiresSampleTexture;
- (void)modelViewProjectionMatrixDidUpdate;
- (void)updateTransformationMatricesIfNeeded;
- (_Bool)pointInside:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (struct CGPoint)convertTranslation:(struct CGPoint)arg1 withEndPoint:(struct CGPoint)arg2 toNode:(id)arg3;
- (struct CGPoint)convertTranslation:(struct CGPoint)arg1 withEndPoint:(struct CGPoint)arg2 fromNode:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toNode:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromNode:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutChildren;
- (void)layoutIfNeeded;
- (void)setNeedsLayout;
- (void)didMoveToView;
- (void)willMoveToView:(id)arg1;
- (void)removeFromParent;
- (void)sendChildToBack:(id)arg1;
- (void)bringChildToFront:(id)arg1;
- (void)insertChild:(id)arg1 belowSibling:(id)arg2;
- (void)insertChild:(id)arg1 aboveSibling:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(long long)arg2;
- (void)addChild:(id)arg1;
@property(readonly, nonatomic) NSArray *children;
@property(nonatomic) struct CGAffineTransform transform;
@property(nonatomic) struct CGPoint center;
@property(nonatomic) struct CGRect frame;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

