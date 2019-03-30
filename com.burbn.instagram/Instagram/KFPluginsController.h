//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KFPluginsController : NSObject
{
    struct Document *_document;
    struct NSMutableDictionary *_layerPluginsMap;
}

- (void).cxx_destruct;
- (void)_walkLayerPlugins:(struct Layer *)arg1 recursive:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_walkPluginInstancesWithBlock:(CDUnknownBlockType)arg1;
- (void)_createPluginsForDocument;
- (void)willPause;
- (void)willPlay;
- (void)didSeekToProgress:(double)arg1;
- (void)didFinishCreatingLayerHierarchy:(id)arg1;
- (id)pluginsForLayerWithID:(unsigned long long)arg1;
- (id)pluginNames;
- (void)animationDidLoad;
- (id)initWithKeyframesDocument:(struct Document *)arg1;

@end
