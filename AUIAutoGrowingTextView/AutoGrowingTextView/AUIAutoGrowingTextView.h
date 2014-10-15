//
//  AUIAutoGrowingTextView.h
//
//  Created by Adam on 10/10/13.
//

#import <UIKit/UIKit.h>

@interface AUIAutoGrowingTextView : UITextView

@property (nonatomic) CGFloat maxHeight;
@property (nonatomic) CGFloat minHeight;

// TODO:
//@property(nonatomic) UIControlContentVerticalAlignment verticalAlignment;

/// You need to call this after setting constraint for the view to work if you do it programmatically
- (void)findHeightConstraint;

@end


