/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "RTObject.h"

@class NSHTTPCookie, NSHTTPCookieStorage, NSMutableDictionary, NSString;

@interface YAccountsSharedCookieStore : NSObject //RTObject
{
    NSMutableDictionary *_cookieJar;
    NSString *_bundlePrefix;
    NSHTTPCookieStorage *_sharedCookieStorage;
}

+ (id)sharedCookieStorage;
+ (void)setupWithBundlePrefix:(id)arg1;
+ (void)setup;
+ (id)validSyncCallers;
@property(retain, nonatomic) NSHTTPCookieStorage *sharedCookieStorage; // @synthesize sharedCookieStorage=_sharedCookieStorage;
@property(retain, nonatomic) NSString *bundlePrefix; // @synthesize bundlePrefix=_bundlePrefix;
@property(retain, nonatomic) NSMutableDictionary *cookieJar; // @synthesize cookieJar=_cookieJar;
//- (void).cxx_destruct;
- (void)logKeychainError:(int)arg1 forMethod:(id)arg2;
- (id)keychainQueryForItem:(id)arg1;
- (id)attributesKeychainQueryForItem:(id)arg1;
- (id)dataAndAttributesKeychainQueryForItem:(id)arg1;
- (void)saveFSCookieData;
- (void)saveFCookieData;
- (void)loadFSCookieDataFromKeychain;
- (void)loadFCookieDataFromKeychain;
- (void)loadDataFromKeyChain;
- (id)keychainItemForCookie:(id)arg1;
- (void)setCookie:(id)arg1 forKey:(id)arg2;
- (void)cookiesUpdated:(id)arg1;
@property(readonly, nonatomic) NSHTTPCookie *fsCookie;
@property(readonly, nonatomic) NSHTTPCookie *fCookie; // @dynamic fCookie;
- (void)dealloc;
- (id)initWithBundlePrefix:(id)arg1 sharedCookieStore:(id)arg2;
- (id)init;

@end

