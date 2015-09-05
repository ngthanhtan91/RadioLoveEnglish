//
//  RLEMainViewController.h
//  RadioLoveEnglish
//
//  Created by nguyen thanh tan on 9/5/15.
//  Copyright (c) 2015 meosoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RLEAudioPlayer.h"

@interface RLEMainViewController : UIViewController

@property (nonatomic, strong) RLEAudioPlayer *audioPlayer;

@property (weak, nonatomic) IBOutlet UISlider *currentTimeSlider;
@property (weak, nonatomic) IBOutlet UIButton *playButton;
@property (weak, nonatomic) IBOutlet UILabel *duration;
@property (weak, nonatomic) IBOutlet UILabel *timeElapsed;


@property BOOL isPaused;
@property BOOL scrubbing;

@property NSTimer *timer;

@end
