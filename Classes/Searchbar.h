//
//  SearchBar.h
//  PlainText
//
//  Created by Jesse Grosjean on 10/14/10.
//

#import <Foundation/Foundation.h>

#import "Bar.h"

@class SearchView;

@interface Searchbar : Bar {
	SearchView *searchView;
    UIButton *rightButton;
    UIButton *leftButton;
	CGFloat originalRightWidth;
	UIEdgeInsets originalRightInsets;
    CGFloat originalLeftWidth;
	UIEdgeInsets originalLeftInsets;
}

@property (nonatomic, strong) SearchView *searchView;

@property (nonatomic, strong) UIButton *rightButton;
@property (nonatomic, strong) UIButton *leftButton;


@end
