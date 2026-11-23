import Foundation
import RealityKit
import RoomPlan
import ARKit
import simd

// Must match UnityEngine.XR.ARKit.XRBoundingBoxInstructions
public struct UnityXRBoundingBoxInstructions: OptionSet, Sendable {
    public let rawValue: UInt32
    public init(rawValue: UInt32) { self.rawValue = rawValue }

    public static let none              = UnityXRBoundingBoxInstructions([])
    public static let normal            = UnityXRBoundingBoxInstructions(rawValue: 1 << 0)
    public static let moveCloseToWall   = UnityXRBoundingBoxInstructions(rawValue: 1 << 1)
    public static let moveAwayFromWall  = UnityXRBoundingBoxInstructions(rawValue: 1 << 2)
    public static let turnOnLight       = UnityXRBoundingBoxInstructions(rawValue: 1 << 3)
    public static let slowDown          = UnityXRBoundingBoxInstructions(rawValue: 1 << 4)
    public static let lowTexture        = UnityXRBoundingBoxInstructions(rawValue: 1 << 5)
}

// Must match UnityEngine.XR.ARSubsystems.BoundingBoxClassifications
public struct UnityXRBoundingBoxClassifications: OptionSet, Sendable {
    public let rawValue: UInt32
    public init(rawValue: UInt32) { self.rawValue = rawValue }

    public static let none           = UnityXRBoundingBoxClassifications([])
    public static let couch          = UnityXRBoundingBoxClassifications(rawValue: 1 << 0)
    public static let table          = UnityXRBoundingBoxClassifications(rawValue: 1 << 1)
    public static let bed            = UnityXRBoundingBoxClassifications(rawValue: 1 << 2)
    public static let lamp           = UnityXRBoundingBoxClassifications(rawValue: 1 << 3)
    public static let plant          = UnityXRBoundingBoxClassifications(rawValue: 1 << 4)
    public static let screen         = UnityXRBoundingBoxClassifications(rawValue: 1 << 5)
    public static let storage        = UnityXRBoundingBoxClassifications(rawValue: 1 << 6)
    public static let bathtub        = UnityXRBoundingBoxClassifications(rawValue: 1 << 7)
    public static let chair          = UnityXRBoundingBoxClassifications(rawValue: 1 << 8)
    public static let dishwasher     = UnityXRBoundingBoxClassifications(rawValue: 1 << 9)
    public static let fireplace      = UnityXRBoundingBoxClassifications(rawValue: 1 << 10)
    public static let oven           = UnityXRBoundingBoxClassifications(rawValue: 1 << 11)
    public static let refrigerator   = UnityXRBoundingBoxClassifications(rawValue: 1 << 12)
    public static let sink           = UnityXRBoundingBoxClassifications(rawValue: 1 << 13)
    public static let stairs         = UnityXRBoundingBoxClassifications(rawValue: 1 << 14)
    public static let stove          = UnityXRBoundingBoxClassifications(rawValue: 1 << 15)
    public static let toilet         = UnityXRBoundingBoxClassifications(rawValue: 1 << 16)
    public static let washerDryer    = UnityXRBoundingBoxClassifications(rawValue: 1 << 17)
    public static let keyboard       = UnityXRBoundingBoxClassifications(rawValue: 1 << 18)
    public static let mouse          = UnityXRBoundingBoxClassifications(rawValue: 1 << 19)
    public static let laptop         = UnityXRBoundingBoxClassifications(rawValue: 1 << 20)
    public static let other          = UnityXRBoundingBoxClassifications(rawValue: 1 << 31)
}

// If/when Unity's Swift trampoline requires Swift 6 mode, this global var
// and the @_cdecl accessors below will fail to compile (main-actor isolation vs.
// nonisolated C entry points). The proper fix is to synchronize finalResults access
// with NSLock — the engine thread reads while the ARKit delegate thread writes, so the
// data race is real today regardless of Swift mode.
@available(iOS 17, *)
var roomCaptureSessionView = RoomCaptureSessionView()

@available(iOS 17, *)
@_cdecl("UnityARKit_setupCaptureSession")
func setupCaptureSession(arSession: ARSession? = nil) -> Bool
{
    return roomCaptureSessionView.setupRoomCaptureSession(arSession: arSession)
}

@available(iOS 17, *)
@_cdecl("UnityARKit_startRoomCapture")
func startRoomCapture() -> Void
{
    roomCaptureSessionView.startRoomCaptureSession()
}

@available(iOS 17, *)
@_cdecl("UnityARKit_stopRoomCapture")
func stopRoomCapture() -> Void
{
    roomCaptureSessionView.stopRoomCaptureSession()
}

@available(iOS 17, *)
@_cdecl("UnityARKit_isRoomCapturing")
func isRoomCapturing() -> Bool
{
    return roomCaptureSessionView.isScanning
}

@available(iOS 17, *)
func getCaptureSessionView() -> RoomCaptureSessionView
{
    return roomCaptureSessionView
}

@available(iOS 17, *)
@_cdecl("UnityARKit_getObjectNum")
func getObjectNum() -> Int
{
    return roomCaptureSessionView.getObjectNum()
}

@available(iOS 17, *)
@_cdecl("UnityARKit_getObjectUuid")
func getObjectUuid(at index: Int) -> NSString?
{
    return roomCaptureSessionView.getObjectUuid(at: index).map { $0 as NSString }
}

@available(iOS 17, *)
@_cdecl("UnityARKit_getObjectPosition")
func getObjectPosition(at index: Int) -> simd_float3
{
   return roomCaptureSessionView.getObjectPosition(at: index)
}

@available(iOS 17, *)
@_cdecl("UnityARKit_getObjectRotation")
func getObjectRotation(at index: Int) -> simd_float4
{
    return roomCaptureSessionView.getObjectRotation(at: index)
}

@available(iOS 17, *)
@_cdecl("UnityARKit_getObjectDimension")
func getObjectDimension(at index: Int) -> simd_float3
{
    return roomCaptureSessionView.getObjectDimension(at: index)
}

@available(iOS 17, *)
@_cdecl("UnityARKit_getObjectClassification")
func getObjectClassification(at index: Int) -> UInt32
{
    return roomCaptureSessionView.getObjectClassification(at: index).rawValue
}

@available(iOS 17, *)
@_cdecl("UnityARKit_getCaptureSessionInstruction")
func getCaptureSessionInstruction() -> UInt32
{
    return roomCaptureSessionView.getCaptureSessionInstruction().rawValue
}

@available(iOS 17, *)
class RoomCaptureSessionView: NSObject, RoomCaptureSessionDelegate
{
    private var roomCaptureSession: RoomCaptureSession? = nil
    private var roomCaptureSessionConfig: RoomCaptureSession.Configuration = RoomCaptureSession.Configuration()
    var finalResults: CapturedRoom?
    var instruction: RoomCaptureSession.Instruction = RoomCaptureSession.Instruction.normal
    var isScanning: Bool = false

    func setupRoomCaptureSession(arSession: ARSession? = nil) -> Bool
    {
        roomCaptureSession = RoomCaptureSession(arSession: arSession)
        return roomCaptureSession != nil
    }

    func startRoomCaptureSession()
    {
        if isScanning || roomCaptureSession == nil
        {
            return
        }

        isScanning = true
        roomCaptureSession!.run(configuration: roomCaptureSessionConfig)
        roomCaptureSession!.delegate = self
    }

    func stopRoomCaptureSession()
    {
        if roomCaptureSession == nil
        {
            return
        }

        isScanning = false
        roomCaptureSession!.stop(pauseARSession: false)
    }

    func getObjectNum() -> Int
    {
        return finalResults?.objects.count ?? 0
    }

    func getObjectUuid(at index: Int) -> String?
    {
        return finalResults?.objects[index].identifier.uuidString
    }

    func getObjectPosition(at index: Int) -> simd_float3
    {
        guard let transform = finalResults?.objects[index].transform
        else {
            return simd_float3(x: 0, y: 0, z: 0)
        }

        // Extract position from the fourth column. Coordinate space conversion will happen in Objective C.
        let column = transform.columns.3
        return simd_float3(column.x, column.y, column.z)
    }

    func getObjectRotation(at index: Int) -> simd_float4
    {
        guard let transform = finalResults?.objects[index].transform
        else {
            return simd_float4(x: 0, y: 0, z: 0, w: 1)
        }

        // Remove any scaling from the matrix to avoid the scale being embedded into the resulting quaternion.
        let nonScaledMatrix = simd_matrix(simd_normalize(transform.columns.0), simd_normalize(transform.columns.1),
                                          simd_normalize(transform.columns.2), transform.columns.3);

        // Convert to quaternion and pass to Objective C as a Vector4. Coordinate space conversion will happen in Objective C.
        return simd_quatf(nonScaledMatrix).vector
    }

    func getObjectDimension(at index: Int) -> simd_float3
    {
        guard let dim = finalResults?.objects[index].dimensions
        else {
            return simd_float3(x: 0, y: 0, z: 0)
        }

        // No coordinate space transformation is needed on object dimensions.
        return dim
    }

    func getObjectClassification(at index: Int) -> UnityXRBoundingBoxClassifications
    {
        guard let category = finalResults?.objects[index].category
        else {
            return .none
        }

        switch category
        {
            case .sofa:
                return .couch
            case .table:
                return .table
            case .bed:
                return .bed
            case .television:
                return .screen
            case .storage:
                return .storage
            case .bathtub:
                return .bathtub
            case .chair:
                return .chair
            case .dishwasher:
                return .dishwasher
            case .fireplace:
                return .fireplace
            case .oven:
                return .oven
            case .refrigerator:
                return .refrigerator
            case .sink:
                return .sink
            case .stairs:
                return .stairs
            case .stove:
                return .stove
            case .toilet:
                return .toilet
            case .washerDryer:
                return .washerDryer
            default:
                return .none
        }
    }

    func getCaptureSessionInstruction() -> UnityXRBoundingBoxInstructions
    {
        if !isScanning
        {
            return .none
        }

        switch instruction
        {
            case .normal:
                return .normal
            case .moveCloseToWall:
                return .moveCloseToWall
            case .moveAwayFromWall:
                return .moveAwayFromWall
            case .turnOnLight:
                return .turnOnLight
            case .slowDown:
                return .slowDown
            case .lowTexture:
                return .lowTexture
            default:
                return .none
        }
    }
}

@available(iOS 17, *)
extension RoomCaptureSessionView
{
    // Notifies the delegate when the session updates the scan results.
    func captureSession(_ session: RoomCaptureSession, didUpdate room: CapturedRoom)
    {
        finalResults = room
    }

    // Notifies the delegate of an instruction to display to the user.
    func captureSession(_ session: RoomCaptureSession, didProvide instruction: RoomCaptureSession.Instruction)
    {
        self.instruction = instruction
    }
}
