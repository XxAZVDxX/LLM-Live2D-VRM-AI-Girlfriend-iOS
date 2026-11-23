// Unity Physics Backend System Native Plugin API copyright © 2025 Unity Technologies ApS
//
// Licensed under the Unity Companion License for Unity - dependent projects--see[Unity Companion License](http://www.unity3d.com/legal/licenses/Unity_Companion_License).
//
// Unless expressly provided otherwise, the Software under this license is made available strictly on an “AS IS” BASIS WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED.Please review the license for details on these and other terms and conditions.

// This interface allows a native plugin to register a custom physics backend implementation.
// The backend receives all physics commands issued by Unity's Physics Module through a single
// entry point function, enabling full replacement of the underlying physics SDK.
//
// The command dispatch model uses a flat function table indexed by command category (bits 26-29)
// and command ID (bits 0-25). Each command is a struct inheriting from PhysicsCommands::Command
// that carries both input parameters and output fields.
//
// Example: Registering a physics backend entry point (based on PhysXBackend.cpp)
//
//     #include "IUnityPhysicsBackendSystem.h"
//     #include "PhysicsCommands.h"
//     #include "PhysXPhysicsExtensionCommands.h" //include only for supporting physx specific features
//
//     using namespace PhysicsCommands;
//
//     // Per-category function binding tables
//     FunctionBinding SDKCommands[static_cast<int>(SDK::Count)];
//     FunctionBinding WorldCommands[static_cast<int>(World::Count)];
//     FunctionBinding BodyCommands[static_cast<int>(Body::Count)];
//     FunctionBinding ShapeCommands[static_cast<int>(Shape::Count)];
//     FunctionBinding QueryCommands[static_cast<int>(Query::Count)];
//     FunctionBinding JointCommands[static_cast<int>(Joint::Count)];
//     FunctionBinding ArticulationCommands[static_cast<int>(Articulation::Count)];
//
//     //specific command bindings for PhysX specific features such as Vehicles, CharacterController and Immediate mode
//     FunctionBinding PhysXExtCommands[static_cast<int>(PhysXExtension::Count)];
// 
//     // The single entry point that dispatches all commands by category
//     static void ProcessCommand(void* sdkObject, const Context& ctx, uint32_t cmdFunc, Command& c)
//     {
//         const uint32_t commandType = cmdFunc & kFullMask;
//         const int cmdId = cmdFunc & kReverseFullMask;
//
//         switch (commandType)
//         {
//             case kSDKFunctionMask:          SDKCommands[cmdId](sdkObject, ctx, c);          break;
//             case kWorldFunctionMask:        WorldCommands[cmdId](sdkObject, ctx, c);        break;
//             case kBodyFunctionMask:         BodyCommands[cmdId](sdkObject, ctx, c);         break;
//             case kShapeFunctionMask:        ShapeCommands[cmdId](sdkObject, ctx, c);        break;
//             case kQueryFunctionMask:        QueryCommands[cmdId](sdkObject, ctx, c);        break;
//             case kJointFunctionMask:        JointCommands[cmdId](sdkObject, ctx, c);        break;
//             case kArticulationFunctionMask: ArticulationCommands[cmdId](sdkObject, ctx, c); break;
//             case kPhysXExtensionMask:       PhysXExtCommands[cmdId](sdkObject, ctx, c); break;
//             default: break;
//         }
//     }
//
//     // During plugin load, register individual command handlers into the binding tables,
//     // then register the entry point with Unity:
//
//     bool s_HasRegistered = false;
//     extern "C" void UNITY_INTERFACE_EXPORT UnityPluginLoad(IUnityInterfaces* unityInterfaces)
//     {
//         if(s_HasRegistered)
//             return;
// 
//         auto* physicsBackend = unityInterfaces->Get<IUnityPhysicsBackendSystem>();
//
//         // Initialize all slots to a safe default, then register each command handler:
//         // SDKCommands[static_cast<int>(SDK::InitializeSdk)] = MyInitializeSdk;
//         // WorldCommands[static_cast<int>(World::CreateWorld)] = MyCreateWorld;
//         // ... etc.
//         // Please note that all commands should be initialized before calling Register.
//         // Furthermore SDK::InitializeSdk and SDK::GetIntegrationInfo need to provide valid data for registration to be successful.
//         s_HasRegistered = physicsBackend->Register(reinterpret_cast<BackendEntryPoint>(ProcessCommand));
//     }

#pragma once
#include "IUnityInterface.h"

namespace PhysicsCommands
{
    typedef struct Context UnityPhysicsContext;
    typedef struct Command UnityPhysicsCommand;
}

// Function signature for the physics backend entry point.
// sdkObject  — opaque handle to the physics SDK instance.
// ctx        — provides the current world and body handles for the command being dispatched.
// cmdFunc    — encoded command identifier: upper bits select the category, lower bits select the command index.
// c          — reference to the command data struct (cast to the appropriate type based on cmdFunc).
typedef void (*BackendEntryPoint)(void* sdkObject, const PhysicsCommands::Context& ctx, const uint32_t cmdFunc, PhysicsCommands::Command& c);

// Interface for registering a custom physics backend with Unity's Physics Module.
// A plugin calls Register() with its entry point function to take over all physics command processing.
UNITY_DECLARE_INTERFACE(IUnityPhysicsBackendSystem)
{
    // Registers the backend entry point. Multiple backends can be registered, but each must have a unique ID.
    // Returns true if registration succeeded.
    bool(UNITY_INTERFACE_API * Register)(BackendEntryPoint entryPoint);
};
UNITY_REGISTER_INTERFACE_GUID(0xED2B16A043DE39F8ULL, 0x924E3DAB294216EAULL, IUnityPhysicsBackendSystem)
