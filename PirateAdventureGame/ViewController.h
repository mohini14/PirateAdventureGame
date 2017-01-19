//
//  ViewController.h
//  PirateAdventureGame
//
//  Created by Mohini Sindhu  on 19/01/17.
//  Copyright © 2017 Mohini Sindhu . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;
@property (weak, nonatomic) IBOutlet UILabel *HealthLabel;
@property (weak, nonatomic) IBOutlet UILabel *DamageLabel;
@property (weak, nonatomic) IBOutlet UILabel *WeaponLabel;
@property (weak, nonatomic) IBOutlet UILabel *StoryLabel;
@property (weak, nonatomic) IBOutlet UIButton *ActionButton;
@property (weak, nonatomic) IBOutlet UILabel *ArmourLabel;
@property (weak, nonatomic) IBOutlet UIButton *NorthButton;
@property (weak, nonatomic) IBOutlet UIButton *WestButton;

@property (weak, nonatomic) IBOutlet UIButton *EastButton;
@property (weak, nonatomic) IBOutlet UIButton *SouthButton;



- (IBAction)WestButton:(UIButton *)sender;
- (IBAction)SouthButton:(UIButton *)sender;
- (IBAction)EastButton:(UIButton *)sender;

- (IBAction)NorthButton:(UIButton *)sender;




- (IBAction)ActionButton:(UIButton *)sender;

@end

