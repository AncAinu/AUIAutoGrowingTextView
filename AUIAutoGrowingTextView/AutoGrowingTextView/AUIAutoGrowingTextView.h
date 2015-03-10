//
//  AUIAutoGrowingTextView.h
//
//  Created by Adam on 10/10/13.
//

#import <UIKit/UIKit.h>

@class AUIAutoGrowingTextView;

@protocol AUIAutoGrowingTextViewDelegate <UITextViewDelegate>

@optional
- (void)autoGrowingTextView:(AUIAutoGrowingTextView *)textView willChangeHeight:(CGFloat)newHeight;
- (void)autoGrowingTextView:(AUIAutoGrowingTextView *)textView didChangeHeight:(CGFloat)newHeight;

@end

@interface AUIAutoGrowingTextView : UITextView

@property (nonatomic, weak) id<AUIAutoGrowingTextViewDelegate>delegate;
@property (nonatomic) CGFloat maxHeight;
@property (nonatomic) CGFloat minHeight;

// TODO:
//@property(nonatomic) UIControlContentVerticalAlignment verticalAlignment;

/// You need to call this after setting constraint for the view to work if you do it programmatically
- (void)findHeightConstraint;

@end


