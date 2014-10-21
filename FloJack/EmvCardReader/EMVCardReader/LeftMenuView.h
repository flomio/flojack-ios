//
//  LeftMenuView.h
//  EMVCardReader
//
//  Created by Boris  on 10/17/14.
//  Copyright (c) 2014 LLT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LeftMenuView : UIView

@property (nonatomic, retain) NSNumber *isOut;
@property (nonatomic, retain) UINavigationController *navigationController;

-(void)open;
-(void)close;

@end
