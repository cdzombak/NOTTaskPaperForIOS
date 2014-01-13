//
//  BrowserViewController.h
// PlainText
//
//  Created by Jesse Grosjean on 6/23/10.
//

#import "ViewController.h"


@class BrowserView;
@class PathViewController;
@class ItemViewController;

@interface BrowserViewController : ViewController {
	NSMutableArray *itemViewControllers;
	BOOL updatingIsPush;
	BOOL updatingIsAnimated;
	NSUInteger updating;
}

@property (weak, nonatomic, readonly) ItemViewController *topItemViewController;
@property (weak, nonatomic, readonly) ItemViewController *currentItemViewController;

- (BrowserView *)browserView;
- (void)beginUpdates;
- (void)endUpdates:(BOOL)editingPath;
- (void)push:(ItemViewController *)aViewController animated:(BOOL)animated;
- (ItemViewController *)pop:(BOOL)animated;
- (NSArray *)popToRoot:(BOOL)animated;
	
@end

