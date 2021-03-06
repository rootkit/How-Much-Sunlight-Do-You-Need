//
//  ResultViewController.h
//  ColorPicker
//
//  Created by Terry Bu on 3/16/15.
//  Copyright (c) 2015 Terry Bu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FitzpatrickType.h"
#import "FBShimmeringView.h"
#import "WebviewManager.h"
#import "WeatherManager.h"

@interface ResultViewController : UIViewController <WebviewManagerDelegate>

@property (strong, nonatomic) WebviewManager *webviewManager;

@property (strong, nonatomic) FitzpatrickType *pickedFitzType;
@property (strong, nonatomic) UIColor *pickedColor;

@property IBOutlet UIScrollView *scrollView;
@property IBOutlet FBShimmeringView *fbShimmerView;
@property IBOutlet UILabel *typeLabel;
@property IBOutlet UIImageView *selectionView;
@property IBOutlet UILabel *actualTypeColorLabel;
@property IBOutlet UIView *actualTypeColorView;

//Result Labels
@property IBOutlet UILabel *resultMessageLabel;

@property (weak, nonatomic) IBOutlet UIImageView *sunCloudsIconImageView;
@property (weak, nonatomic) IBOutlet UILabel *cloudsStatusLabel;

@property IBOutlet UILabel *basedOnLocationLabel; 

@property (weak, nonatomic) IBOutlet UILabel *recommendedSunlightLabel;
@property (weak, nonatomic) IBOutlet UILabel *actualSunlightTimeLabel;

@property (weak, nonatomic) IBOutlet UILabel *sunburnLabel;
@property (weak, nonatomic) IBOutlet UILabel *actualSunburnTimeLabel;

@property (weak, nonatomic) IBOutlet UILabel *referenceLabel;


- (IBAction) backButton:(id)sender;

@end
