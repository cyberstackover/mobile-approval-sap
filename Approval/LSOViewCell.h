//
//  LSOViewCell.h
//  Approval
//
//  Created by Dody Rachmat Wicaksono on 2/22/17.
//  Copyright © 2017 Semen Indonesia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LSOViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *person;
@property (weak, nonatomic) IBOutlet UILabel *detail;
@property (weak, nonatomic) IBOutlet UILabel *place;
@property (weak, nonatomic) IBOutlet UILabel *date;

@end