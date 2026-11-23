import Foundation

public typealias OnUnityStartCompleteCallback = @convention(c) (UnsafePointer<CChar>) -> Void

private var onUnityStartCompleteCallback: OnUnityStartCompleteCallback? = nil

@_cdecl("RegisterOnUnityStartCompleteCallback")
public func RegisterOnUnityStartCompleteCallback(callback: OnUnityStartCompleteCallback) {
    onUnityStartCompleteCallback = callback
}

@_cdecl("OnUnityStartComplete")
public func OnUnityStartComplete(message: UnsafePointer<CChar>) {
    onUnityStartCompleteCallback?(message)
}

// Callback for Current Season
public typealias OnUnityCurrentSeasonCallback = @convention(c) (UnsafePointer<CChar>) -> Void

private var onUnityCurrentSeasonCallback: OnUnityCurrentSeasonCallback? = nil

@_cdecl("RegisterOnUnityCurrentSeasonCallback")
public func RegisterOnUnityCurrentSeasonCallback(callback: OnUnityCurrentSeasonCallback) {
    onUnityCurrentSeasonCallback = callback
}

@_cdecl("onUnityCurrentSeason")
public func onUnityCurrentSeason(message: UnsafePointer<CChar>) {
    onUnityCurrentSeasonCallback?(message)
}

// Callback for Temperature
public typealias OnUnityTemperatureCallback = @convention(c) (UnsafePointer<CChar>) -> Void

private var onUnityTemperatureCallback: OnUnityTemperatureCallback? = nil

@_cdecl("RegisterOnUnityTemperatureCallback")
public func RegisterOnUnityTemperatureCallback(callback: OnUnityTemperatureCallback) {
    onUnityTemperatureCallback = callback
}

@_cdecl("onUnityTemperature")
public func onUnityTemperature(message: UnsafePointer<CChar>) {
    onUnityTemperatureCallback?(message)
}

// Callback for Wetness
public typealias OnUnityWetnessCallback = @convention(c) (UnsafePointer<CChar>) -> Void

private var onUnityWetnessCallback: OnUnityWetnessCallback? = nil

@_cdecl("RegisterOnUnityWetnessCallback")
public func RegisterOnUnityWetnessCallback(callback: OnUnityWetnessCallback) {
    onUnityWetnessCallback = callback
}

@_cdecl("onUnityWetness")
public func onUnityWetness(message: UnsafePointer<CChar>) {
    onUnityWetnessCallback?(message)
}

// Callback for Snow
public typealias OnUnitySnowCallback = @convention(c) (UnsafePointer<CChar>) -> Void

private var onUnitySnowCallback: OnUnitySnowCallback? = nil

@_cdecl("RegisterOnUnitySnowCallback")
public func RegisterOnUnitySnowCallback(callback: OnUnitySnowCallback) {
    onUnitySnowCallback = callback
}

@_cdecl("onUnitySnow")
public func onUnitySnow(message: UnsafePointer<CChar>) {
    onUnitySnowCallback?(message)
}

// Callback for AR placement state ("true" once the character is pinned to a plane).
// RootBehavior.cs declares this with DllImport("__Internal"), so the symbol has to exist
// in the UnityFramework binary or the link step fails with a missing symbol.
public typealias OnUnityARPlacementConfirmedCallback = @convention(c) (UnsafePointer<CChar>) -> Void

private var onUnityARPlacementConfirmedCallback: OnUnityARPlacementConfirmedCallback? = nil

@_cdecl("RegisterOnUnityARPlacementConfirmedCallback")
public func RegisterOnUnityARPlacementConfirmedCallback(callback: OnUnityARPlacementConfirmedCallback) {
    onUnityARPlacementConfirmedCallback = callback
}

@_cdecl("OnUnityARPlacementConfirmed")
public func OnUnityARPlacementConfirmed(state: UnsafePointer<CChar>) {
    onUnityARPlacementConfirmedCallback?(state)
}

// Callback for a completed Unity-rendered widget snapshot.
public typealias OnUnityWidgetSnapshotReadyCallback = @convention(c) (UnsafePointer<CChar>) -> Void

private var onUnityWidgetSnapshotReadyCallback: OnUnityWidgetSnapshotReadyCallback? = nil

@_cdecl("RegisterOnUnityWidgetSnapshotReadyCallback")
public func RegisterOnUnityWidgetSnapshotReadyCallback(callback: OnUnityWidgetSnapshotReadyCallback) {
    onUnityWidgetSnapshotReadyCallback = callback
}

@_cdecl("OnUnityWidgetSnapshotReady")
public func OnUnityWidgetSnapshotReady(path: UnsafePointer<CChar>) {
    onUnityWidgetSnapshotReadyCallback?(path)
}