//
//  MRController+Testing.h
//
//  Copyright 2018-2021 Twitter, Inc.
//  Licensed under the MoPub SDK License Agreement
//  http://www.mopub.com/legal/sdk-license-agreement/
//

#import "MPAdViewConstant.h"
#import "MRController.h"
#import "MPWebView.h"

@interface MRController (Testing)
@property (nonatomic, strong) MPWebView *mraidWebView;

+ (BOOL)isValidResizeFrame:(CGRect)frame
     inApplicationSafeArea:(CGRect)applicationSafeArea
            allowOffscreen:(BOOL)allowOffscreen;

+ (CGRect)adjustedFrameForFrame:(CGRect)frame toFitIntoApplicationSafeArea:(CGRect)applicationSafeArea;

@end
