//
//  TSAssetPreviewController.h
//  TSAssetPickerController
//
//  Created by linitial on 15-3-3.
//  Copyright (c) 2015年 linitial. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TSAssetGroupController.h"

@interface TSAssetPreviewController : UIViewController

@property (nonatomic) NSMutableArray *selectAssets;
@property (weak, nonatomic) IBOutlet UIView *topView;
@property (weak, nonatomic) IBOutlet UIView *bottomView;
@property (weak, nonatomic) IBOutlet UIButton *backButton;
@property (weak, nonatomic) IBOutlet UIButton *selectButton;
@property (weak, nonatomic) IBOutlet UIButton *sendButton;
@property (weak, nonatomic) IBOutlet UILabel *numberLabel;
@property (nonatomic) TSAssetGroupController *assetGroupController;

- (IBAction)returnBackAction:(id)sender;
- (IBAction)selectAction:(id)sender;
- (IBAction)sendAction:(id)sender;
@end
