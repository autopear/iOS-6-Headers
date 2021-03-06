/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

#import "BBObserverDelegate-Protocol.h"
#import "SBBulletinBusyClient-Protocol.h"

@class BBObserver, NSMutableArray, NSMutableDictionary;

@interface SBBulletinSoundController : NSObject <BBObserverDelegate, SBBulletinBusyClient>
{
    BBObserver *_observer;
    NSMutableArray *_blockQueue;
    NSMutableDictionary *_playingSounds;
    BOOL _deviceIsLocked;
    BOOL _quietModeEnabled;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)arg1;
- (void)bulletinWindowStoppedBeingBusy;
- (void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned int)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned int)arg3;
- (void)_enqueueBlock:(id)arg1;
- (void)_soundDidFinishPlayingForBulletin:(id)arg1;
- (BOOL)_shouldHonorPlaySoundRequestForBulletin:(id)arg1;
- (void)_hardwareButtonPressed:(id)arg1;
- (void)_configureBBObserver;
- (BOOL)handleVolumeButtonDownEvent;
- (void)killSounds;
- (void)killSoundForBulletin:(id)arg1;
- (BOOL)playSoundForBulletin:(id)arg1;
- (void)dealloc;
- (id)init;

@end

