/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 10:30:12 PM Eastern Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SBDateLabelDelegate.h>
#import <libobjc.A.dylib/NCContentSizeCategoryAdjusting.h>

@protocol NCNotificationDateLabel;
@class NCLookViewFontProvider, UILabel, UIButton, NSString, NSDate, NSTimeZone, UIView, UIImage;

@interface NCLookHeaderContentView : UIView <SBDateLabelDelegate, NCContentSizeCategoryAdjusting> {

	NCLookViewFontProvider* _fontProvider;
	UILabel* _titleLabel;
	UILabel*<NCNotificationDateLabel> _dateLabel;
	UIButton* _iconButton;
	UIButton* _utilityButton;
	BOOL _adjustsFontForContentSizeCategory;
	BOOL _dateAllDay;
	BOOL _heedsHorizontalLayoutMargins;
	NSString* _preferredContentSizeCategory;
	long long _lookStyle;
	NSDate* _date;
	NSTimeZone* _timeZone;
	long long _dateFormatStyle;
	UIView* _utilityView;

}

@property (nonatomic,readonly) long long lookStyle;                               //@synthesize lookStyle=_lookStyle - In the implementation block
@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDate * date;                                         //@synthesize date=_date - In the implementation block
@property (assign,getter=isDateAllDay,nonatomic) BOOL dateAllDay;                 //@synthesize dateAllDay=_dateAllDay - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;                                 //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) long long dateFormatStyle;                           //@synthesize dateFormatStyle=_dateFormatStyle - In the implementation block
@property (nonatomic,readonly) UIButton * iconButton;                             //@synthesize iconButton=_iconButton - In the implementation block
@property (nonatomic,readonly) UIButton * utilityButton; 
@property (nonatomic,retain) UIView * utilityView;                                //@synthesize utilityView=_utilityView - In the implementation block
@property (assign,nonatomic) BOOL heedsHorizontalLayoutMargins;                   //@synthesize heedsHorizontalLayoutMargins=_heedsHorizontalLayoutMargins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;              //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory;               //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
+(id)_xImage;
+(double)titleInset;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSString *)preferredContentSizeCategory;
-(NSDate *)date;
-(void)layoutMarginsDidChange;
-(id)initWithStyle:(long long)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)setDate:(NSDate *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(id)_titleLabel;
-(NSTimeZone *)timeZone;
-(UIImage *)icon;
-(void)_updateDateLabel;
-(BOOL)isDateAllDay;
-(void)setDateAllDay:(BOOL)arg1 ;
-(long long)dateFormatStyle;
-(void)setDateFormatStyle:(long long)arg1 ;
-(UIButton *)utilityButton;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(long long)lookStyle;
-(double)_titleLabelBaselineOffset;
-(void)dateLabelDidChange:(id)arg1 ;
-(void)_configureTitleLabelIfNecessary;
-(id)_fontProvider;
-(void)_setFontProvider:(id)arg1 ;
-(void)_recycleDateLabel;
-(void)_configureIconButtonIfNecessary;
-(double)_headerHeightForStyle:(long long)arg1 ;
-(void)_configureIconButtonForLongLook;
-(void)_updateTitleLabelFontForStyle:(long long)arg1 ;
-(void)_configureTitleLabelForShortLook;
-(void)_configureTitleLabelForLongLook;
-(void)_configureTitleLabelForStyle:(long long)arg1 ;
-(void)_updateDateLabelFontForShortLook;
-(void)_configureDateLabelForShortLook;
-(void)_configureDateLabelIfNecessary;
-(void)_layoutDateLabelForStyle:(long long)arg1 withScale:(double)arg2 ;
-(void)_configureUtilityButtonIfNecessary;
-(void)_updateUtilityButtonFont;
-(void)_layoutIconButtonForShortLookWithScale:(double)arg1 ;
-(void)_layoutIconButtonForLongLookWithScale:(double)arg1 ;
-(void)_layoutTitleLabelForShortLookWithScale:(double)arg1 ;
-(void)_layoutTitleLabelForLongLookWithScale:(double)arg1 ;
-(void)_layoutDateLabelForShortLookWithScale:(double)arg1 ;
-(void)_layoutDateLabelForLongLookWithScale:(double)arg1 ;
-(void)_layoutIconButtonForStyle:(long long)arg1 withScale:(double)arg2 ;
-(void)_layoutTitleLabelForStyle:(long long)arg1 withScale:(double)arg2 ;
-(void)_layoutUtilityButtonForStyle:(long long)arg1 withScale:(double)arg2 ;
-(void)_fixTitleOverlapIfNecessary;
-(id)_dateLabel;
-(void)setUtilityView:(UIView *)arg1 ;
-(UIView *)utilityView;
-(BOOL)heedsHorizontalLayoutMargins;
-(void)setHeedsHorizontalLayoutMargins:(BOOL)arg1 ;
-(UIButton *)iconButton;
-(double)_headerHeight;
@end

