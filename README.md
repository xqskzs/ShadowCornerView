# ShadowCornerView
Any side shadow and any corner round view.

Using the example:

self.view.backgroundColor = [UIColor whiteColor];
UILabel * lb = [[UILabel alloc] init];
lb.text = @"slkdjfaksjdf";
lb.textAlignment = NSTextAlignmentCenter;
lb.shadowCorner = ShadowBottom|CornerTopLeft|CornerBottomRight|CornerType8;
lb.backgroundColor = [UIColor redColor];
lb.translatesAutoresizingMaskIntoConstraints = NO;

UIView * cornerView = [ShadowCornerView viewWithContentView:lb];
[self.view addSubview:cornerView];

[cornerView mas_makeConstraints:^(MASConstraintMaker *make) {
    make.centerY.equalTo(self.view.mas_centerY);
    make.centerX.equalTo(self.view.mas_centerX);
    make.width.equalTo(@(150));
    make.height.equalTo(@(40));
}];
