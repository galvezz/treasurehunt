//
//  HuntViewController.h
//  TreasureHuntObjc
//
//  Created by Seamus on 05/11/2016.
//
//

#import <UIKit/UIKit.h>
#import "LocationManager.h"

@interface HuntViewController : UIViewController <LocationManagerDelegate>

@property (nonatomic, strong) LocationManager* locationManager;

@property (nonatomic, weak) IBOutlet UILabel* hintLabel;



@end
