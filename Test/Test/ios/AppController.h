//
//  TestAppController.h
//  Test
//
//  Created by Shuo Ma on 11-7-1.
//  Copyright Sun Yat-sen University 2011年. All rights reserved.
//

@class RootViewController;

@interface AppController : NSObject <UIAccelerometerDelegate, UIAlertViewDelegate, UITextFieldDelegate,UIApplicationDelegate> {
    UIWindow *window;
    RootViewController	*viewController;
}

@end

