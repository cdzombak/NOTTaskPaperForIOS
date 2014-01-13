//
//  PressIndicatorView.m
// PlainText
//
//  Created by Jesse Grosjean on 6/25/10.
//

#import "PressIndicatorView.h"
#import "ApplicationViewController.h"
#import "ApplicationController.h"
#import "UIImage_Additions.h"
#import "UIView_Additions.h"

@implementation PressIndicatorView

- (void)refreshFromDefaults {
	UIColor *newTintInkColor = [APP_VIEW_CONTROLLER inkColorByPercent:0.5];
	if (![lastTintInkColor isEqual:newTintInkColor]) {
		lastTintInkColor = newTintInkColor;
		self.image = [UIImage colorizeImage:[UIImage imageNamed:@"pressIndicator.png"] color:[APP_VIEW_CONTROLLER inkColorByPercent:0.5]];
	}
}

- (id)init {
	self = [super init];
	[self refreshFromDefaults];
	[self sizeToFit];
	return self;
}


- (void)willMoveToWindow:(UIWindow *)newWindow {
	[super willMoveToWindow:newWindow];
	[self refreshFromDefaults];
}

@end
