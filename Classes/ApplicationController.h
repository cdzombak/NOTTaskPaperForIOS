//
//  ApplicationController.h
// PlainText
//
//  Created by Jesse Grosjean on 6/24/10.
//

@class PathController;
@class ApplicationViewController;

enum {
    PasscodeTimeoutImmediately = 0,
    PasscodeTimeoutOneMinute,
    PasscodeTimeoutFiveMinutes,
    PasscodeTimeoutFifteenMinutes
};
typedef NSUInteger PasscodeTimeout;

@interface ApplicationController : NSObject <UIApplicationDelegate> {
	UIWindow *window;
	UIWindow *screenDimmerWindow;
	ApplicationViewController *applicationViewController;
	PathController *pathController;
	BOOL reenteringForeground;
	NSUInteger backgroundTaskIdentifier;
}

@property (assign) CGFloat brightness;
@property (nonatomic, readonly) BOOL isIOS32OrLater;
@property (nonatomic, readonly) BOOL isIOS4OrLater;
@property (nonatomic, readonly) ApplicationViewController *applicationViewController;
@property (nonatomic, readonly) PathController *pathController;

@end

extern NSString *LastLaunchedVersionKey;
extern NSString *ScreenBrightnessDefaultsKey;
extern NSString *InkBrightnessDefaultsKey;
extern NSString *PasscodeEnableDefaultsKey;
extern NSString *PasscodeTimeoutDefaultsKey;
extern NSString *LastTimeGoneDefaultsKey;
extern NSString *DropboxLoginSuccessNotification;
extern NSString *FirstLaunch;