//
//  IFUpDownCellController.h
//  PlainText
//
//  Created by Jesse Grosjean on 4/17/11.
//

#import <Foundation/Foundation.h>

#import "IFCellController.h"
#import "IFCellModel.h"

@interface IFUpDownCellController : NSObject <IFCellController> {
	BOOL enabled;
	CGFloat minValue;
	CGFloat maxValue;
	CGFloat stepValue;
	NSNumberFormatter *valueFormatter;
	NSString *units;
	NSString *label;
	id<IFCellModel> model;
	NSString *key;
	
	SEL updateAction;
	id __weak updateTarget;
}

@property (nonatomic, assign) BOOL enabled;
@property (nonatomic, assign) SEL updateAction;
@property (nonatomic, weak) id updateTarget;

- (id)initWithLabel:(NSString *)newLabel stepValue:(CGFloat)stepValue minValue:(CGFloat)minValue maxValue:(CGFloat)maxValue valueFormatter:(NSNumberFormatter *)aFormatter units:(NSString *)aUnits atKey:(NSString *)newKey inModel:(id<IFCellModel>)newModel;

@end
