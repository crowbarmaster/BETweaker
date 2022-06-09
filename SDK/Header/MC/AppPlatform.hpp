// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AppPlatform {

#define AFTER_EXTRA
// Add Member There
public:
struct AndroidScopedStorageInfo {
    AndroidScopedStorageInfo() = delete;
    AndroidScopedStorageInfo(AndroidScopedStorageInfo const&) = delete;
    AndroidScopedStorageInfo(AndroidScopedStorageInfo const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPPLATFORM
public:
    class AppPlatform& operator=(class AppPlatform const &) = delete;
    AppPlatform(class AppPlatform const &) = delete;
    AppPlatform() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPPLATFORM
public:
    MCVAPI std::unique_ptr<class Bedrock::Http::IProxyResolver> _createProxyResolver();
    MCVAPI void _disableCPUBoost();
    MCVAPI void _fireAppTerminated();
    MCVAPI void _initializeFileStorageAreas();
    MCVAPI void _onInitialize();
    MCVAPI void _onTeardown();
    MCVAPI void _teardownFileStorageAreas();
    MCVAPI bool _tryEnableCPUBoost();
    MCVAPI void addListener(class AppPlatformListener *, float);
    MCVAPI bool allowBetaXblSignIn() const;
    MCVAPI bool allowContentLogWriteToDisk();
    MCVAPI bool allowsResourcePackDevelopment() const;
    MCVAPI bool alwaysUseZippedPacksForDlc() const;
    MCVAPI bool areThreadsFrozen() const;
    MCVAPI void buyGame();
    MCVAPI void calculateIfLowMemoryDevice();
    MCVAPI bool canLaunchUri(std::string const &);
    MCVAPI bool canManageLegacyData() const;
    MCVAPI bool canSwapVRMode(bool) const;
    MCVAPI int checkLicense();
    MCVAPI void collectGraphicsHardwareDetails();
    MCVAPI bool compareAppReceiptToLocalReceipt(std::string const &);
    MCVAPI bool copyAssetFile(class Core::Path const &, class Core::Path const &);
    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const &);
    MCVAPI class std::shared_ptr<class Core::FileStorageArea> createLoggingStorageArea(enum Core::FileAccessType, class Core::Path const &);
    MCVAPI void createUserInput();
    MCVAPI void createUserInput(int);
    MCVAPI class std::shared_ptr<class WebviewInterface> createWebview(class Webview::PlatformArguments &&) const;
    MCVAPI bool doesLANRequireMultiplayerRestrictions() const;
    MCVAPI void exitVRMode(class std::function<void (void)>);
    MCVAPI void finish();
    MCVAPI enum ARVRPlatform getARVRPlatform() const;
    MCVAPI struct AppPlatform::AndroidScopedStorageInfo const & getAndroidScopedStorageInfo() const;
    MCVAPI class AppLifecycleContext & getAppLifecycleContext();
    MCVAPI class Core::PathBuffer<std::string> getAssetFileFullPath(class Core::Path const &);
    MCVAPI std::vector<std::string> getBroadcastAddresses();
    MCVAPI std::vector<enum Social::MultiplayerServiceIdentifier> getBroadcastingMultiplayerServiceIds(bool, bool) const;
    MCVAPI enum BuildPlatform getBuildPlatform() const;
    MCVAPI class Core::PathBuffer<std::string> getCacheStoragePath();
    MCVAPI class Core::PathBuffer<std::string> getCatalogSearchScratchPath();
    MCVAPI std::string getClientUpdateUrl() const;
    MCVAPI enum InputMode getDefaultInputMode() const;
    MCVAPI int getDefaultNetworkMaxPlayers() const;
    MCVAPI float getDefaultSafeZoneScaleX() const;
    MCVAPI float getDefaultSafeZoneScaleY() const;
    MCVAPI float getDefaultScreenPositionX() const;
    MCVAPI float getDefaultScreenPositionY() const;
    MCVAPI enum DeviceSunsetTier getDeviceSunsetTier() const;
    MCVAPI int getDisplayHeight();
    MCVAPI int getDisplayWidth();
    MCVAPI int getDpi() const;
    MCVAPI std::string getEdition() const;
    MCVAPI class std::optional<struct ScreenshotOptions> getExtraLevelSaveDataIconParams(std::string const &) const;
    MCVAPI std::string getFeedbackBugsLink() const;
    MCVAPI std::string getFeedbackHelpLink() const;
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class IFileAccess>> getFileAccess(enum ResourceFileSystem);
    MCVAPI enum AppFocusState getFocusState();
    MCVAPI unsigned __int64 getHighPerformanceThreadsCount() const;
    MCVAPI std::vector<std::string> getIPAddresses();
    MCVAPI class Core::PathBuffer<std::string> getInternalPackStoragePath() const;
    MCVAPI class Core::PathBuffer<std::string> getLevelInfoCachePath() const;
    MCVAPI class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> getLevelSaveInterval() const;
    MCVAPI class Core::PathBuffer<std::string> getLoggingPath() const;
    MCVAPI unsigned __int64 getLowPhysicalMemoryThreshold() const;
    MCVAPI int getMaxSimRadiusInChunks() const;
    MCVAPI int getMaxSimultaneousDownloads() const;
    MCVAPI unsigned int getMaxSimultaneousServiceRequests() const;
    MCVAPI unsigned __int64 getMaximumUsedMemory();
    MCVAPI void ( *)(std::string const &, std::string const &) getModalErrorMessageProc();
    MCVAPI std::string getModelName();
    MCVAPI std::vector<class std::shared_ptr<class Social::MultiplayerService>> getMultiplayerServiceListToRegister() const;
    MCVAPI int getNumberOfParticleFramesToInterpolate() const;
    MCVAPI enum OsVersion getOSVersion() const;
    MCVAPI class Core::PathBuffer<std::string> getOnDiskPackScratchPath();
    MCVAPI class Core::PathBuffer<std::string> getOnDiskScratchPath();
    MCVAPI class std::optional<enum OperationMode> getOperationMode() const;
    MCVAPI unsigned __int64 getOptimalLDBSize();
    MCVAPI class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> getOptionsSaveInterval() const;
    MCVAPI std::string getPackageFamilyName() const;
    MCVAPI class Core::PathBuffer<std::string> getPackagedShaderCachePath();
    MCVAPI float getPixelsPerMillimeter();
    MCVAPI int getPlatformDpi() const;
    MCVAPI std::string getPlatformStringVar(int);
    MCVAPI bool getPlatformTTSEnabled() const;
    MCVAPI bool getPlatformTTSExists() const;
    MCVAPI enum PlatformType getPlatformType() const;
    MCVAPI enum UIScalingRules getPlatformUIScalingRules() const;
    MCVAPI class std::variant<struct HWND__*, struct std::monostate> getRenderSurfaceParameters() const;
    MCVAPI int getScreenHeight() const;
    MCVAPI int getScreenWidth() const;
    MCVAPI std::unique_ptr<class SecureStorage> getSecureStorage();
    MCVAPI class SecureStorageKey getSecureStorageKey(std::string const &);
    MCVAPI class Core::PathBuffer<std::string> getSettingsPath();
    MCVAPI class Core::PathBuffer<std::string> getShaderCachePath();
    MCVAPI float getStoreNetworkFailureTimeout() const;
    MCVAPI class mce::UUID const & getThirdPartyPackUUID() const;
    MCVAPI unsigned __int64 getTotalHardwareThreadsCount() const;
    MCVAPI enum UIScalingRules getUIScalingRules() const;
    MCVAPI std::vector<std::string> getUserInput();
    MCVAPI int getUserInputStatus();
    MCVAPI class Core::PathBuffer<std::string> getUserStorageRootPath() const;
    MCVAPI class Core::PathBuffer<std::string> getUserdataPathForLevels() const;
    MCVAPI enum VRControllerType getVRControllerType() const;
    MCVAPI void goToExternalConsumablesStoreListing() const;
    MCVAPI void handlePlatformSpecificCommerceError(unsigned int);
    MCVAPI bool hasAssetFile(class Core::Path const &);
    MCVAPI bool hasBuyButtonWhenInvalidLicense();
    MCVAPI bool hasFastAlphaTest() const;
    MCVAPI bool hasIDEProfiler();
    MCVAPI bool hasJournalingFilesystem() const;
    MCVAPI bool hasPlatformSpecificInvites() const;
    MCVAPI bool hasSeparatedStorageAreasForContentAcquisition() const;
    MCVAPI void hideSplashScreen();
    MCVAPI bool importAsFlatFile() const;
    MCVAPI void initAppPlatformNetworkSettings();
    MCVAPI void initialize();
    MCVAPI void initializeGameStreaming();
    MCVAPI void initializeScreenDependentResources();
    MCVAPI bool isAutoCompactionEnabled() const;
    MCVAPI bool isCentennial() const;
    MCVAPI bool isContentAutoUpdateAllowed() const;
    MCVAPI bool isCrossPlatformToggleVisible() const;
    MCVAPI bool isDisplayInitialized() const;
    MCVAPI bool isDownloadAndImportBlocking() const;
    MCVAPI bool isDownloadBuffered() const;
    MCVAPI bool isFireTV() const;
    MCVAPI bool isJoinableViaExternalServers() const;
    MCVAPI bool isKeyboardVisible() const;
    MCVAPI bool isLANAllowed() const;
    MCVAPI bool isLowMemoryDevice() const;
    MCVAPI bool isLowPhysicalMemoryDevice() const;
    MCVAPI bool isNetworkAllowed() const;
    MCVAPI bool isNetworkAvailable() const;
    MCVAPI bool isNetworkEnabled(bool) const;
    MCVAPI bool isNetworkThrottled() const;
    MCVAPI class std::optional<bool> isOnWifiConnectionTelemetryValue();
    MCVAPI bool isQuitCapable() const;
    MCVAPI bool isRatingsPromptSupported() const;
    MCVAPI bool isRealmsEnabled() const;
    MCVAPI bool isTelemetryAllowed();
    MCVAPI bool isTrialWorldsTransferToFullGameAllowed() const;
    MCVAPI bool isWebviewSupported() const;
    MCVAPI bool isWin10Arm() const;
    MCVAPI void launchLegacyVersion();
    MCVAPI void launchRatingsPrompt();
    MCVAPI void launchSettings();
    MCVAPI void launchUri(std::string const &);
    MCVAPI class std::set<class Core::PathBuffer<std::string>, struct std::less<class Core::PathBuffer<std::string>>, class std::allocator<class Core::PathBuffer<std::string>>> listAssetFilesIn(class Core::Path const &, std::string const &) const;
    MCVAPI unsigned int maxFileDataRequestConcurrency() const;
    MCVAPI bool minimizeBackgroundDownloads() const;
    MCVAPI bool multiplayerRequiresPremiumAccess() const;
    MCVAPI bool multiplayerRequiresUGCEnabled() const;
    MCVAPI bool notifyControllerConnectionStateChange() const;
    MCVAPI void onPrimaryUserNetworkReady();
    MCVAPI bool platformRequiresControllerApplet() const;
    MCVAPI std::string readAssetFile(class Core::Path const &);
    MCVAPI void registerExperimentsActiveCrashDump(std::vector<std::string> const &) const;
    MCVAPI void registerFileForCollectionWithCrashDump(class Core::Path const &);
    MCVAPI bool reloadRenderResourcesOnResume() const;
    MCVAPI void removeListener(class AppPlatformListener *);
    MCVAPI bool requireControllerAtStartup() const;
    MCVAPI bool requiresAutoSaveIconExplanationPopup() const;
    MCVAPI bool requiresLiveGoldForMultiplayer() const;
    MCVAPI bool requiresPatchNoticePopup() const;
    MCVAPI bool requiresXboxLiveSigninToPlay() const;
    MCVAPI void restartApp(bool);
    MCVAPI bool restartRequested();
    MCVAPI void setARVRPlatform(enum ARVRPlatform);
    MCVAPI void setDpi(int);
    MCVAPI void setFullscreenMode(enum FullscreenMode);
    MCVAPI void setNetworkAllowed(bool);
    MCVAPI void setScreenSize(int, int);
    MCVAPI void setSecureStorageKey(std::string const &, class SecureStorageKey const &);
    MCVAPI void setSleepEnabled(bool);
    MCVAPI void setThreadsFrozen(bool);
    MCVAPI void setUIScalingRules(enum UIScalingRules);
    MCVAPI void setVRControllerType(enum VRControllerType);
    MCVAPI void setWindowSize(int, int);
    MCVAPI void setWindowText(std::string const &);
    MCVAPI bool shouldPauseDownloadsWhenEnterGame() const;
    MCVAPI bool shouldRemoveGraphicsDeviceOnAppTermination() const;
    MCVAPI void showDialog(int);
    MCVAPI void showPlatformEmptyStoreDialog(class std::function<void (bool)> &&);
    MCVAPI void showPlatformStoreIcon(bool);
    MCVAPI bool supportsAutoSaveOnDBCompaction() const;
    MCVAPI bool supportsClientUpdate() const;
    MCVAPI bool supportsDayOneExperience() const;
    MCVAPI bool supportsFliteTTS() const;
    MCVAPI bool supportsInPackageRecursion() const;
    MCVAPI bool supportsLaunchingLegacyVersion() const;
    MCVAPI bool supportsLegacySinglePremiumCacheDirectory() const;
    MCVAPI bool supportsVRModeSwap() const;
    MCVAPI bool supportsVibration() const;
    MCVAPI bool supportsWorldShare() const;
    MCVAPI bool supportsXboxLiveAchievements() const;
    MCVAPI void teardown();
    MCVAPI void trackPurchaseEvent(std::string const &, std::string const &, std::string const &, std::string const &, std::string const &, std::string const &, std::string const &, std::string const &);
    MCVAPI void tryEnterVRMode(bool, class std::function<void (bool)>);
    MCVAPI void updateLocalization(std::string const &);
    MCVAPI void updateTextBoxText(std::string const &);
    MCVAPI bool useAppPlatformForTelemetryIPAddress();
    MCVAPI bool useNativeStoreForRealmsPurchase();
    MCVAPI bool usePlatformProfilePicturesOnly() const;
    MCVAPI bool useXboxControlHelpers() const;
    MCVAPI bool usesAsyncOptionSaving() const;
    MCVAPI bool usesHDRBrightness() const;
    MCVAPI void vibrate(int);
    MCVAPI ~AppPlatform();
#endif
    MCAPI AppPlatform(bool);
    MCAPI std::unique_ptr<struct Bedrock::PlatformRuntimeInfo> & accessPlatformRuntimeInformation_Shim();
    MCAPI class Core::PathBuffer<std::string> getCurrentStoragePath() const;
    MCAPI class Core::PathBuffer<std::string> getInternalStoragePath() const;
    MCAPI std::unique_ptr<struct Bedrock::PlatformRuntimeInfo> const & getPlatformRuntimeInformation() const;
    MCAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class Bedrock::Http::IProxyResolver>> getProxyResolver();
    MCAPI class Core::PathBuffer<std::string> getScratchPath();
    MCAPI class Core::PathBuffer<std::string> getUserdataPath() const;
    MCAPI bool isEduMode() const;
    MCAPI bool isTerminating() const;
    MCAPI void notifyUserStorageInitialized();
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const HOME_PATH;
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const LOG_PATH;
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const SETTINGS_PATH;

//protected:

//private:
    MCAPI void _initializeLoadProfiler();

protected:
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const SHADERCACHE_PATH;

private:
    MCAPI static bool mIsInitialized;


};