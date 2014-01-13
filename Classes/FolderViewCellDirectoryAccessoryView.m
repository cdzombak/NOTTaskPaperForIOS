//
//  DirectoryAccessoryView.m
// PlainText
//
//  Created by Jesse Grosjean on 6/24/10.
//

#import "FolderViewCellDirectoryAccessoryView.h"
#import "ApplicationViewController.h"
#import "ApplicationController.h"
#import "UIImage_Additions.h"
#import "UIView_Additions.h"

@implementation FolderViewCellDirectoryAccessoryView

UIImage *accessoryImage = nil;

- (void)myRefreshFromDefaults {
	if (!accessoryImage) {
		accessoryImage = [[UIImage colorizeImage:[UIImage imageNamed:@"directoryAccessoryImage.png"] color:[APP_VIEW_CONTROLLER inkColorByPercent:0.15]] retain];
	}
	self.image = accessoryImage;
	[self sizeToFit];
	[self setNeedsDisplay];
}

- (void)refreshFromDefaults {
	accessoryImage = nil;
	[self myRefreshFromDefaults];
}

- (id)init {
	self = [super init];
	[self myRefreshFromDefaults];	
	return self;
}

@end
