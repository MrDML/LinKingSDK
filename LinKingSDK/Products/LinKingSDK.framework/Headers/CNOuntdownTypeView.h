





#import <UIKit/UIKit.h>



FOUNDATION_EXPORT double MONActivityIndicatorViewVersionNumber;


FOUNDATION_EXPORT const unsigned char MONActivityIndicatorViewVersionString[];



@protocol MONActivityIndicatorViewDelegate;

@interface CNOuntdownTypeView : UIView



@property (readwrite, nonatomic) NSUInteger numberOfCircles;



@property (readwrite, nonatomic) CGFloat internalSpacing;



@property (readwrite, nonatomic) CGFloat radius;



@property (readwrite, nonatomic) CGFloat delay;



@property (readwrite, nonatomic) CGFloat duration;



@property (weak, nonatomic) id<MONActivityIndicatorViewDelegate> delegate;




- (void)startAnimating;



- (void)stopAnimating;

@end

@protocol MONActivityIndicatorViewDelegate <NSObject>

@optional



- (UIColor *)activityIndicatorView:(CNOuntdownTypeView *)activityIndicatorView
      circleBackgroundColorAtIndex:(NSUInteger)index;

@end
