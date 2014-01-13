//
//  IFColorCellController.h
//  PlainText
//
//  Created by Jesse Grosjean on 4/17/11.
//

#import <Foundation/Foundation.h>


#import "IFCellController.h"
#import "IFCellModel.h"
#import "ColorPickerViewController.h"

@interface IFColorCellController : NSObject <IFCellController, ColorPickerDelegate> {
	NSString *label;
	id<IFCellModel> model;
	NSString *key;
	
	SEL updateAction;
	id __weak updateTarget;
}

@property (nonatomic, assign) BOOL enabled;
@property (nonatomic, assign) SEL updateAction;
@property (nonatomic, weak) id updateTarget;

- (id)initWithLabel:(NSString *)newLabel atKey:(NSString *)newKey inModel:(id<IFCellModel>)newModel;

@end