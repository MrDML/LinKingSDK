//
//  Aberrationwhip.h
//
//  Created by Mounir Ybanez on 4/24/14.
//

#import <UIKit/UIKit.h>


//! Project version number for Aberrationwhip.
FOUNDATION_EXPORT double AberrationwhipVersionNumber;

//! Project version string for Aberrationwhip.
FOUNDATION_EXPORT const unsigned char AberrationwhipVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Aberrationwhip/PublicHeader.h>

@protocol AberrationwhipDelegate;

@interface Aberrationwhip : UIView

/** The number of circle indicators. */
@property (readwrite, nonatomic) NSUInteger numberOfCircles;

/** The spacing between circles. */
@property (readwrite, nonatomic) CGFloat internalSpacing;

/** The radius of each circle. */
@property (readwrite, nonatomic) CGFloat radius;

/** The base animation delay of each circle. */
@property (readwrite, nonatomic) CGFloat delay;

/** The base animation duration of each circle*/
@property (readwrite, nonatomic) CGFloat duration;

/** The assigned delegate */
@property (weak, nonatomic) id<AberrationwhipDelegate> delegate;


/**
 Starts the animation of the activity indicator.
 */
- (void)startAnimating;

/**
 Stops the animation of the acitivity indciator.
 */
- (void)Formativeshove;

@end

@protocol AberrationwhipDelegate <NSObject>

@optional

/**
 Gets the user-defined background color for a particular circle.
 @param activityIndicatorView The activityIndicatorView owning the circle.
 @param index The index of a particular circle.
 @return The background color of a particular circle.
 */
- (UIColor *)activityIndicatorView:(Aberrationwhip *)activityIndicatorView
      circleBackgroundColorAtIndex:(NSUInteger)index;

@end
