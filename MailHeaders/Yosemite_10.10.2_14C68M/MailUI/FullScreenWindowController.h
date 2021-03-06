/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSAnimationDelegate.h"

@class CALayer, MailWindowShadowLayer, MessageViewer, ModalDimmingWindow, NSString, NSWindow;

@interface FullScreenWindowController : NSObject <NSAnimationDelegate>
{
    MessageViewer *_messageViewer;
    struct CGImage *_mainWindowNonFullScreenSnapshot;
    struct CGImage *_modalWindowNonFullScreenSnapshot;
    BOOL _isPerformingAnimation;
    ModalDimmingWindow *_modalDimmingWindow;
    id <MailFullScreenWindowDelegate> _modalWindowDelegate;
    NSWindow *_coverExitAnimationWindow;
    CALayer *_mainWindowAnimationLayer;
    CALayer *_modalWindowAnimationLayer;
    MailWindowShadowLayer *_mainShadowLayer;
    MailWindowShadowLayer *_modalShadowLayer;
    struct CGRect _nonFullScreenWindowFrame;
}

+ (void)waitForFullScreenSpaceSwitchIfNeeded;
+ (BOOL)isFrontmostMessageViewerInFullScreen;
+ (BOOL)preventCreationOfViewerOfClass:(Class)arg1;
+ (BOOL)preventCreationOfEditorOfClass:(Class)arg1 withType:(unsigned long long)arg2;
@property(nonatomic) struct CGRect nonFullScreenWindowFrame; // @synthesize nonFullScreenWindowFrame=_nonFullScreenWindowFrame;
@property(retain, nonatomic) MailWindowShadowLayer *modalShadowLayer; // @synthesize modalShadowLayer=_modalShadowLayer;
@property(retain, nonatomic) MailWindowShadowLayer *mainShadowLayer; // @synthesize mainShadowLayer=_mainShadowLayer;
@property(retain, nonatomic) CALayer *modalWindowAnimationLayer; // @synthesize modalWindowAnimationLayer=_modalWindowAnimationLayer;
@property(retain, nonatomic) CALayer *mainWindowAnimationLayer; // @synthesize mainWindowAnimationLayer=_mainWindowAnimationLayer;
@property(retain, nonatomic) NSWindow *coverExitAnimationWindow; // @synthesize coverExitAnimationWindow=_coverExitAnimationWindow;
@property(retain, nonatomic) id <MailFullScreenWindowDelegate> modalWindowDelegate; // @synthesize modalWindowDelegate=_modalWindowDelegate;
@property(retain, nonatomic) ModalDimmingWindow *modalDimmingWindow; // @synthesize modalDimmingWindow=_modalDimmingWindow;
@property(nonatomic) BOOL isPerformingAnimation; // @synthesize isPerformingAnimation=_isPerformingAnimation;
- (void).cxx_destruct;
- (void)_exitAnimationFinished;
- (void)startExitAnimationWithDuration:(double)arg1;
- (void)_animateModalWindow;
- (void)_animateMainWindow;
- (id)prepareExitAnimation;
- (struct CGImage *)_newModalWindowSnapshot;
- (void)_closeAnimationFinished;
- (void)animationDidEnd:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (BOOL)animationShouldStart:(id)arg1;
- (void)_animationDidEndOrStop:(id)arg1;
- (void)_openAnimationFinished;
- (id)_operationNameForAnimationType:(long long)arg1;
- (void)finishedReplyAnimation;
- (void)attachModalWindowWithDelegate:(id)arg1;
- (void)willAttachModalWindowWithDelegate:(id)arg1;
- (void)windowWillEnterFullScreen;
- (void)_setupDimmingWindow;
- (void)_cleanUpAfterModalWindowClose;
- (void)_closeModalWindow;
- (void)_modalWindowWillClose:(id)arg1;
- (struct CGRect)modalWindowRectWithParentWindow:(id)arg1;
- (BOOL)isModalWindowPresent;
- (void)_prepareModalWindowForNonFullScreen;
- (double)_titleBarHeight;
- (void)prepareWindowForFullScreen:(id)arg1;
- (void)presentModalWindowWithDelegate:(id)arg1;
- (void)closeModalWindowForcibly:(BOOL)arg1 animate:(BOOL)arg2 animationType:(long long)arg3;
- (void)closeModalWindowForcibly:(BOOL)arg1 animate:(BOOL)arg2;
- (BOOL)_isFullScreen;
- (id)_parentWindow;
@property(nonatomic) __weak MessageViewer *messageViewer;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

