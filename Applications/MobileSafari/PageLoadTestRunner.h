//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BrowserController, NSMutableArray, NSOutputStream, NSString;
@protocol PageLoadTestRunnerDelegate;

@interface PageLoadTestRunner : NSObject
{
    _Bool _started;
    _Bool _loadURLInNewTab;
    _Bool _measureTime;
    NSMutableArray *_pagesNeedingMemoryWarningSent;
    NSMutableArray *_pageLoadArray;
    double _savedDefaultTimeoutInterval;
    NSOutputStream *_logStream;
    _Bool _disableProgressBar;
    _Bool _failFast;
    _Bool _resetsZoomBetweenPages;
    _Bool _collectHeapStatistics;
    _Bool _checkForWorldLeaks;
    int _cacheClearDirective;
    NSString *_logFile;
    NSString *_outputFilename;
    NSString *_suiteName;
    unsigned long long _skipCount;
    double _pageTimeout;
    double _pageActionInterval;
    double _pageRestInterval;
    id <PageLoadTestRunnerDelegate> _delegate;
    unsigned long long _tabCount;
    BrowserController *_browserController;
}

+ (CDStruct_81cc75c8)heapStatistics;
+ (id)worldLeaksString;
+ (_Bool)closingBrowserWindowsForWorldLeakTest;
+ (void)addLeakToArray:(id)arg1 count:(int)arg2 name:(id)arg3;
@property(readonly, nonatomic) BrowserController *browserController; // @synthesize browserController=_browserController;
@property(nonatomic) _Bool loadURLInNewTab; // @synthesize loadURLInNewTab=_loadURLInNewTab;
@property(nonatomic) unsigned long long tabCount; // @synthesize tabCount=_tabCount;
@property(nonatomic) __weak id <PageLoadTestRunnerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool checkForWorldLeaks; // @synthesize checkForWorldLeaks=_checkForWorldLeaks;
@property(nonatomic) _Bool collectHeapStatistics; // @synthesize collectHeapStatistics=_collectHeapStatistics;
@property(nonatomic) int cacheClearDirective; // @synthesize cacheClearDirective=_cacheClearDirective;
@property(nonatomic) double pageRestInterval; // @synthesize pageRestInterval=_pageRestInterval;
@property(nonatomic) double pageActionInterval; // @synthesize pageActionInterval=_pageActionInterval;
@property(nonatomic) double pageTimeout; // @synthesize pageTimeout=_pageTimeout;
@property(nonatomic) _Bool resetsZoomBetweenPages; // @synthesize resetsZoomBetweenPages=_resetsZoomBetweenPages;
@property(nonatomic) _Bool failFast; // @synthesize failFast=_failFast;
@property(nonatomic) _Bool disableProgressBar; // @synthesize disableProgressBar=_disableProgressBar;
@property(nonatomic) unsigned long long skipCount; // @synthesize skipCount=_skipCount;
@property(retain, nonatomic) NSString *suiteName; // @synthesize suiteName=_suiteName;
@property(retain, nonatomic) NSString *outputFilename; // @synthesize outputFilename=_outputFilename;
@property(retain, nonatomic) NSString *logFile; // @synthesize logFile=_logFile;
- (void).cxx_destruct;
- (_Bool)checkForWorldLeaksNow;
- (void)checkForWorldLeaksSoon;
- (void)closeBrowserWindowsAndFinishCheckingForWorldLeaks;
- (_Bool)finishCheckingForWorldLeaks;
- (void)closeBrowserWindows;
- (void)clearCacheWithURL:(id)arg1;
- (void)log:(id)arg1;
- (void)finishedTestPage:(id)arg1;
- (void)startingTestPage:(id)arg1;
- (void)finishedTestRunner;
- (void)startingTestRunner;
- (id)dismissAlert;
- (void)_handleActionTimer:(id)arg1;
- (_Bool)performActionForPage:(id)arg1;
- (_Bool)startPageAction:(id)arg1;
- (void)finishPage:(id)arg1 stats:(id)arg2 error:(id)arg3;
- (void)_updatePageLoad:(id)arg1 stats:(id)arg2;
- (void)_checkRedirect:(id)arg1;
- (void)_pageRestExpired:(id)arg1;
- (void)_pageTimeoutExpired:(id)arg1;
- (id)_pageLoadForTabDocument:(id)arg1;
- (void)finish;
- (void)_startNextPageNow;
- (void)startNextPage;
- (void)start;
- (_Bool)loadTestSuiteFile:(id)arg1;
- (void)removeURLsInRange:(struct _NSRange)arg1;
- (void)addPageURL:(id)arg1;
- (void)setTestOptions:(id)arg1;
- (void)setExistingProperty:(id)arg1 to:(id)arg2;
- (void)_closeLogStream;
- (void)dealloc;
- (id)initWithBrowserController:(id)arg1;

@end
