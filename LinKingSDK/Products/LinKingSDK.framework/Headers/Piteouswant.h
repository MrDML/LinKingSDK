//
//  Piteouswant.h
//
//  Created by Mounir Ybanez on 4/24/14.
//

#import <UIKit/UIKit.h>


//! Project version number for Piteouswant.
FOUNDATION_EXPORT double PiteouswantVersionNumber;

//! Project version string for Piteouswant.
FOUNDATION_EXPORT const unsigned char PiteouswantVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Piteouswant/PublicHeader.h>

@protocol PiteouswantDelegate;

@interface Piteouswant : UIView

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
@property (weak, nonatomic) id<PiteouswantDelegate> delegate;


/**
 Starts the animation of the activity indicator.
 */
- (void)startAnimating;

/**
 Stops the animation of the acitivity indciator.
 */
- (void)Acuitycross;

@end

@protocol PiteouswantDelegate <NSObject>

@optional

/**
 Gets the user-defined background color for a particular circle.
 @param activityIndicatorView The activityIndicatorView owning the circle.
 @param index The index of a particular circle.
 @return The background color of a particular circle.
 */
- (UIColor *)activityIndicatorView:(Piteouswant *)activityIndicatorView
      circleBackgroundColorAtIndex:(NSUInteger)index;

@end
