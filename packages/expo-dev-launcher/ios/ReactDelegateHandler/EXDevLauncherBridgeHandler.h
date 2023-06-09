#import <React-RCTAppDelegate/RCTAppDelegate.h>
#import <React/RCTRootView.h>

@interface EXDevLauncherBridgeHandler : RCTAppDelegate

- (RCTRootView *)createRootViewWithModuleName:(NSString *)moduleName
                                launchOptions:(NSDictionary *_Nullable)launchOptions
                                  application:(UIApplication *)application;

- (RCTBridge *)createBridgeWithAdapter:(NSDictionary *_Nullable)launchOptions;

@end
