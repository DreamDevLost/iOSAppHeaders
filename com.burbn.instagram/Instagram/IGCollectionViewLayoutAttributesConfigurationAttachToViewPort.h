//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGCollectionViewLayoutAttributesConfiguration.h"

@interface IGCollectionViewLayoutAttributesConfigurationAttachToViewPort : NSObject <IGCollectionViewLayoutAttributesConfiguration>
{
    unsigned long long _viewPortEdge;
    unsigned long long _edge;
    double _offset;
    _Bool _isActive;
    id <IGCollectionViewLayoutAttributesConfigurationDelegate> _delegate;
}

+ (id)top;
@property(nonatomic) __weak id <IGCollectionViewLayoutAttributesConfigurationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)indexPathDependenciesWithCollectionView:(id)arg1;
- (void)_setIsActive:(_Bool)arg1 withContext:(id)arg2;
- (void)adjustAttributes:(id)arg1 withContext:(id)arg2;
- (id)initWithViewPortEdge:(unsigned long long)arg1 edge:(unsigned long long)arg2 offset:(double)arg3;

@end

