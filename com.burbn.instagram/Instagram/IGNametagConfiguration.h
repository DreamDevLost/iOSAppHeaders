//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGNametagConfiguration : NSObject
{
    double _widthFactor;
    double _heightFactor;
    double _animationDuration;
    double _cornerRadiusFactor;
    double _profilePicViewSizeFactor;
    _Bool _showCameraButton;
    _Bool _showCloseButton;
    _Bool _showGalaryButton;
    _Bool _showScanModeProfileImage;
    double _profileImageViewSize;
    double _profileImageBottomInset;
    double _profileImageRightInset;
    double _iphoneXTopPadding;
}

+ (id)storyCameraConfig;
+ (id)defaultConfig;
@property(readonly, nonatomic) _Bool showScanModeProfileImage; // @synthesize showScanModeProfileImage=_showScanModeProfileImage;
@property(readonly, nonatomic) _Bool showGalaryButton; // @synthesize showGalaryButton=_showGalaryButton;
@property(readonly, nonatomic) _Bool showCloseButton; // @synthesize showCloseButton=_showCloseButton;
@property(readonly, nonatomic) _Bool showCameraButton; // @synthesize showCameraButton=_showCameraButton;
@property(readonly, nonatomic) double iphoneXTopPadding; // @synthesize iphoneXTopPadding=_iphoneXTopPadding;
@property(readonly, nonatomic) double profileImageRightInset; // @synthesize profileImageRightInset=_profileImageRightInset;
@property(readonly, nonatomic) double profileImageBottomInset; // @synthesize profileImageBottomInset=_profileImageBottomInset;
@property(readonly, nonatomic) double profileImageViewSize; // @synthesize profileImageViewSize=_profileImageViewSize;
@property(readonly, nonatomic) double profilePicViewSizeFactor; // @synthesize profilePicViewSizeFactor=_profilePicViewSizeFactor;
@property(readonly, nonatomic) double cornerRadiusFactor; // @synthesize cornerRadiusFactor=_cornerRadiusFactor;
@property(readonly, nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(readonly, nonatomic) double heightFactor; // @synthesize heightFactor=_heightFactor;
@property(readonly, nonatomic) double widthFactor; // @synthesize widthFactor=_widthFactor;
- (id)_initWithWidthFactor:(double)arg1 heightFactor:(double)arg2 animationDuration:(double)arg3 cornerRadiusFactor:(double)arg4 profilePicViewSizeFactor:(double)arg5 profileImageBottomInset:(double)arg6 profileImageRightInset:(double)arg7 profileImageViewSize:(double)arg8 iphoneXTopPadding:(double)arg9 showCameraButton:(_Bool)arg10 showCloseButton:(_Bool)arg11 showGalaryButton:(_Bool)arg12 showScanModeProfileImage:(_Bool)arg13;

@end
