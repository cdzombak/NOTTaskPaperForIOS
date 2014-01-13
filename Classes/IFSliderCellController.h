//
//  IFSliderCellController.h
//  PlainText
//
//  Created by Jesse Grosjean on 4/18/11.
//

#import "IFCellController.h"
#import "IFCellModel.h"

@interface IFSliderCellController : NSObject <IFCellController>
{
	BOOL enabled;
	CGFloat minValue;
	CGFloat maxValue;
	NSString *label;
	id<IFCellModel> model;
	NSString *key;
	
	SEL updateAction;
	id __weak updateTarget;
}

@property (nonatomic, assign) BOOL enabled;
@property (nonatomic, assign) SEL updateAction;
@property (nonatomic, weak) id updateTarget;

- (id)initWithLabel:(NSString *)newLabel minValue:(CGFloat)minValue maxValue:(CGFloat)maxValue atKey:(NSString *)newKey inModel:(id<IFCellModel>)newModel;

@end