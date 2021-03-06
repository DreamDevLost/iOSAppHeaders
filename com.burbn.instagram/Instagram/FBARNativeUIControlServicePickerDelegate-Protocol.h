//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBARNativeUIControlServicePickerConfiguration;

@protocol FBARNativeUIControlServicePickerDelegate <NSObject>
- (void)nativeUIControlServiceForEffectDescriptor:(id <FBARNativeUIControlServiceEffectDescriptor>)arg1 didChangePickerSelectedIndex:(unsigned long long)arg2;
- (void)hidePickerForNativeUIControlServiceWithEffectDescriptor:(id <FBARNativeUIControlServiceEffectDescriptor>)arg1;
- (void)nativeUIControlServiceForEffectDescriptor:(id <FBARNativeUIControlServiceEffectDescriptor>)arg1 showPickerWithValueChangedCallback:(void (^)(unsigned long long))arg2;
- (void)nativeUIControlServiceForEffectDescriptor:(id <FBARNativeUIControlServiceEffectDescriptor>)arg1 configurePickerWithConfiguration:(FBARNativeUIControlServicePickerConfiguration *)arg2;
@end

