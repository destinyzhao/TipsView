//
//  ViewController.m
//  TipsView
//
//  Created by Alex on 16/3/23.
//  Copyright © 2016年 Alex. All rights reserved.
//

#import "ViewController.h"
#import "TipsView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)buttonClicked:(id)sender {
    [TipsView showCenterTitle:@"亲, 您的手机网络似乎不顺畅哦~"];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
