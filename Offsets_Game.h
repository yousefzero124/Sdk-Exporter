#pragma once
/*
 * =========================================================================
 *  UNREAL ENGINE OFFSET EXPORTER - AUTO GENERATED OFFSETS
 * =========================================================================
 *  Developer       : Yousef_Zero
 *  Game Name       : OAR
 *  Engine Version  : 4.27.2-18319896+++UE4+Release-4.27
 *  Dumper Version  : Dumper-9
 *  Generated On    : 2026-10-01 10:38:08
 *  Total Classes   : 60
 *  Total Offsets   : 1256
 *  Preset Used     : game
 *  Copyright (C) 2026 Yousef_Zero. All rights reserved.
 * =========================================================================
 */

#include <cstdint>

namespace Offsets
{
    // =========================================================================
    // GLOBAL ENGINE OFFSETS
    // =========================================================================
    namespace Global
    {
        constexpr uintptr_t AppendString             = 0x00FF7110;
        constexpr uintptr_t Free                     = 0x00000000;
        constexpr uintptr_t GNames                   = 0x04ACE880;
        constexpr uintptr_t GObjects                 = 0x04B0ABD0;
        constexpr uintptr_t GWorld                   = 0x04C52570;
        constexpr uintptr_t ProcessEvent             = 0x011E78D0;
        constexpr uintptr_t ProcessEventIdx          = 0x00000044;
        constexpr uintptr_t Realloc                  = 0x00F0CC10;
    }

    // =========================================================================
    // CLASSES & STRUCTS OFFSETS
    // =========================================================================

    // -------------------------------------------------------------------------
    // Class: AActor
    // Package: Engine | Size: 0x0220 | Super: UObject (0x0028)
    // -------------------------------------------------------------------------
    namespace AActor
    {
        constexpr uintptr_t PrimaryActorTick                 = 0x0028; // struct FActorTickFunction (Size: 0x0030)
        constexpr uintptr_t bNetTemporary                    = 0x0058; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bNetTemporary_Bit                = 0;
        constexpr uint8_t   bNetTemporary_Mask               = 0x01;
        constexpr uintptr_t bNetStartup                      = 0x0058; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bNetStartup_Bit                  = 1;
        constexpr uint8_t   bNetStartup_Mask                 = 0x02;
        constexpr uintptr_t bOnlyRelevantToOwner             = 0x0058; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bOnlyRelevantToOwner_Bit         = 2;
        constexpr uint8_t   bOnlyRelevantToOwner_Mask        = 0x04;
        constexpr uintptr_t bAlwaysRelevant                  = 0x0058; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bAlwaysRelevant_Bit              = 3;
        constexpr uint8_t   bAlwaysRelevant_Mask             = 0x08;
        constexpr uintptr_t bReplicateMovement               = 0x0058; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bReplicateMovement_Bit           = 4;
        constexpr uint8_t   bReplicateMovement_Mask          = 0x10;
        constexpr uintptr_t bHidden                          = 0x0058; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bHidden_Bit                      = 5;
        constexpr uint8_t   bHidden_Mask                     = 0x20;
        constexpr uintptr_t bTearOff                         = 0x0058; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bTearOff_Bit                     = 6;
        constexpr uint8_t   bTearOff_Mask                    = 0x40;
        constexpr uintptr_t bForceNetAddressable             = 0x0058; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bForceNetAddressable_Bit         = 7;
        constexpr uint8_t   bForceNetAddressable_Mask        = 0x80;
        constexpr uintptr_t bExchangedRoles                  = 0x0059; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bExchangedRoles_Bit              = 0;
        constexpr uint8_t   bExchangedRoles_Mask             = 0x01;
        constexpr uintptr_t bNetLoadOnClient                 = 0x0059; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bNetLoadOnClient_Bit             = 1;
        constexpr uint8_t   bNetLoadOnClient_Mask            = 0x02;
        constexpr uintptr_t bNetUseOwnerRelevancy            = 0x0059; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bNetUseOwnerRelevancy_Bit        = 2;
        constexpr uint8_t   bNetUseOwnerRelevancy_Mask       = 0x04;
        constexpr uintptr_t bRelevantForNetworkReplays       = 0x0059; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bRelevantForNetworkReplays_Bit   = 3;
        constexpr uint8_t   bRelevantForNetworkReplays_Mask  = 0x08;
        constexpr uintptr_t bRelevantForLevelBounds          = 0x0059; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bRelevantForLevelBounds_Bit      = 4;
        constexpr uint8_t   bRelevantForLevelBounds_Mask     = 0x10;
        constexpr uintptr_t bReplayRewindable                = 0x0059; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bReplayRewindable_Bit            = 5;
        constexpr uint8_t   bReplayRewindable_Mask           = 0x20;
        constexpr uintptr_t bAllowTickBeforeBeginPlay        = 0x0059; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bAllowTickBeforeBeginPlay_Bit    = 6;
        constexpr uint8_t   bAllowTickBeforeBeginPlay_Mask   = 0x40;
        constexpr uintptr_t bAutoDestroyWhenFinished         = 0x0059; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bAutoDestroyWhenFinished_Bit     = 7;
        constexpr uint8_t   bAutoDestroyWhenFinished_Mask    = 0x80;
        constexpr uintptr_t bCanBeDamaged                    = 0x005A; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bCanBeDamaged_Bit                = 0;
        constexpr uint8_t   bCanBeDamaged_Mask               = 0x01;
        constexpr uintptr_t bBlockInput                      = 0x005A; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bBlockInput_Bit                  = 1;
        constexpr uint8_t   bBlockInput_Mask                 = 0x02;
        constexpr uintptr_t bCollideWhenPlacing              = 0x005A; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bCollideWhenPlacing_Bit          = 2;
        constexpr uint8_t   bCollideWhenPlacing_Mask         = 0x04;
        constexpr uintptr_t bFindCameraComponentWhenViewTarget = 0x005A; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bFindCameraComponentWhenViewTarget_Bit = 3;
        constexpr uint8_t   bFindCameraComponentWhenViewTarget_Mask = 0x08;
        constexpr uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x005A; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bGenerateOverlapEventsDuringLevelStreaming_Bit = 4;
        constexpr uint8_t   bGenerateOverlapEventsDuringLevelStreaming_Mask = 0x10;
        constexpr uintptr_t bIgnoresOriginShifting           = 0x005A; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bIgnoresOriginShifting_Bit       = 5;
        constexpr uint8_t   bIgnoresOriginShifting_Mask      = 0x20;
        constexpr uintptr_t bEnableAutoLODGeneration         = 0x005A; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bEnableAutoLODGeneration_Bit     = 6;
        constexpr uint8_t   bEnableAutoLODGeneration_Mask    = 0x40;
        constexpr uintptr_t bIsEditorOnlyActor               = 0x005A; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bIsEditorOnlyActor_Bit           = 7;
        constexpr uint8_t   bIsEditorOnlyActor_Mask          = 0x80;
        constexpr uintptr_t bActorSeamlessTraveled           = 0x005B; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bActorSeamlessTraveled_Bit       = 0;
        constexpr uint8_t   bActorSeamlessTraveled_Mask      = 0x01;
        constexpr uintptr_t bReplicates                      = 0x005B; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bReplicates_Bit                  = 1;
        constexpr uint8_t   bReplicates_Mask                 = 0x02;
        constexpr uintptr_t bCanBeInCluster                  = 0x005B; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bCanBeInCluster_Bit              = 2;
        constexpr uint8_t   bCanBeInCluster_Mask             = 0x04;
        constexpr uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x005B; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bAllowReceiveTickEventOnDedicatedServer_Bit = 3;
        constexpr uint8_t   bAllowReceiveTickEventOnDedicatedServer_Mask = 0x08;
        constexpr uintptr_t bActorEnableCollision            = 0x005C; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bActorEnableCollision_Bit        = 3;
        constexpr uint8_t   bActorEnableCollision_Mask       = 0x08;
        constexpr uintptr_t bActorIsBeingDestroyed           = 0x005C; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bActorIsBeingDestroyed_Bit       = 4;
        constexpr uint8_t   bActorIsBeingDestroyed_Mask      = 0x10;
        constexpr uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x005D; // EActorUpdateOverlapsMethod (Size: 0x0001)
        constexpr uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x005E; // EActorUpdateOverlapsMethod (Size: 0x0001)
        constexpr uintptr_t RemoteRole                       = 0x005F; // ENetRole (Size: 0x0001)
        constexpr uintptr_t ReplicatedMovement               = 0x0060; // struct FRepMovement (Size: 0x0034)
        constexpr uintptr_t InitialLifeSpan                  = 0x0094; // float (Size: 0x0004)
        constexpr uintptr_t CustomTimeDilation               = 0x0098; // float (Size: 0x0004)
        constexpr uintptr_t AttachmentReplication            = 0x00A0; // struct FRepAttachment (Size: 0x0040)
        constexpr uintptr_t Owner                            = 0x00E0; // class AActor* (Size: 0x0008)
        constexpr uintptr_t NetDriverName                    = 0x00E8; // class FName (Size: 0x0008)
        constexpr uintptr_t Role                             = 0x00F0; // ENetRole (Size: 0x0001)
        constexpr uintptr_t NetDormancy                      = 0x00F1; // ENetDormancy (Size: 0x0001)
        constexpr uintptr_t SpawnCollisionHandlingMethod     = 0x00F2; // ESpawnActorCollisionHandlingMethod (Size: 0x0001)
        constexpr uintptr_t AutoReceiveInput                 = 0x00F3; // EAutoReceiveInput (Size: 0x0001)
        constexpr uintptr_t InputPriority                    = 0x00F4; // int32 (Size: 0x0004)
        constexpr uintptr_t InputComponent                   = 0x00F8; // class UInputComponent* (Size: 0x0008)
        constexpr uintptr_t NetCullDistanceSquared           = 0x0100; // float (Size: 0x0004)
        constexpr uintptr_t NetTag                           = 0x0104; // int32 (Size: 0x0004)
        constexpr uintptr_t NetUpdateFrequency               = 0x0108; // float (Size: 0x0004)
        constexpr uintptr_t MinNetUpdateFrequency            = 0x010C; // float (Size: 0x0004)
        constexpr uintptr_t NetPriority                      = 0x0110; // float (Size: 0x0004)
        constexpr uintptr_t Instigator                       = 0x0118; // class APawn* (Size: 0x0008)
        constexpr uintptr_t Children                         = 0x0120; // TArray<class AActor*> (Size: 0x0010)
        constexpr uintptr_t RootComponent                    = 0x0130; // class USceneComponent* (Size: 0x0008)
        constexpr uintptr_t ControllingMatineeActors         = 0x0138; // TArray<class AMatineeActor*> (Size: 0x0010)
        constexpr uintptr_t Layers                           = 0x0150; // TArray<class FName> (Size: 0x0010)
        constexpr uintptr_t ParentComponent                  = 0x0160; // TWeakObjectPtr<class UChildActorComponent> (Size: 0x0008)
        constexpr uintptr_t Tags                             = 0x0170; // TArray<class FName> (Size: 0x0010)
        constexpr uintptr_t OnTakeAnyDamage                  = 0x0180; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnTakePointDamage                = 0x0181; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnTakeRadialDamage               = 0x0182; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnActorBeginOverlap              = 0x0183; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnActorEndOverlap                = 0x0184; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnBeginCursorOver                = 0x0185; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnEndCursorOver                  = 0x0186; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnClicked                        = 0x0187; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnReleased                       = 0x0188; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnInputTouchBegin                = 0x0189; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnInputTouchEnd                  = 0x018A; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnInputTouchEnter                = 0x018B; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnInputTouchLeave                = 0x018C; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnActorHit                       = 0x018D; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnDestroyed                      = 0x018E; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnEndPlay                        = 0x018F; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t InstanceComponents               = 0x01F0; // TArray<class UActorComponent*> (Size: 0x0010)
        constexpr uintptr_t BlueprintCreatedComponents       = 0x0200; // TArray<class UActorComponent*> (Size: 0x0010)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_AmbienceSoundController_C
    // Package: BP_AmbienceSoundController | Size: 0x0250 | Super: AActor (0x0220)
    // -------------------------------------------------------------------------
    namespace ABP_AmbienceSoundController_C
    {
        constexpr uintptr_t UberGraphFrame                   = 0x0220; // struct FPointerToUberGraphFrame (Size: 0x0008)
        constexpr uintptr_t DefaultSceneRoot                 = 0x0228; // class USceneComponent* (Size: 0x0008)
        constexpr uintptr_t OutsideAmbience                  = 0x0230; // class USoundBase* (Size: 0x0008)
        constexpr uintptr_t AmbientSoundComponent            = 0x0238; // class UAudioComponent* (Size: 0x0008)
        constexpr uintptr_t MusicPlaying_                    = 0x0240; // bool (Size: 0x0001)
        constexpr uintptr_t Music                            = 0x0248; // class UAudioComponent* (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_AmbientSoundZone_C
    // Package: BP_AmbientSoundZone | Size: 0x0268 | Super: AActor (0x0220)
    // -------------------------------------------------------------------------
    namespace ABP_AmbientSoundZone_C
    {
        constexpr uintptr_t UberGraphFrame                   = 0x0220; // struct FPointerToUberGraphFrame (Size: 0x0008)
        constexpr uintptr_t Box                              = 0x0228; // class UBoxComponent* (Size: 0x0008)
        constexpr uintptr_t DefaultSceneRoot                 = 0x0230; // class USceneComponent* (Size: 0x0008)
        constexpr uintptr_t Sounds                           = 0x0238; // TArray<struct FAmbientSoundStruct> (Size: 0x0010)
        constexpr uintptr_t AudioComponents                  = 0x0248; // TArray<class UAudioComponent*> (Size: 0x0010)
        constexpr uintptr_t AmbienceSoundController          = 0x0258; // class ABP_AmbienceSoundController_C* (Size: 0x0008)
        constexpr uintptr_t AlarmTriggered_                  = 0x0260; // bool (Size: 0x0001)
        constexpr uintptr_t StopsOutsideAmbience_            = 0x0261; // bool (Size: 0x0001)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_Box_Vault_C
    // Package: BP_Box_Vault | Size: 0x02B8 | Super: ABP_Crate_Base_C (0x02B0)
    // -------------------------------------------------------------------------
    namespace ABP_Box_Vault_C
    {
        constexpr uintptr_t SM_Bld_Vault_Door_01_Handle_01   = 0x02B0; // class UStaticMeshComponent* (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_CarValueOverlapper_C
    // Package: BP_CarValueOverlapper | Size: 0x0270 | Super: AMoney_base_C (0x0268)
    // -------------------------------------------------------------------------
    namespace ABP_CarValueOverlapper_C
    {
        constexpr uintptr_t Box                              = 0x0268; // class UBoxComponent* (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_Charm_Base_C
    // Package: BP_Charm_Base | Size: 0x0248 | Super: AActor (0x0220)
    // -------------------------------------------------------------------------
    namespace ABP_Charm_Base_C
    {
        constexpr uintptr_t UberGraphFrame                   = 0x0220; // struct FPointerToUberGraphFrame (Size: 0x0008)
        constexpr uintptr_t PhysicsConstraint                = 0x0228; // class UPhysicsConstraintComponent* (Size: 0x0008)
        constexpr uintptr_t CharmMesh                        = 0x0230; // class UStaticMeshComponent* (Size: 0x0008)
        constexpr uintptr_t CharmRing                        = 0x0238; // class USkeletalMeshComponent* (Size: 0x0008)
        constexpr uintptr_t DefaultSceneRoot                 = 0x0240; // class USceneComponent* (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_Charm_Chemicals_C
    // Package: BP_Charm_Chemicals | Size: 0x0270 | Super: ABP_Charm_Base_C (0x0248)
    // -------------------------------------------------------------------------
    namespace ABP_Charm_Chemicals_C
    {
        constexpr uintptr_t UberGraphFrame_BP_Charm_Chemicals_C = 0x0248; // struct FPointerToUberGraphFrame (Size: 0x0008)
        constexpr uintptr_t LastVelocity                     = 0x0250; // struct FVector (Size: 0x000C)
        constexpr uintptr_t ShakeStrength                    = 0x025C; // float (Size: 0x0004)
        constexpr uintptr_t ChemicalMat                      = 0x0260; // class UMaterialInstanceDynamic* (Size: 0x0008)
        constexpr uintptr_t TargetAlpha                      = 0x0268; // float (Size: 0x0004)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_Charm_SecurityCam_C
    // Package: BP_Charm_SecurityCam | Size: 0x0260 | Super: ABP_Charm_Base_C (0x0248)
    // -------------------------------------------------------------------------
    namespace ABP_Charm_SecurityCam_C
    {
        constexpr uintptr_t UberGraphFrame_BP_Charm_SecurityCam_C = 0x0248; // struct FPointerToUberGraphFrame (Size: 0x0008)
        constexpr uintptr_t Cube                             = 0x0250; // class UStaticMeshComponent* (Size: 0x0008)
        constexpr uintptr_t CharmMesh1                       = 0x0258; // class UStaticMeshComponent* (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_Charm_VaultDoor_C
    // Package: BP_Charm_VaultDoor | Size: 0x0258 | Super: ABP_Charm_Base_C (0x0248)
    // -------------------------------------------------------------------------
    namespace ABP_Charm_VaultDoor_C
    {
        constexpr uintptr_t PhysicsConstraint1               = 0x0248; // class UPhysicsConstraintComponent* (Size: 0x0008)
        constexpr uintptr_t DoorMesh                         = 0x0250; // class UStaticMeshComponent* (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_CrateManager_C
    // Package: BP_CrateManager | Size: 0x0238 | Super: AActor (0x0220)
    // -------------------------------------------------------------------------
    namespace ABP_CrateManager_C
    {
        constexpr uintptr_t UberGraphFrame                   = 0x0220; // struct FPointerToUberGraphFrame (Size: 0x0008)
        constexpr uintptr_t ChildActor                       = 0x0228; // class UChildActorComponent* (Size: 0x0008)
        constexpr uintptr_t DefaultSceneRoot                 = 0x0230; // class USceneComponent* (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_Crate_Base_C
    // Package: BP_Crate_Base | Size: 0x02B0 | Super: AActor (0x0220)
    // -------------------------------------------------------------------------
    namespace ABP_Crate_Base_C
    {
        constexpr uintptr_t UberGraphFrame                   = 0x0220; // struct FPointerToUberGraphFrame (Size: 0x0008)
        constexpr uintptr_t PhysicsConstraint                = 0x0228; // class UPhysicsConstraintComponent* (Size: 0x0008)
        constexpr uintptr_t Cube                             = 0x0230; // class UStaticMeshComponent* (Size: 0x0008)
        constexpr uintptr_t PreviewGun                       = 0x0238; // class UChildActorComponent* (Size: 0x0008)
        constexpr uintptr_t PrimaryRotationArrow             = 0x0240; // class UArrowComponent* (Size: 0x0008)
        constexpr uintptr_t ParticleSystem                   = 0x0248; // class UParticleSystemComponent* (Size: 0x0008)
        constexpr uintptr_t RectLight                        = 0x0250; // class URectLightComponent* (Size: 0x0008)
        constexpr uintptr_t Box                              = 0x0258; // class USkeletalMeshComponent* (Size: 0x0008)
        constexpr uintptr_t DefaultSceneRoot                 = 0x0260; // class USceneComponent* (Size: 0x0008)
        constexpr uintptr_t Scale_Alpha_8ECE7F7B446B10E5417C9A892EABDD75 = 0x0268; // float (Size: 0x0004)
        constexpr uintptr_t Scale__Direction_8ECE7F7B446B10E5417C9A892EABDD75 = 0x026C; // ETimelineDirection (Size: 0x0001)
        constexpr uintptr_t Scale                            = 0x0270; // class UTimelineComponent* (Size: 0x0008)
        constexpr uintptr_t Opening_                         = 0x0278; // bool (Size: 0x0001)
        constexpr uintptr_t Gunarray                         = 0x0280; // TArray<class UChildActorComponent*> (Size: 0x0010)
        constexpr uintptr_t ArrowArray                       = 0x0290; // TArray<class UArrowComponent*> (Size: 0x0010)
        constexpr uintptr_t LastMousePos                     = 0x02A0; // struct FVector2D (Size: 0x0008)
        constexpr uintptr_t CurrentSkin                      = 0x02A8; // int32 (Size: 0x0004)
        constexpr uintptr_t Promo_                           = 0x02AC; // bool (Size: 0x0001)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_Crate_Getaway_C
    // Package: BP_Crate_Getaway | Size: 0x02C8 | Super: ABP_Crate_Base_C (0x02B0)
    // -------------------------------------------------------------------------
    namespace ABP_Crate_Getaway_C
    {
        constexpr uintptr_t StaticMesh_0                     = 0x02B0; // class UStaticMeshComponent* (Size: 0x0008)
        constexpr uintptr_t StaticMesh2                      = 0x02B8; // class UStaticMeshComponent* (Size: 0x0008)
        constexpr uintptr_t StaticMesh1                      = 0x02C0; // class UStaticMeshComponent* (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_Crate_Promotion_C
    // Package: BP_Crate_Promotion | Size: 0x02B8 | Super: ABP_Crate_Base_C (0x02B0)
    // -------------------------------------------------------------------------
    namespace ABP_Crate_Promotion_C
    {
        constexpr uintptr_t StaticMesh                       = 0x02B0; // class UStaticMeshComponent* (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_DestroyedDoor_C
    // Package: BP_DestroyedDoor | Size: 0x0260 | Super: AActor (0x0220)
    // -------------------------------------------------------------------------
    namespace ABP_DestroyedDoor_C
    {
        constexpr uintptr_t UberGraphFrame                   = 0x0220; // struct FPointerToUberGraphFrame (Size: 0x0008)
        constexpr uintptr_t SmoothSync                       = 0x0228; // class USmoothSync* (Size: 0x0008)
        constexpr uintptr_t StaticMesh                       = 0x0230; // class UStaticMeshComponent* (Size: 0x0008)
        constexpr uintptr_t Box                              = 0x0238; // class UBoxComponent* (Size: 0x0008)
        constexpr uintptr_t Scene                            = 0x0240; // class USceneComponent* (Size: 0x0008)
        constexpr uintptr_t DoorMesh                         = 0x0248; // class UStaticMesh* (Size: 0x0008)
        constexpr uintptr_t StartLocation                    = 0x0250; // struct FVector (Size: 0x000C)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_Explosive_Base_C
    // Package: BP_Explosive_Base | Size: 0x02A8 | Super: AStaticMeshActor (0x0230)
    // -------------------------------------------------------------------------
    namespace ABP_Explosive_Base_C
    {
        constexpr uintptr_t UberGraphFrame                   = 0x0230; // struct FPointerToUberGraphFrame (Size: 0x0008)
        constexpr uintptr_t BP_SoundOcclusionComponent       = 0x0238; // class UBP_SoundOcclusionComponent_C* (Size: 0x0008)
        constexpr uintptr_t SmoothSync                       = 0x0240; // class USmoothSync* (Size: 0x0008)
        constexpr uintptr_t NavModifier                      = 0x0248; // class UNavModifierComponent* (Size: 0x0008)
        constexpr uintptr_t Sound_FX_PropaneFire             = 0x0250; // class UAudioComponent* (Size: 0x0008)
        constexpr uintptr_t RadiusSphere                     = 0x0258; // class USphereComponent* (Size: 0x0008)
        constexpr uintptr_t AlertComponent                   = 0x0260; // class UAlertComponent_C* (Size: 0x0008)
        constexpr uintptr_t DamageComponent                  = 0x0268; // class UDamageComponent_C* (Size: 0x0008)
        constexpr uintptr_t ExplosionRadius                  = 0x0270; // float (Size: 0x0004)
        constexpr uintptr_t Health                           = 0x0274; // int32 (Size: 0x0004)
        constexpr uintptr_t Emitters                         = 0x0278; // TArray<class UParticleSystemComponent*> (Size: 0x0010)
        constexpr uintptr_t OnFire_                          = 0x0288; // bool (Size: 0x0001)
        constexpr uintptr_t ExplosiontParticle               = 0x0290; // class UParticleSystem* (Size: 0x0008)
        constexpr uintptr_t ExplosionDamage                  = 0x0298; // int32 (Size: 0x0004)
        constexpr uintptr_t CameraShakeRadius                = 0x029C; // float (Size: 0x0004)
        constexpr uintptr_t SimulatePhysicsOnFire_           = 0x02A0; // bool (Size: 0x0001)
        constexpr uintptr_t Force_Strength                   = 0x02A4; // float (Size: 0x0004)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_HackingPoint_C
    // Package: BP_HackingPoint | Size: 0x02B0 | Super: AActor (0x0220)
    // -------------------------------------------------------------------------
    namespace ABP_HackingPoint_C
    {
        constexpr uintptr_t UberGraphFrame                   = 0x0220; // struct FPointerToUberGraphFrame (Size: 0x0008)
        constexpr uintptr_t AlertComponent                   = 0x0228; // class UAlertComponent_C* (Size: 0x0008)
        constexpr uintptr_t KeycardOverlapper                = 0x0230; // class USphereComponent* (Size: 0x0008)
        constexpr uintptr_t PointLight                       = 0x0238; // class UPointLightComponent* (Size: 0x0008)
        constexpr uintptr_t SpottedHighlightcomponent        = 0x0240; // class USpottedHighlightcomponent_C* (Size: 0x0008)
        constexpr uintptr_t StaticMesh                       = 0x0248; // class UStaticMeshComponent* (Size: 0x0008)
        constexpr uintptr_t Sphere                           = 0x0250; // class USphereComponent* (Size: 0x0008)
        constexpr uintptr_t HoldingInteractComponent         = 0x0258; // class UHoldingInteractComponent_C* (Size: 0x0008)
        constexpr uintptr_t DefaultSceneRoot                 = 0x0260; // class USceneComponent* (Size: 0x0008)
        constexpr uintptr_t HackedActors                     = 0x0268; // TArray<class AActor*> (Size: 0x0010)
        constexpr uintptr_t CanOnlyHackOnce_                 = 0x0278; // bool (Size: 0x0001)
        constexpr uintptr_t HackCooldown                     = 0x027C; // float (Size: 0x0004)
        constexpr uintptr_t HackingMinigame                  = 0x0280; // class UClass* (Size: 0x0008)
        constexpr uintptr_t HasHacked_                       = 0x0288; // bool (Size: 0x0001)
        constexpr uintptr_t HighlightedMesh                  = 0x0290; // class UStaticMesh* (Size: 0x0008)
        constexpr uintptr_t KeycardNumber                    = 0x0298; // int32 (Size: 0x0004)
        constexpr uintptr_t As_Item_Keycard                  = 0x02A0; // class AItem_Keycard_C* (Size: 0x0008)
        constexpr uintptr_t Disabled_                        = 0x02A8; // bool (Size: 0x0001)
        constexpr uintptr_t CanUseAfterAlarm_                = 0x02A9; // bool (Size: 0x0001)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_HitchHook_C
    // Package: BP_HitchHook | Size: 0x0260 | Super: AStaticMeshActor (0x0230)
    // -------------------------------------------------------------------------
    namespace ABP_HitchHook_C
    {
        constexpr uintptr_t HighlightWhenHolding             = 0x0230; // class UHighlightWhenHolding_C* (Size: 0x0008)
        constexpr uintptr_t HighlightInRangeComponent        = 0x0238; // class UHighlightInRangeComponent_C* (Size: 0x0008)
        constexpr uintptr_t PickupItemComponent              = 0x0240; // class UPickupItemComponent_C* (Size: 0x0008)
        constexpr uintptr_t SmoothSync                       = 0x0248; // class USmoothSync* (Size: 0x0008)
        constexpr uintptr_t OnHooked                         = 0x0250; // TMulticastInlineDelegate<void()> (Size: 0x0010)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_Powerbox_C
    // Package: BP_Powerbox | Size: 0x0318 | Super: AActor (0x0220)
    // -------------------------------------------------------------------------
    namespace ABP_Powerbox_C
    {
        constexpr uintptr_t UberGraphFrame                   = 0x0220; // struct FPointerToUberGraphFrame (Size: 0x0008)
        constexpr uintptr_t SteamAchievementComponent        = 0x0228; // class USteamAchievementComponent_C* (Size: 0x0008)
        constexpr uintptr_t SteamStatComponent               = 0x0230; // class USteamStatComponent_C* (Size: 0x0008)
        constexpr uintptr_t Instructioncomponent             = 0x0238; // class UInstructioncomponent_C* (Size: 0x0008)
        constexpr uintptr_t CrossedWires                     = 0x0240; // class UAudioComponent* (Size: 0x0008)
        constexpr uintptr_t MoveToPoint                      = 0x0248; // class UArrowComponent* (Size: 0x0008)
        constexpr uintptr_t Burning                          = 0x0250; // class UAudioComponent* (Size: 0x0008)
        constexpr uintptr_t Decal1                           = 0x0258; // class UDecalComponent* (Size: 0x0008)
        constexpr uintptr_t Decal                            = 0x0260; // class UDecalComponent* (Size: 0x0008)
        constexpr uintptr_t PowerboxFire                     = 0x0268; // class UParticleSystemComponent* (Size: 0x0008)
        constexpr uintptr_t PowerboxSparks                   = 0x0270; // class UParticleSystemComponent* (Size: 0x0008)
        constexpr uintptr_t Sphere                           = 0x0278; // class USphereComponent* (Size: 0x0008)
        constexpr uintptr_t UILocation                       = 0x0280; // class UArrowComponent* (Size: 0x0008)
        constexpr uintptr_t LookatInfoComponent              = 0x0288; // class ULookatInfoComponent_C* (Size: 0x0008)
        constexpr uintptr_t InteractComponent                = 0x0290; // class UInteractComponent_C* (Size: 0x0008)
        constexpr uintptr_t SpottedHighlightcomponent        = 0x0298; // class USpottedHighlightcomponent_C* (Size: 0x0008)
        constexpr uintptr_t Wires                            = 0x02A0; // class UStaticMeshComponent* (Size: 0x0008)
        constexpr uintptr_t Door                             = 0x02A8; // class UStaticMeshComponent* (Size: 0x0008)
        constexpr uintptr_t Box                              = 0x02B0; // class UStaticMeshComponent* (Size: 0x0008)
        constexpr uintptr_t DefaultSceneRoot                 = 0x02B8; // class USceneComponent* (Size: 0x0008)
        constexpr uintptr_t DamageAmount                     = 0x02C0; // float (Size: 0x0004)
        constexpr uintptr_t DestroyTime                      = 0x02C4; // float (Size: 0x0004)
        constexpr uintptr_t AffectedActors                   = 0x02C8; // TArray<class AActor*> (Size: 0x0010)
        constexpr uintptr_t Open_                            = 0x02D8; // bool (Size: 0x0001)
        constexpr uintptr_t IsEnabled_                       = 0x02D9; // bool (Size: 0x0001)
        constexpr uintptr_t Destroyed_                       = 0x02DA; // bool (Size: 0x0001)
        constexpr uintptr_t Targeted_                        = 0x02DB; // bool (Size: 0x0001)
        constexpr uintptr_t CanActivate_                     = 0x02DC; // bool (Size: 0x0001)
        constexpr uintptr_t PowerboxActivated                = 0x02E0; // TMulticastInlineDelegate<void(class ABP_Powerbox_C* Powerbox)> (Size: 0x0010)
        constexpr uintptr_t PowerboxFinished                 = 0x02F0; // TMulticastInlineDelegate<void()> (Size: 0x0010)
        constexpr uintptr_t PowerboxSabotaged                = 0x0300; // TMulticastInlineDelegate<void()> (Size: 0x0010)
        constexpr uintptr_t OrderIndex                       = 0x0310; // int32 (Size: 0x0004)
        constexpr uintptr_t AffectedActorsDelay              = 0x0314; // float (Size: 0x0004)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_Sky_Sphere_C
    // Package: BP_Sky_Sphere | Size: 0x02C0 | Super: AActor (0x0220)
    // -------------------------------------------------------------------------
    namespace ABP_Sky_Sphere_C
    {
        constexpr uintptr_t SkySphereMesh                    = 0x0220; // class UStaticMeshComponent* (Size: 0x0008)
        constexpr uintptr_t Base                             = 0x0228; // class USceneComponent* (Size: 0x0008)
        constexpr uintptr_t Sky_material                     = 0x0230; // class UMaterialInstanceDynamic* (Size: 0x0008)
        constexpr uintptr_t Refresh_material                 = 0x0238; // bool (Size: 0x0001)
        constexpr uintptr_t Directional_light_actor          = 0x0240; // class ADirectionalLight* (Size: 0x0008)
        constexpr uintptr_t Colors_determined_by_sun_position = 0x0248; // bool (Size: 0x0001)
        constexpr uintptr_t Sun_height                       = 0x024C; // float (Size: 0x0004)
        constexpr uintptr_t Sun_brightness                   = 0x0250; // float (Size: 0x0004)
        constexpr uintptr_t Horizon_Falloff                  = 0x0254; // float (Size: 0x0004)
        constexpr uintptr_t Zenith_Color                     = 0x0258; // struct FLinearColor (Size: 0x0010)
        constexpr uintptr_t Horizon_color                    = 0x0268; // struct FLinearColor (Size: 0x0010)
        constexpr uintptr_t Cloud_color                      = 0x0278; // struct FLinearColor (Size: 0x0010)
        constexpr uintptr_t Overall_Color                    = 0x0288; // struct FLinearColor (Size: 0x0010)
        constexpr uintptr_t Cloud_speed                      = 0x0298; // float (Size: 0x0004)
        constexpr uintptr_t Cloud_opacity                    = 0x029C; // float (Size: 0x0004)
        constexpr uintptr_t Stars_brightness                 = 0x02A0; // float (Size: 0x0004)
        constexpr uintptr_t Horizon_color_curve              = 0x02A8; // class UCurveLinearColor* (Size: 0x0008)
        constexpr uintptr_t Zenith_color_curve               = 0x02B0; // class UCurveLinearColor* (Size: 0x0008)
        constexpr uintptr_t Cloud_color_curve                = 0x02B8; // class UCurveLinearColor* (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_ThumbnailGenerator_SkySphere_C
    // Package: BP_ThumbnailGenerator_SkySphere | Size: 0x0240 | Super: AActor (0x0220)
    // -------------------------------------------------------------------------
    namespace ABP_ThumbnailGenerator_SkySphere_C
    {
        constexpr uintptr_t UberGraphFrame                   = 0x0220; // struct FPointerToUberGraphFrame (Size: 0x0008)
        constexpr uintptr_t SkySphereMesh                    = 0x0228; // class UStaticMeshComponent* (Size: 0x0008)
        constexpr uintptr_t Base                             = 0x0230; // class USceneComponent* (Size: 0x0008)
        constexpr uintptr_t Sky_material                     = 0x0238; // class UMaterialInstanceDynamic* (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_TowSpline_C
    // Package: BP_TowSpline | Size: 0x0228 | Super: AActor (0x0220)
    // -------------------------------------------------------------------------
    namespace ABP_TowSpline_C
    {
        constexpr uintptr_t Spline                           = 0x0220; // class USplineComponent* (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Class: ABP_Wall_C
    // Package: BP_Wall | Size: 0x0280 | Super: AActor (0x0220)
    // -------------------------------------------------------------------------
    namespace ABP_Wall_C
    {
        constexpr uintptr_t InstancedStaticMesh              = 0x0220; // class UInstancedStaticMeshComponent* (Size: 0x0008)
        constexpr uintptr_t DefaultSceneRoot                 = 0x0228; // class USceneComponent* (Size: 0x0008)
        constexpr uintptr_t Length                           = 0x0230; // int32 (Size: 0x0004)
        constexpr uintptr_t Wallmesh                         = 0x0238; // class UStaticMesh* (Size: 0x0008)
        constexpr uintptr_t Material                         = 0x0240; // TArray<class UMaterialInterface*> (Size: 0x0010)
        constexpr uintptr_t Override_mats_                   = 0x0250; // bool (Size: 0x0001)
        constexpr uintptr_t MeshRotation                     = 0x0254; // struct FRotator (Size: 0x000C)
        constexpr uintptr_t MeshLength                       = 0x0260; // float (Size: 0x0004)
        constexpr uintptr_t MeshComponents                   = 0x0268; // TArray<class UStaticMeshComponent*> (Size: 0x0010)
        constexpr uintptr_t Mobility                         = 0x0278; // EComponentMobility (Size: 0x0001)
    }

    // -------------------------------------------------------------------------
    // Class: ACharacter
    // Package: Engine | Size: 0x04C0 | Super: APawn (0x0280)
    // -------------------------------------------------------------------------
    namespace ACharacter
    {
        constexpr uintptr_t Mesh                             = 0x0280; // class USkeletalMeshComponent* (Size: 0x0008)
        constexpr uintptr_t CharacterMovement                = 0x0288; // class UCharacterMovementComponent* (Size: 0x0008)
        constexpr uintptr_t CapsuleComponent                 = 0x0290; // class UCapsuleComponent* (Size: 0x0008)
        constexpr uintptr_t BasedMovement                    = 0x0298; // struct FBasedMovementInfo (Size: 0x0030)
        constexpr uintptr_t ReplicatedBasedMovement          = 0x02C8; // struct FBasedMovementInfo (Size: 0x0030)
        constexpr uintptr_t AnimRootMotionTranslationScale   = 0x02F8; // float (Size: 0x0004)
        constexpr uintptr_t BaseTranslationOffset            = 0x02FC; // struct FVector (Size: 0x000C)
        constexpr uintptr_t BaseRotationOffset               = 0x0310; // struct FQuat (Size: 0x0010)
        constexpr uintptr_t ReplicatedServerLastTransformUpdateTimeStamp = 0x0320; // float (Size: 0x0004)
        constexpr uintptr_t ReplayLastTransformUpdateTimeStamp = 0x0324; // float (Size: 0x0004)
        constexpr uintptr_t ReplicatedMovementMode           = 0x0328; // uint8 (Size: 0x0001)
        constexpr uintptr_t bInBaseReplication               = 0x0329; // bool (Size: 0x0001)
        constexpr uintptr_t CrouchedEyeHeight                = 0x032C; // float (Size: 0x0004)
        constexpr uintptr_t bIsCrouched                      = 0x0330; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bIsCrouched_Bit                  = 0;
        constexpr uint8_t   bIsCrouched_Mask                 = 0x01;
        constexpr uintptr_t bProxyIsJumpForceApplied         = 0x0330; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bProxyIsJumpForceApplied_Bit     = 1;
        constexpr uint8_t   bProxyIsJumpForceApplied_Mask    = 0x02;
        constexpr uintptr_t bPressedJump                     = 0x0330; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bPressedJump_Bit                 = 2;
        constexpr uint8_t   bPressedJump_Mask                = 0x04;
        constexpr uintptr_t bClientUpdating                  = 0x0330; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bClientUpdating_Bit              = 3;
        constexpr uint8_t   bClientUpdating_Mask             = 0x08;
        constexpr uintptr_t bClientWasFalling                = 0x0330; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bClientWasFalling_Bit            = 4;
        constexpr uint8_t   bClientWasFalling_Mask           = 0x10;
        constexpr uintptr_t bClientResimulateRootMotion      = 0x0330; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bClientResimulateRootMotion_Bit  = 5;
        constexpr uint8_t   bClientResimulateRootMotion_Mask = 0x20;
        constexpr uintptr_t bClientResimulateRootMotionSources = 0x0330; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bClientResimulateRootMotionSources_Bit = 6;
        constexpr uint8_t   bClientResimulateRootMotionSources_Mask = 0x40;
        constexpr uintptr_t bSimGravityDisabled              = 0x0330; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bSimGravityDisabled_Bit          = 7;
        constexpr uint8_t   bSimGravityDisabled_Mask         = 0x80;
        constexpr uintptr_t bClientCheckEncroachmentOnNetUpdate = 0x0331; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bClientCheckEncroachmentOnNetUpdate_Bit = 0;
        constexpr uint8_t   bClientCheckEncroachmentOnNetUpdate_Mask = 0x01;
        constexpr uintptr_t bServerMoveIgnoreRootMotion      = 0x0331; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bServerMoveIgnoreRootMotion_Bit  = 1;
        constexpr uint8_t   bServerMoveIgnoreRootMotion_Mask = 0x02;
        constexpr uintptr_t bWasJumping                      = 0x0331; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bWasJumping_Bit                  = 2;
        constexpr uint8_t   bWasJumping_Mask                 = 0x04;
        constexpr uintptr_t JumpKeyHoldTime                  = 0x0334; // float (Size: 0x0004)
        constexpr uintptr_t JumpForceTimeRemaining           = 0x0338; // float (Size: 0x0004)
        constexpr uintptr_t ProxyJumpForceStartedTime        = 0x033C; // float (Size: 0x0004)
        constexpr uintptr_t JumpMaxHoldTime                  = 0x0340; // float (Size: 0x0004)
        constexpr uintptr_t JumpMaxCount                     = 0x0344; // int32 (Size: 0x0004)
        constexpr uintptr_t JumpCurrentCount                 = 0x0348; // int32 (Size: 0x0004)
        constexpr uintptr_t JumpCurrentCountPreJump          = 0x034C; // int32 (Size: 0x0004)
        constexpr uintptr_t OnReachedJumpApex                = 0x0358; // TMulticastInlineDelegate<void()> (Size: 0x0010)
        constexpr uintptr_t MovementModeChangedDelegate      = 0x0378; // TMulticastInlineDelegate<void(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)> (Size: 0x0010)
        constexpr uintptr_t OnCharacterMovementUpdated       = 0x0388; // TMulticastInlineDelegate<void(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)> (Size: 0x0010)
        constexpr uintptr_t SavedRootMotion                  = 0x0398; // struct FRootMotionSourceGroup (Size: 0x0038)
        constexpr uintptr_t ClientRootMotionParams           = 0x03D0; // struct FRootMotionMovementParams (Size: 0x0040)
        constexpr uintptr_t RootMotionRepMoves               = 0x0410; // TArray<struct FSimulatedRootMotionReplicatedMove> (Size: 0x0010)
        constexpr uintptr_t RepRootMotion                    = 0x0420; // struct FRepRootMotionMontage (Size: 0x0098)
    }

    // -------------------------------------------------------------------------
    // Class: AController
    // Package: Engine | Size: 0x0298 | Super: AActor (0x0220)
    // -------------------------------------------------------------------------
    namespace AController
    {
        constexpr uintptr_t PlayerState                      = 0x0228; // class APlayerState* (Size: 0x0008)
        constexpr uintptr_t OnInstigatedAnyDamage            = 0x0238; // TMulticastInlineDelegate<void(float Damage, const class UDamageType* DamageType, class AActor* DamagedActor, class AActor* DamageCauser)> (Size: 0x0010)
        constexpr uintptr_t StateName                        = 0x0248; // class FName (Size: 0x0008)
        constexpr uintptr_t Pawn                             = 0x0250; // class APawn* (Size: 0x0008)
        constexpr uintptr_t Character                        = 0x0260; // class ACharacter* (Size: 0x0008)
        constexpr uintptr_t TransformComponent               = 0x0268; // class USceneComponent* (Size: 0x0008)
        constexpr uintptr_t ControlRotation                  = 0x0288; // struct FRotator (Size: 0x000C)
        constexpr uintptr_t bAttachToPawn                    = 0x0294; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bAttachToPawn_Bit                = 0;
        constexpr uint8_t   bAttachToPawn_Mask               = 0x01;
    }

    // -------------------------------------------------------------------------
    // Class: AGameModeBase
    // Package: Engine | Size: 0x02C0 | Super: AInfo (0x0220)
    // -------------------------------------------------------------------------
    namespace AGameModeBase
    {
        constexpr uintptr_t OptionsString                    = 0x0220; // class FString (Size: 0x0010)
        constexpr uintptr_t GameSessionClass                 = 0x0230; // TSubclassOf<class AGameSession> (Size: 0x0008)
        constexpr uintptr_t GameStateClass                   = 0x0238; // TSubclassOf<class AGameStateBase> (Size: 0x0008)
        constexpr uintptr_t PlayerControllerClass            = 0x0240; // TSubclassOf<class APlayerController> (Size: 0x0008)
        constexpr uintptr_t PlayerStateClass                 = 0x0248; // TSubclassOf<class APlayerState> (Size: 0x0008)
        constexpr uintptr_t HUDClass                         = 0x0250; // TSubclassOf<class AHUD> (Size: 0x0008)
        constexpr uintptr_t DefaultPawnClass                 = 0x0258; // TSubclassOf<class APawn> (Size: 0x0008)
        constexpr uintptr_t SpectatorClass                   = 0x0260; // TSubclassOf<class ASpectatorPawn> (Size: 0x0008)
        constexpr uintptr_t ReplaySpectatorPlayerControllerClass = 0x0268; // TSubclassOf<class APlayerController> (Size: 0x0008)
        constexpr uintptr_t ServerStatReplicatorClass        = 0x0270; // TSubclassOf<class AServerStatReplicator> (Size: 0x0008)
        constexpr uintptr_t GameSession                      = 0x0278; // class AGameSession* (Size: 0x0008)
        constexpr uintptr_t GameState                        = 0x0280; // class AGameStateBase* (Size: 0x0008)
        constexpr uintptr_t ServerStatReplicator             = 0x0288; // class AServerStatReplicator* (Size: 0x0008)
        constexpr uintptr_t DefaultPlayerName                = 0x0290; // class FText (Size: 0x0018)
        constexpr uintptr_t bUseSeamlessTravel               = 0x02A8; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bUseSeamlessTravel_Bit           = 0;
        constexpr uint8_t   bUseSeamlessTravel_Mask          = 0x01;
        constexpr uintptr_t bStartPlayersAsSpectators        = 0x02A8; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bStartPlayersAsSpectators_Bit    = 1;
        constexpr uint8_t   bStartPlayersAsSpectators_Mask   = 0x02;
        constexpr uintptr_t bPauseable                       = 0x02A8; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bPauseable_Bit                   = 2;
        constexpr uint8_t   bPauseable_Mask                  = 0x04;
    }

    // -------------------------------------------------------------------------
    // Class: AGameStateBase
    // Package: Engine | Size: 0x0270 | Super: AInfo (0x0220)
    // -------------------------------------------------------------------------
    namespace AGameStateBase
    {
        constexpr uintptr_t GameModeClass                    = 0x0220; // TSubclassOf<class AGameModeBase> (Size: 0x0008)
        constexpr uintptr_t AuthorityGameMode                = 0x0228; // class AGameModeBase* (Size: 0x0008)
        constexpr uintptr_t SpectatorClass                   = 0x0230; // TSubclassOf<class ASpectatorPawn> (Size: 0x0008)
        constexpr uintptr_t PlayerArray                      = 0x0238; // TArray<class APlayerState*> (Size: 0x0010)
        constexpr uintptr_t bReplicatedHasBegunPlay          = 0x0248; // bool (Size: 0x0001)
        constexpr uintptr_t ReplicatedWorldTimeSeconds       = 0x024C; // float (Size: 0x0004)
        constexpr uintptr_t ServerWorldTimeSecondsDelta      = 0x0250; // float (Size: 0x0004)
        constexpr uintptr_t ServerWorldTimeSecondsUpdateFrequency = 0x0254; // float (Size: 0x0004)
    }

    // -------------------------------------------------------------------------
    // Class: AHUD
    // Package: Engine | Size: 0x0310 | Super: AActor (0x0220)
    // -------------------------------------------------------------------------
    namespace AHUD
    {
        constexpr uintptr_t PlayerOwner                      = 0x0220; // class APlayerController* (Size: 0x0008)
        constexpr uintptr_t bLostFocusPaused                 = 0x0228; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bLostFocusPaused_Bit             = 0;
        constexpr uint8_t   bLostFocusPaused_Mask            = 0x01;
        constexpr uintptr_t bShowHUD                         = 0x0228; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bShowHUD_Bit                     = 1;
        constexpr uint8_t   bShowHUD_Mask                    = 0x02;
        constexpr uintptr_t bShowDebugInfo                   = 0x0228; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bShowDebugInfo_Bit               = 2;
        constexpr uint8_t   bShowDebugInfo_Mask              = 0x04;
        constexpr uintptr_t CurrentTargetIndex               = 0x022C; // int32 (Size: 0x0004)
        constexpr uintptr_t bShowHitBoxDebugInfo             = 0x0230; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bShowHitBoxDebugInfo_Bit         = 0;
        constexpr uint8_t   bShowHitBoxDebugInfo_Mask        = 0x01;
        constexpr uintptr_t bShowOverlays                    = 0x0230; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bShowOverlays_Bit                = 1;
        constexpr uint8_t   bShowOverlays_Mask               = 0x02;
        constexpr uintptr_t bEnableDebugTextShadow           = 0x0230; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bEnableDebugTextShadow_Bit       = 2;
        constexpr uint8_t   bEnableDebugTextShadow_Mask      = 0x04;
        constexpr uintptr_t PostRenderedActors               = 0x0238; // TArray<class AActor*> (Size: 0x0010)
        constexpr uintptr_t DebugDisplay                     = 0x0250; // TArray<class FName> (Size: 0x0010)
        constexpr uintptr_t ToggledDebugCategories           = 0x0260; // TArray<class FName> (Size: 0x0010)
        constexpr uintptr_t Canvas                           = 0x0270; // class UCanvas* (Size: 0x0008)
        constexpr uintptr_t DebugCanvas                      = 0x0278; // class UCanvas* (Size: 0x0008)
        constexpr uintptr_t DebugTextList                    = 0x0280; // TArray<struct FDebugTextInfo> (Size: 0x0010)
        constexpr uintptr_t ShowDebugTargetDesiredClass      = 0x0290; // TSubclassOf<class AActor> (Size: 0x0008)
        constexpr uintptr_t ShowDebugTargetActor             = 0x0298; // class AActor* (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Class: APawn
    // Package: Engine | Size: 0x0280 | Super: AActor (0x0220)
    // -------------------------------------------------------------------------
    namespace APawn
    {
        constexpr uintptr_t bUseControllerRotationPitch      = 0x0228; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bUseControllerRotationPitch_Bit  = 0;
        constexpr uint8_t   bUseControllerRotationPitch_Mask = 0x01;
        constexpr uintptr_t bUseControllerRotationYaw        = 0x0228; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bUseControllerRotationYaw_Bit    = 1;
        constexpr uint8_t   bUseControllerRotationYaw_Mask   = 0x02;
        constexpr uintptr_t bUseControllerRotationRoll       = 0x0228; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bUseControllerRotationRoll_Bit   = 2;
        constexpr uint8_t   bUseControllerRotationRoll_Mask  = 0x04;
        constexpr uintptr_t bCanAffectNavigationGeneration   = 0x0228; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bCanAffectNavigationGeneration_Bit = 3;
        constexpr uint8_t   bCanAffectNavigationGeneration_Mask = 0x08;
        constexpr uintptr_t BaseEyeHeight                    = 0x022C; // float (Size: 0x0004)
        constexpr uintptr_t AutoPossessPlayer                = 0x0230; // EAutoReceiveInput (Size: 0x0001)
        constexpr uintptr_t AutoPossessAI                    = 0x0231; // EAutoPossessAI (Size: 0x0001)
        constexpr uintptr_t RemoteViewPitch                  = 0x0232; // uint8 (Size: 0x0001)
        constexpr uintptr_t AIControllerClass                = 0x0238; // TSubclassOf<class AController> (Size: 0x0008)
        constexpr uintptr_t PlayerState                      = 0x0240; // class APlayerState* (Size: 0x0008)
        constexpr uintptr_t LastHitBy                        = 0x0250; // class AController* (Size: 0x0008)
        constexpr uintptr_t Controller                       = 0x0258; // class AController* (Size: 0x0008)
        constexpr uintptr_t ControlInputVector               = 0x0264; // struct FVector (Size: 0x000C)
        constexpr uintptr_t LastControlInputVector           = 0x0270; // struct FVector (Size: 0x000C)
    }

    // -------------------------------------------------------------------------
    // Class: APlayerCameraManager
    // Package: Engine | Size: 0x2810 | Super: AActor (0x0220)
    // -------------------------------------------------------------------------
    namespace APlayerCameraManager
    {
        constexpr uintptr_t PCOwner                          = 0x0220; // class APlayerController* (Size: 0x0008)
        constexpr uintptr_t TransformComponent               = 0x0228; // class USceneComponent* (Size: 0x0008)
        constexpr uintptr_t DefaultFOV                       = 0x0238; // float (Size: 0x0004)
        constexpr uintptr_t DefaultOrthoWidth                = 0x0240; // float (Size: 0x0004)
        constexpr uintptr_t DefaultAspectRatio               = 0x0248; // float (Size: 0x0004)
        constexpr uintptr_t CameraCache                      = 0x0290; // struct FCameraCacheEntry (Size: 0x0600)
        constexpr uintptr_t LastFrameCameraCache             = 0x0890; // struct FCameraCacheEntry (Size: 0x0600)
        constexpr uintptr_t ViewTarget                       = 0x0E90; // struct FTViewTarget (Size: 0x0610)
        constexpr uintptr_t PendingViewTarget                = 0x14A0; // struct FTViewTarget (Size: 0x0610)
        constexpr uintptr_t CameraCachePrivate               = 0x1AE0; // struct FCameraCacheEntry (Size: 0x0600)
        constexpr uintptr_t LastFrameCameraCachePrivate      = 0x20E0; // struct FCameraCacheEntry (Size: 0x0600)
        constexpr uintptr_t ModifierList                     = 0x26E0; // TArray<class UCameraModifier*> (Size: 0x0010)
        constexpr uintptr_t DefaultModifiers                 = 0x26F0; // TArray<TSubclassOf<class UCameraModifier>> (Size: 0x0010)
        constexpr uintptr_t FreeCamDistance                  = 0x2700; // float (Size: 0x0004)
        constexpr uintptr_t FreeCamOffset                    = 0x2704; // struct FVector (Size: 0x000C)
        constexpr uintptr_t ViewTargetOffset                 = 0x2710; // struct FVector (Size: 0x000C)
        constexpr uintptr_t OnAudioFadeChangeEvent           = 0x2720; // TMulticastInlineDelegate<void(bool bFadeOut, float FadeTime)> (Size: 0x0010)
        constexpr uintptr_t CameraLensEffects                = 0x2740; // TArray<class AEmitterCameraLensEffectBase*> (Size: 0x0010)
        constexpr uintptr_t CachedCameraShakeMod             = 0x2750; // class UCameraModifier_CameraShake* (Size: 0x0008)
        constexpr uintptr_t AnimInstPool[0x8]                = 0x2758; // class UCameraAnimInst* (Size: 0x0008)
        constexpr uintptr_t PostProcessBlendCache            = 0x2798; // TArray<struct FPostProcessSettings> (Size: 0x0010)
        constexpr uintptr_t ActiveAnims                      = 0x27B8; // TArray<class UCameraAnimInst*> (Size: 0x0010)
        constexpr uintptr_t FreeAnims                        = 0x27C8; // TArray<class UCameraAnimInst*> (Size: 0x0010)
        constexpr uintptr_t AnimCameraActor                  = 0x27D8; // class ACameraActor* (Size: 0x0008)
        constexpr uintptr_t bIsOrthographic                  = 0x27E0; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bIsOrthographic_Bit              = 0;
        constexpr uint8_t   bIsOrthographic_Mask             = 0x01;
        constexpr uintptr_t bDefaultConstrainAspectRatio     = 0x27E0; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bDefaultConstrainAspectRatio_Bit = 1;
        constexpr uint8_t   bDefaultConstrainAspectRatio_Mask = 0x02;
        constexpr uintptr_t bClientSimulatingViewTarget      = 0x27E0; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bClientSimulatingViewTarget_Bit  = 6;
        constexpr uint8_t   bClientSimulatingViewTarget_Mask = 0x40;
        constexpr uintptr_t bUseClientSideCameraUpdates      = 0x27E0; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bUseClientSideCameraUpdates_Bit  = 7;
        constexpr uint8_t   bUseClientSideCameraUpdates_Mask = 0x80;
        constexpr uintptr_t bGameCameraCutThisFrame          = 0x27E1; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bGameCameraCutThisFrame_Bit      = 2;
        constexpr uint8_t   bGameCameraCutThisFrame_Mask     = 0x04;
        constexpr uintptr_t ViewPitchMin                     = 0x27E4; // float (Size: 0x0004)
        constexpr uintptr_t ViewPitchMax                     = 0x27E8; // float (Size: 0x0004)
        constexpr uintptr_t ViewYawMin                       = 0x27EC; // float (Size: 0x0004)
        constexpr uintptr_t ViewYawMax                       = 0x27F0; // float (Size: 0x0004)
        constexpr uintptr_t ViewRollMin                      = 0x27F4; // float (Size: 0x0004)
        constexpr uintptr_t ViewRollMax                      = 0x27F8; // float (Size: 0x0004)
        constexpr uintptr_t ServerUpdateCameraTimeout        = 0x2800; // float (Size: 0x0004)
    }

    // -------------------------------------------------------------------------
    // Class: APlayerController
    // Package: Engine | Size: 0x0570 | Super: AController (0x0298)
    // -------------------------------------------------------------------------
    namespace APlayerController
    {
        constexpr uintptr_t Player                           = 0x0298; // class UPlayer* (Size: 0x0008)
        constexpr uintptr_t AcknowledgedPawn                 = 0x02A0; // class APawn* (Size: 0x0008)
        constexpr uintptr_t ControllingDirTrackInst          = 0x02A8; // class UInterpTrackInstDirector* (Size: 0x0008)
        constexpr uintptr_t MyHUD                            = 0x02B0; // class AHUD* (Size: 0x0008)
        constexpr uintptr_t PlayerCameraManager              = 0x02B8; // class APlayerCameraManager* (Size: 0x0008)
        constexpr uintptr_t PlayerCameraManagerClass         = 0x02C0; // TSubclassOf<class APlayerCameraManager> (Size: 0x0008)
        constexpr uintptr_t bAutoManageActiveCameraTarget    = 0x02C8; // bool (Size: 0x0001)
        constexpr uintptr_t TargetViewRotation               = 0x02CC; // struct FRotator (Size: 0x000C)
        constexpr uintptr_t SmoothTargetViewRotationSpeed    = 0x02E4; // float (Size: 0x0004)
        constexpr uintptr_t HiddenActors                     = 0x02F0; // TArray<class AActor*> (Size: 0x0010)
        constexpr uintptr_t HiddenPrimitiveComponents        = 0x0300; // TArray<TWeakObjectPtr<class UPrimitiveComponent>> (Size: 0x0010)
        constexpr uintptr_t LastSpectatorStateSynchTime      = 0x0314; // float (Size: 0x0004)
        constexpr uintptr_t LastSpectatorSyncLocation        = 0x0318; // struct FVector (Size: 0x000C)
        constexpr uintptr_t LastSpectatorSyncRotation        = 0x0324; // struct FRotator (Size: 0x000C)
        constexpr uintptr_t ClientCap                        = 0x0330; // int32 (Size: 0x0004)
        constexpr uintptr_t CheatManager                     = 0x0338; // class UCheatManager* (Size: 0x0008)
        constexpr uintptr_t CheatClass                       = 0x0340; // TSubclassOf<class UCheatManager> (Size: 0x0008)
        constexpr uintptr_t PlayerInput                      = 0x0348; // class UPlayerInput* (Size: 0x0008)
        constexpr uintptr_t ActiveForceFeedbackEffects       = 0x0350; // TArray<struct FActiveForceFeedbackEffect> (Size: 0x0010)
        constexpr uintptr_t bPlayerIsWaiting                 = 0x03D0; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bPlayerIsWaiting_Bit             = 4;
        constexpr uint8_t   bPlayerIsWaiting_Mask            = 0x10;
        constexpr uintptr_t NetPlayerIndex                   = 0x03D4; // uint8 (Size: 0x0001)
        constexpr uintptr_t PendingSwapConnection            = 0x0410; // class UNetConnection* (Size: 0x0008)
        constexpr uintptr_t NetConnection                    = 0x0418; // class UNetConnection* (Size: 0x0008)
        constexpr uintptr_t InputYawScale                    = 0x042C; // float (Size: 0x0004)
        constexpr uintptr_t InputPitchScale                  = 0x0430; // float (Size: 0x0004)
        constexpr uintptr_t InputRollScale                   = 0x0434; // float (Size: 0x0004)
        constexpr uintptr_t bShowMouseCursor                 = 0x0438; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bShowMouseCursor_Bit             = 0;
        constexpr uint8_t   bShowMouseCursor_Mask            = 0x01;
        constexpr uintptr_t bEnableClickEvents               = 0x0438; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bEnableClickEvents_Bit           = 1;
        constexpr uint8_t   bEnableClickEvents_Mask          = 0x02;
        constexpr uintptr_t bEnableTouchEvents               = 0x0438; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bEnableTouchEvents_Bit           = 2;
        constexpr uint8_t   bEnableTouchEvents_Mask          = 0x04;
        constexpr uintptr_t bEnableMouseOverEvents           = 0x0438; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bEnableMouseOverEvents_Bit       = 3;
        constexpr uint8_t   bEnableMouseOverEvents_Mask      = 0x08;
        constexpr uintptr_t bEnableTouchOverEvents           = 0x0438; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bEnableTouchOverEvents_Bit       = 4;
        constexpr uint8_t   bEnableTouchOverEvents_Mask      = 0x10;
        constexpr uintptr_t bForceFeedbackEnabled            = 0x0438; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bForceFeedbackEnabled_Bit        = 5;
        constexpr uint8_t   bForceFeedbackEnabled_Mask       = 0x20;
        constexpr uintptr_t ForceFeedbackScale               = 0x043C; // float (Size: 0x0004)
        constexpr uintptr_t ClickEventKeys                   = 0x0440; // TArray<struct FKey> (Size: 0x0010)
        constexpr uintptr_t DefaultMouseCursor               = 0x0450; // EMouseCursor (Size: 0x0001)
        constexpr uintptr_t CurrentMouseCursor               = 0x0451; // EMouseCursor (Size: 0x0001)
        constexpr uintptr_t DefaultClickTraceChannel         = 0x0452; // ECollisionChannel (Size: 0x0001)
        constexpr uintptr_t CurrentClickTraceChannel         = 0x0453; // ECollisionChannel (Size: 0x0001)
        constexpr uintptr_t HitResultTraceDistance           = 0x0454; // float (Size: 0x0004)
        constexpr uintptr_t SeamlessTravelCount              = 0x0458; // uint16 (Size: 0x0002)
        constexpr uintptr_t LastCompletedSeamlessTravelCount = 0x045A; // uint16 (Size: 0x0002)
        constexpr uintptr_t InactiveStateInputComponent      = 0x04D0; // class UInputComponent* (Size: 0x0008)
        constexpr uintptr_t bShouldPerformFullTickWhenPaused = 0x04D8; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bShouldPerformFullTickWhenPaused_Bit = 2;
        constexpr uint8_t   bShouldPerformFullTickWhenPaused_Mask = 0x04;
        constexpr uintptr_t CurrentTouchInterface            = 0x04F0; // class UTouchInterface* (Size: 0x0008)
        constexpr uintptr_t SpectatorPawn                    = 0x0548; // class ASpectatorPawn* (Size: 0x0008)
        constexpr uintptr_t bIsLocalPlayerController         = 0x0554; // bool (Size: 0x0001)
        constexpr uintptr_t SpawnLocation                    = 0x0558; // struct FVector (Size: 0x000C)
    }

    // -------------------------------------------------------------------------
    // Class: APlayerState
    // Package: Engine | Size: 0x0320 | Super: AInfo (0x0220)
    // -------------------------------------------------------------------------
    namespace APlayerState
    {
        constexpr uintptr_t Score                            = 0x0220; // float (Size: 0x0004)
        constexpr uintptr_t PlayerId                         = 0x0224; // int32 (Size: 0x0004)
        constexpr uintptr_t Ping                             = 0x0228; // uint8 (Size: 0x0001)
        constexpr uintptr_t bShouldUpdateReplicatedPing      = 0x022A; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bShouldUpdateReplicatedPing_Bit  = 0;
        constexpr uint8_t   bShouldUpdateReplicatedPing_Mask = 0x01;
        constexpr uintptr_t bIsSpectator                     = 0x022A; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bIsSpectator_Bit                 = 1;
        constexpr uint8_t   bIsSpectator_Mask                = 0x02;
        constexpr uintptr_t bOnlySpectator                   = 0x022A; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bOnlySpectator_Bit               = 2;
        constexpr uint8_t   bOnlySpectator_Mask              = 0x04;
        constexpr uintptr_t bIsABot                          = 0x022A; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bIsABot_Bit                      = 3;
        constexpr uint8_t   bIsABot_Mask                     = 0x08;
        constexpr uintptr_t bIsInactive                      = 0x022A; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bIsInactive_Bit                  = 5;
        constexpr uint8_t   bIsInactive_Mask                 = 0x20;
        constexpr uintptr_t bFromPreviousLevel               = 0x022A; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bFromPreviousLevel_Bit           = 6;
        constexpr uint8_t   bFromPreviousLevel_Mask          = 0x40;
        constexpr uintptr_t StartTime                        = 0x022C; // int32 (Size: 0x0004)
        constexpr uintptr_t EngineMessageClass               = 0x0230; // TSubclassOf<class ULocalMessage> (Size: 0x0008)
        constexpr uintptr_t SavedNetworkAddress              = 0x0240; // class FString (Size: 0x0010)
        constexpr uintptr_t UniqueId                         = 0x0250; // struct FUniqueNetIdRepl (Size: 0x0028)
        constexpr uintptr_t PawnPrivate                      = 0x0280; // class APawn* (Size: 0x0008)
        constexpr uintptr_t PlayerNamePrivate                = 0x0300; // class FString (Size: 0x0010)
    }

    // -------------------------------------------------------------------------
    // Struct: FCameraCacheEntry
    // Package: Engine | Size: 0x0600
    // -------------------------------------------------------------------------
    namespace FCameraCacheEntry
    {
        constexpr uintptr_t Timestamp                        = 0x0000; // float (Size: 0x0004)
        constexpr uintptr_t POV                              = 0x0010; // struct FMinimalViewInfo (Size: 0x05F0)
    }

    // -------------------------------------------------------------------------
    // Struct: FHitResult
    // Package: Engine | Size: 0x0088
    // -------------------------------------------------------------------------
    namespace FHitResult
    {
        constexpr uintptr_t FaceIndex                        = 0x0000; // int32 (Size: 0x0004)
        constexpr uintptr_t Time                             = 0x0004; // float (Size: 0x0004)
        constexpr uintptr_t Distance                         = 0x0008; // float (Size: 0x0004)
        constexpr uintptr_t Location                         = 0x000C; // struct FVector_NetQuantize (Size: 0x000C)
        constexpr uintptr_t ImpactPoint                      = 0x0018; // struct FVector_NetQuantize (Size: 0x000C)
        constexpr uintptr_t Normal                           = 0x0024; // struct FVector_NetQuantizeNormal (Size: 0x000C)
        constexpr uintptr_t ImpactNormal                     = 0x0030; // struct FVector_NetQuantizeNormal (Size: 0x000C)
        constexpr uintptr_t TraceStart                       = 0x003C; // struct FVector_NetQuantize (Size: 0x000C)
        constexpr uintptr_t TraceEnd                         = 0x0048; // struct FVector_NetQuantize (Size: 0x000C)
        constexpr uintptr_t PenetrationDepth                 = 0x0054; // float (Size: 0x0004)
        constexpr uintptr_t Item                             = 0x0058; // int32 (Size: 0x0004)
        constexpr uintptr_t ElementIndex                     = 0x005C; // uint8 (Size: 0x0001)
        constexpr uintptr_t bBlockingHit                     = 0x005D; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bBlockingHit_Bit                 = 0;
        constexpr uint8_t   bBlockingHit_Mask                = 0x01;
        constexpr uintptr_t bStartPenetrating                = 0x005D; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bStartPenetrating_Bit            = 1;
        constexpr uint8_t   bStartPenetrating_Mask           = 0x02;
        constexpr uintptr_t PhysMaterial                     = 0x0060; // TWeakObjectPtr<class UPhysicalMaterial> (Size: 0x0008)
        constexpr uintptr_t Actor                            = 0x0068; // TWeakObjectPtr<class AActor> (Size: 0x0008)
        constexpr uintptr_t Component                        = 0x0070; // TWeakObjectPtr<class UPrimitiveComponent> (Size: 0x0008)
        constexpr uintptr_t BoneName                         = 0x0078; // class FName (Size: 0x0008)
        constexpr uintptr_t MyBoneName                       = 0x0080; // class FName (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Struct: FMinimalViewInfo
    // Package: Engine | Size: 0x05F0
    // -------------------------------------------------------------------------
    namespace FMinimalViewInfo
    {
        constexpr uintptr_t Location                         = 0x0000; // struct FVector (Size: 0x000C)
        constexpr uintptr_t Rotation                         = 0x000C; // struct FRotator (Size: 0x000C)
        constexpr uintptr_t FOV                              = 0x0018; // float (Size: 0x0004)
        constexpr uintptr_t DesiredFOV                       = 0x001C; // float (Size: 0x0004)
        constexpr uintptr_t OrthoWidth                       = 0x0020; // float (Size: 0x0004)
        constexpr uintptr_t OrthoNearClipPlane               = 0x0024; // float (Size: 0x0004)
        constexpr uintptr_t OrthoFarClipPlane                = 0x0028; // float (Size: 0x0004)
        constexpr uintptr_t AspectRatio                      = 0x002C; // float (Size: 0x0004)
        constexpr uintptr_t bConstrainAspectRatio            = 0x0030; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bConstrainAspectRatio_Bit        = 0;
        constexpr uint8_t   bConstrainAspectRatio_Mask       = 0x01;
        constexpr uintptr_t bUseFieldOfViewForLOD            = 0x0030; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bUseFieldOfViewForLOD_Bit        = 1;
        constexpr uint8_t   bUseFieldOfViewForLOD_Mask       = 0x02;
        constexpr uintptr_t ProjectionMode                   = 0x0034; // ECameraProjectionMode (Size: 0x0001)
        constexpr uintptr_t PostProcessBlendWeight           = 0x0038; // float (Size: 0x0004)
        constexpr uintptr_t PostProcessSettings              = 0x0040; // struct FPostProcessSettings (Size: 0x0560)
        constexpr uintptr_t OffCenterProjectionOffset        = 0x05A0; // struct FVector2D (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Struct: FQuat
    // Package: CoreUObject | Size: 0x0010
    // -------------------------------------------------------------------------
    namespace FQuat
    {
        constexpr uintptr_t X                                = 0x0000; // float (Size: 0x0004)
        constexpr uintptr_t Y                                = 0x0004; // float (Size: 0x0004)
        constexpr uintptr_t Z                                = 0x0008; // float (Size: 0x0004)
        constexpr uintptr_t W                                = 0x000C; // float (Size: 0x0004)
    }

    // -------------------------------------------------------------------------
    // Struct: FRotator
    // Package: CoreUObject | Size: 0x000C
    // -------------------------------------------------------------------------
    namespace FRotator
    {
        constexpr uintptr_t Pitch                            = 0x0000; // float (Size: 0x0004)
        constexpr uintptr_t Yaw                              = 0x0004; // float (Size: 0x0004)
        constexpr uintptr_t Roll                             = 0x0008; // float (Size: 0x0004)
    }

    // -------------------------------------------------------------------------
    // Struct: FTransform
    // Package: CoreUObject | Size: 0x0030
    // -------------------------------------------------------------------------
    namespace FTransform
    {
        constexpr uintptr_t Rotation                         = 0x0000; // struct FQuat (Size: 0x0010)
        constexpr uintptr_t Translation                      = 0x0010; // struct FVector (Size: 0x000C)
        constexpr uintptr_t Scale3D                          = 0x0020; // struct FVector (Size: 0x000C)
    }

    // -------------------------------------------------------------------------
    // Struct: FVector
    // Package: CoreUObject | Size: 0x000C
    // -------------------------------------------------------------------------
    namespace FVector
    {
        constexpr uintptr_t X                                = 0x0000; // float (Size: 0x0004)
        constexpr uintptr_t Y                                = 0x0004; // float (Size: 0x0004)
        constexpr uintptr_t Z                                = 0x0008; // float (Size: 0x0004)
    }

    // -------------------------------------------------------------------------
    // Struct: FVector2D
    // Package: CoreUObject | Size: 0x0008
    // -------------------------------------------------------------------------
    namespace FVector2D
    {
        constexpr uintptr_t X                                = 0x0000; // float (Size: 0x0004)
        constexpr uintptr_t Y                                = 0x0004; // float (Size: 0x0004)
    }

    // -------------------------------------------------------------------------
    // Class: UActorComponent
    // Package: Engine | Size: 0x00B0 | Super: UObject (0x0028)
    // -------------------------------------------------------------------------
    namespace UActorComponent
    {
        constexpr uintptr_t PrimaryComponentTick             = 0x0030; // struct FActorComponentTickFunction (Size: 0x0030)
        constexpr uintptr_t ComponentTags                    = 0x0060; // TArray<class FName> (Size: 0x0010)
        constexpr uintptr_t AssetUserData                    = 0x0070; // TArray<class UAssetUserData*> (Size: 0x0010)
        constexpr uintptr_t UCSSerializationIndex            = 0x0084; // int32 (Size: 0x0004)
        constexpr uintptr_t bNetAddressable                  = 0x0088; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bNetAddressable_Bit              = 3;
        constexpr uint8_t   bNetAddressable_Mask             = 0x08;
        constexpr uintptr_t bReplicates                      = 0x0088; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bReplicates_Bit                  = 4;
        constexpr uint8_t   bReplicates_Mask                 = 0x10;
        constexpr uintptr_t bAutoActivate                    = 0x0089; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bAutoActivate_Bit                = 7;
        constexpr uint8_t   bAutoActivate_Mask               = 0x80;
        constexpr uintptr_t bIsActive                        = 0x008A; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bIsActive_Bit                    = 0;
        constexpr uint8_t   bIsActive_Mask                   = 0x01;
        constexpr uintptr_t bEditableWhenInherited           = 0x008A; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bEditableWhenInherited_Bit       = 1;
        constexpr uint8_t   bEditableWhenInherited_Mask      = 0x02;
        constexpr uintptr_t bCanEverAffectNavigation         = 0x008A; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bCanEverAffectNavigation_Bit     = 3;
        constexpr uint8_t   bCanEverAffectNavigation_Mask    = 0x08;
        constexpr uintptr_t bIsEditorOnly                    = 0x008A; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bIsEditorOnly_Bit                = 5;
        constexpr uint8_t   bIsEditorOnly_Mask               = 0x20;
        constexpr uintptr_t CreationMethod                   = 0x008C; // EComponentCreationMethod (Size: 0x0001)
        constexpr uintptr_t OnComponentActivated             = 0x008D; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnComponentDeactivated           = 0x008E; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t UCSModifiedProperties            = 0x0090; // TArray<struct FSimpleMemberReference> (Size: 0x0010)
    }

    // -------------------------------------------------------------------------
    // Class: UCameraComponent
    // Package: Engine | Size: 0x07D0 | Super: USceneComponent (0x0200)
    // -------------------------------------------------------------------------
    namespace UCameraComponent
    {
        constexpr uintptr_t FieldOfView                      = 0x01F8; // float (Size: 0x0004)
        constexpr uintptr_t OrthoWidth                       = 0x01FC; // float (Size: 0x0004)
        constexpr uintptr_t OrthoNearClipPlane               = 0x0200; // float (Size: 0x0004)
        constexpr uintptr_t OrthoFarClipPlane                = 0x0204; // float (Size: 0x0004)
        constexpr uintptr_t AspectRatio                      = 0x0208; // float (Size: 0x0004)
        constexpr uintptr_t bConstrainAspectRatio            = 0x020C; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bConstrainAspectRatio_Bit        = 0;
        constexpr uint8_t   bConstrainAspectRatio_Mask       = 0x01;
        constexpr uintptr_t bUseFieldOfViewForLOD            = 0x020C; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bUseFieldOfViewForLOD_Bit        = 1;
        constexpr uint8_t   bUseFieldOfViewForLOD_Mask       = 0x02;
        constexpr uintptr_t bLockToHmd                       = 0x020C; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bLockToHmd_Bit                   = 2;
        constexpr uint8_t   bLockToHmd_Mask                  = 0x04;
        constexpr uintptr_t bUsePawnControlRotation          = 0x020C; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bUsePawnControlRotation_Bit      = 3;
        constexpr uint8_t   bUsePawnControlRotation_Mask     = 0x08;
        constexpr uintptr_t ProjectionMode                   = 0x020D; // ECameraProjectionMode (Size: 0x0001)
        constexpr uintptr_t PostProcessBlendWeight           = 0x0240; // float (Size: 0x0004)
        constexpr uintptr_t PostProcessSettings              = 0x0270; // struct FPostProcessSettings (Size: 0x0560)
    }

    // -------------------------------------------------------------------------
    // Class: UCanvas
    // Package: Engine | Size: 0x02D0 | Super: UObject (0x0028)
    // -------------------------------------------------------------------------
    namespace UCanvas
    {
        constexpr uintptr_t OrgX                             = 0x0028; // float (Size: 0x0004)
        constexpr uintptr_t OrgY                             = 0x002C; // float (Size: 0x0004)
        constexpr uintptr_t ClipX                            = 0x0030; // float (Size: 0x0004)
        constexpr uintptr_t ClipY                            = 0x0034; // float (Size: 0x0004)
        constexpr uintptr_t DrawColor                        = 0x0038; // struct FColor (Size: 0x0004)
        constexpr uintptr_t bCenterX                         = 0x003C; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bCenterX_Bit                     = 0;
        constexpr uint8_t   bCenterX_Mask                    = 0x01;
        constexpr uintptr_t bCenterY                         = 0x003C; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bCenterY_Bit                     = 1;
        constexpr uint8_t   bCenterY_Mask                    = 0x02;
        constexpr uintptr_t bNoSmooth                        = 0x003C; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bNoSmooth_Bit                    = 2;
        constexpr uint8_t   bNoSmooth_Mask                   = 0x04;
        constexpr uintptr_t SizeX                            = 0x0040; // int32 (Size: 0x0004)
        constexpr uintptr_t SizeY                            = 0x0044; // int32 (Size: 0x0004)
        constexpr uintptr_t ColorModulate                    = 0x0050; // struct FPlane (Size: 0x0010)
        constexpr uintptr_t DefaultTexture                   = 0x0060; // class UTexture2D* (Size: 0x0008)
        constexpr uintptr_t GradientTexture0                 = 0x0068; // class UTexture2D* (Size: 0x0008)
        constexpr uintptr_t ReporterGraph                    = 0x0070; // class UReporterGraph* (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Class: UCharacterMovementComponent
    // Package: Engine | Size: 0x0AF0 | Super: UPawnMovementComponent (0x0138)
    // -------------------------------------------------------------------------
    namespace UCharacterMovementComponent
    {
        constexpr uintptr_t CharacterOwner                   = 0x0148; // class ACharacter* (Size: 0x0008)
        constexpr uintptr_t GravityScale                     = 0x0150; // float (Size: 0x0004)
        constexpr uintptr_t MaxStepHeight                    = 0x0154; // float (Size: 0x0004)
        constexpr uintptr_t JumpZVelocity                    = 0x0158; // float (Size: 0x0004)
        constexpr uintptr_t JumpOffJumpZFactor               = 0x015C; // float (Size: 0x0004)
        constexpr uintptr_t WalkableFloorAngle               = 0x0160; // float (Size: 0x0004)
        constexpr uintptr_t WalkableFloorZ                   = 0x0164; // float (Size: 0x0004)
        constexpr uintptr_t MovementMode                     = 0x0168; // EMovementMode (Size: 0x0001)
        constexpr uintptr_t CustomMovementMode               = 0x0169; // uint8 (Size: 0x0001)
        constexpr uintptr_t NetworkSmoothingMode             = 0x016A; // ENetworkSmoothingMode (Size: 0x0001)
        constexpr uintptr_t GroundFriction                   = 0x016C; // float (Size: 0x0004)
        constexpr uintptr_t MaxWalkSpeed                     = 0x018C; // float (Size: 0x0004)
        constexpr uintptr_t MaxWalkSpeedCrouched             = 0x0190; // float (Size: 0x0004)
        constexpr uintptr_t MaxSwimSpeed                     = 0x0194; // float (Size: 0x0004)
        constexpr uintptr_t MaxFlySpeed                      = 0x0198; // float (Size: 0x0004)
        constexpr uintptr_t MaxCustomMovementSpeed           = 0x019C; // float (Size: 0x0004)
        constexpr uintptr_t MaxAcceleration                  = 0x01A0; // float (Size: 0x0004)
        constexpr uintptr_t MinAnalogWalkSpeed               = 0x01A4; // float (Size: 0x0004)
        constexpr uintptr_t BrakingFrictionFactor            = 0x01A8; // float (Size: 0x0004)
        constexpr uintptr_t BrakingFriction                  = 0x01AC; // float (Size: 0x0004)
        constexpr uintptr_t BrakingSubStepTime               = 0x01B0; // float (Size: 0x0004)
        constexpr uintptr_t BrakingDecelerationWalking       = 0x01B4; // float (Size: 0x0004)
        constexpr uintptr_t BrakingDecelerationFalling       = 0x01B8; // float (Size: 0x0004)
        constexpr uintptr_t BrakingDecelerationSwimming      = 0x01BC; // float (Size: 0x0004)
        constexpr uintptr_t BrakingDecelerationFlying        = 0x01C0; // float (Size: 0x0004)
        constexpr uintptr_t AirControl                       = 0x01C4; // float (Size: 0x0004)
        constexpr uintptr_t AirControlBoostMultiplier        = 0x01C8; // float (Size: 0x0004)
        constexpr uintptr_t AirControlBoostVelocityThreshold = 0x01CC; // float (Size: 0x0004)
        constexpr uintptr_t FallingLateralFriction           = 0x01D0; // float (Size: 0x0004)
        constexpr uintptr_t CrouchedHalfHeight               = 0x01D4; // float (Size: 0x0004)
        constexpr uintptr_t Buoyancy                         = 0x01D8; // float (Size: 0x0004)
        constexpr uintptr_t PerchRadiusThreshold             = 0x01DC; // float (Size: 0x0004)
        constexpr uintptr_t PerchAdditionalHeight            = 0x01E0; // float (Size: 0x0004)
        constexpr uintptr_t RotationRate                     = 0x01E4; // struct FRotator (Size: 0x000C)
        constexpr uintptr_t bUseSeparateBrakingFriction      = 0x01F0; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bUseSeparateBrakingFriction_Bit  = 0;
        constexpr uint8_t   bUseSeparateBrakingFriction_Mask = 0x01;
        constexpr uintptr_t bApplyGravityWhileJumping        = 0x01F0; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bApplyGravityWhileJumping_Bit    = 1;
        constexpr uint8_t   bApplyGravityWhileJumping_Mask   = 0x02;
        constexpr uintptr_t bUseControllerDesiredRotation    = 0x01F0; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bUseControllerDesiredRotation_Bit = 2;
        constexpr uint8_t   bUseControllerDesiredRotation_Mask = 0x04;
        constexpr uintptr_t bOrientRotationToMovement        = 0x01F0; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bOrientRotationToMovement_Bit    = 3;
        constexpr uint8_t   bOrientRotationToMovement_Mask   = 0x08;
        constexpr uintptr_t bSweepWhileNavWalking            = 0x01F0; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bSweepWhileNavWalking_Bit        = 4;
        constexpr uint8_t   bSweepWhileNavWalking_Mask       = 0x10;
        constexpr uintptr_t bMovementInProgress              = 0x01F0; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bMovementInProgress_Bit          = 6;
        constexpr uint8_t   bMovementInProgress_Mask         = 0x40;
        constexpr uintptr_t bEnableScopedMovementUpdates     = 0x01F0; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bEnableScopedMovementUpdates_Bit = 7;
        constexpr uint8_t   bEnableScopedMovementUpdates_Mask = 0x80;
        constexpr uintptr_t bEnableServerDualMoveScopedMovementUpdates = 0x01F1; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bEnableServerDualMoveScopedMovementUpdates_Bit = 0;
        constexpr uint8_t   bEnableServerDualMoveScopedMovementUpdates_Mask = 0x01;
        constexpr uintptr_t bForceMaxAccel                   = 0x01F1; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bForceMaxAccel_Bit               = 1;
        constexpr uint8_t   bForceMaxAccel_Mask              = 0x02;
        constexpr uintptr_t bRunPhysicsWithNoController      = 0x01F1; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bRunPhysicsWithNoController_Bit  = 2;
        constexpr uint8_t   bRunPhysicsWithNoController_Mask = 0x04;
        constexpr uintptr_t bForceNextFloorCheck             = 0x01F1; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bForceNextFloorCheck_Bit         = 3;
        constexpr uint8_t   bForceNextFloorCheck_Mask        = 0x08;
        constexpr uintptr_t bShrinkProxyCapsule              = 0x01F1; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bShrinkProxyCapsule_Bit          = 4;
        constexpr uint8_t   bShrinkProxyCapsule_Mask         = 0x10;
        constexpr uintptr_t bCanWalkOffLedges                = 0x01F1; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bCanWalkOffLedges_Bit            = 5;
        constexpr uint8_t   bCanWalkOffLedges_Mask           = 0x20;
        constexpr uintptr_t bCanWalkOffLedgesWhenCrouching   = 0x01F1; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bCanWalkOffLedgesWhenCrouching_Bit = 6;
        constexpr uint8_t   bCanWalkOffLedgesWhenCrouching_Mask = 0x40;
        constexpr uintptr_t bNetworkSkipProxyPredictionOnNetUpdate = 0x01F2; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bNetworkSkipProxyPredictionOnNetUpdate_Bit = 1;
        constexpr uint8_t   bNetworkSkipProxyPredictionOnNetUpdate_Mask = 0x02;
        constexpr uintptr_t bNetworkAlwaysReplicateTransformUpdateTimestamp = 0x01F2; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bNetworkAlwaysReplicateTransformUpdateTimestamp_Bit = 2;
        constexpr uint8_t   bNetworkAlwaysReplicateTransformUpdateTimestamp_Mask = 0x04;
        constexpr uintptr_t bDeferUpdateMoveComponent        = 0x01F2; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bDeferUpdateMoveComponent_Bit    = 3;
        constexpr uint8_t   bDeferUpdateMoveComponent_Mask   = 0x08;
        constexpr uintptr_t bEnablePhysicsInteraction        = 0x01F2; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bEnablePhysicsInteraction_Bit    = 4;
        constexpr uint8_t   bEnablePhysicsInteraction_Mask   = 0x10;
        constexpr uintptr_t bTouchForceScaledToMass          = 0x01F2; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bTouchForceScaledToMass_Bit      = 5;
        constexpr uint8_t   bTouchForceScaledToMass_Mask     = 0x20;
        constexpr uintptr_t bPushForceScaledToMass           = 0x01F2; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bPushForceScaledToMass_Bit       = 6;
        constexpr uint8_t   bPushForceScaledToMass_Mask      = 0x40;
        constexpr uintptr_t bPushForceUsingZOffset           = 0x01F2; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bPushForceUsingZOffset_Bit       = 7;
        constexpr uint8_t   bPushForceUsingZOffset_Mask      = 0x80;
        constexpr uintptr_t bScalePushForceToVelocity        = 0x01F3; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bScalePushForceToVelocity_Bit    = 0;
        constexpr uint8_t   bScalePushForceToVelocity_Mask   = 0x01;
        constexpr uintptr_t DeferredUpdatedMoveComponent     = 0x01F8; // class USceneComponent* (Size: 0x0008)
        constexpr uintptr_t MaxOutOfWaterStepHeight          = 0x0200; // float (Size: 0x0004)
        constexpr uintptr_t OutofWaterZ                      = 0x0204; // float (Size: 0x0004)
        constexpr uintptr_t Mass                             = 0x0208; // float (Size: 0x0004)
        constexpr uintptr_t StandingDownwardForceScale       = 0x020C; // float (Size: 0x0004)
        constexpr uintptr_t InitialPushForceFactor           = 0x0210; // float (Size: 0x0004)
        constexpr uintptr_t PushForceFactor                  = 0x0214; // float (Size: 0x0004)
        constexpr uintptr_t PushForcePointZOffsetFactor      = 0x0218; // float (Size: 0x0004)
        constexpr uintptr_t TouchForceFactor                 = 0x021C; // float (Size: 0x0004)
        constexpr uintptr_t MinTouchForce                    = 0x0220; // float (Size: 0x0004)
        constexpr uintptr_t MaxTouchForce                    = 0x0224; // float (Size: 0x0004)
        constexpr uintptr_t RepulsionForce                   = 0x0228; // float (Size: 0x0004)
        constexpr uintptr_t Acceleration                     = 0x022C; // struct FVector (Size: 0x000C)
        constexpr uintptr_t LastUpdateRotation               = 0x0240; // struct FQuat (Size: 0x0010)
        constexpr uintptr_t LastUpdateLocation               = 0x0250; // struct FVector (Size: 0x000C)
        constexpr uintptr_t LastUpdateVelocity               = 0x025C; // struct FVector (Size: 0x000C)
        constexpr uintptr_t ServerLastTransformUpdateTimeStamp = 0x0268; // float (Size: 0x0004)
        constexpr uintptr_t ServerLastClientGoodMoveAckTime  = 0x026C; // float (Size: 0x0004)
        constexpr uintptr_t ServerLastClientAdjustmentTime   = 0x0270; // float (Size: 0x0004)
        constexpr uintptr_t PendingImpulseToApply            = 0x0274; // struct FVector (Size: 0x000C)
        constexpr uintptr_t PendingForceToApply              = 0x0280; // struct FVector (Size: 0x000C)
        constexpr uintptr_t AnalogInputModifier              = 0x028C; // float (Size: 0x0004)
        constexpr uintptr_t MaxSimulationTimeStep            = 0x029C; // float (Size: 0x0004)
        constexpr uintptr_t MaxSimulationIterations          = 0x02A0; // int32 (Size: 0x0004)
        constexpr uintptr_t MaxJumpApexAttemptsPerSimulation = 0x02A4; // int32 (Size: 0x0004)
        constexpr uintptr_t MaxDepenetrationWithGeometry     = 0x02A8; // float (Size: 0x0004)
        constexpr uintptr_t MaxDepenetrationWithGeometryAsProxy = 0x02AC; // float (Size: 0x0004)
        constexpr uintptr_t MaxDepenetrationWithPawn         = 0x02B0; // float (Size: 0x0004)
        constexpr uintptr_t MaxDepenetrationWithPawnAsProxy  = 0x02B4; // float (Size: 0x0004)
        constexpr uintptr_t NetworkSimulatedSmoothLocationTime = 0x02B8; // float (Size: 0x0004)
        constexpr uintptr_t NetworkSimulatedSmoothRotationTime = 0x02BC; // float (Size: 0x0004)
        constexpr uintptr_t ListenServerNetworkSimulatedSmoothLocationTime = 0x02C0; // float (Size: 0x0004)
        constexpr uintptr_t ListenServerNetworkSimulatedSmoothRotationTime = 0x02C4; // float (Size: 0x0004)
        constexpr uintptr_t NetProxyShrinkRadius             = 0x02C8; // float (Size: 0x0004)
        constexpr uintptr_t NetProxyShrinkHalfHeight         = 0x02CC; // float (Size: 0x0004)
        constexpr uintptr_t NetworkMaxSmoothUpdateDistance   = 0x02D0; // float (Size: 0x0004)
        constexpr uintptr_t NetworkNoSmoothUpdateDistance    = 0x02D4; // float (Size: 0x0004)
        constexpr uintptr_t NetworkMinTimeBetweenClientAckGoodMoves = 0x02D8; // float (Size: 0x0004)
        constexpr uintptr_t NetworkMinTimeBetweenClientAdjustments = 0x02DC; // float (Size: 0x0004)
        constexpr uintptr_t NetworkMinTimeBetweenClientAdjustmentsLargeCorrection = 0x02E0; // float (Size: 0x0004)
        constexpr uintptr_t NetworkLargeClientCorrectionDistance = 0x02E4; // float (Size: 0x0004)
        constexpr uintptr_t LedgeCheckThreshold              = 0x02E8; // float (Size: 0x0004)
        constexpr uintptr_t JumpOutOfWaterPitch              = 0x02EC; // float (Size: 0x0004)
        constexpr uintptr_t CurrentFloor                     = 0x02F0; // struct FFindFloorResult (Size: 0x0094)
        constexpr uintptr_t DefaultLandMovementMode          = 0x0384; // EMovementMode (Size: 0x0001)
        constexpr uintptr_t DefaultWaterMovementMode         = 0x0385; // EMovementMode (Size: 0x0001)
        constexpr uintptr_t GroundMovementMode               = 0x0386; // EMovementMode (Size: 0x0001)
        constexpr uintptr_t bMaintainHorizontalGroundVelocity = 0x0387; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bMaintainHorizontalGroundVelocity_Bit = 0;
        constexpr uint8_t   bMaintainHorizontalGroundVelocity_Mask = 0x01;
        constexpr uintptr_t bImpartBaseVelocityX             = 0x0387; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bImpartBaseVelocityX_Bit         = 1;
        constexpr uint8_t   bImpartBaseVelocityX_Mask        = 0x02;
        constexpr uintptr_t bImpartBaseVelocityY             = 0x0387; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bImpartBaseVelocityY_Bit         = 2;
        constexpr uint8_t   bImpartBaseVelocityY_Mask        = 0x04;
        constexpr uintptr_t bImpartBaseVelocityZ             = 0x0387; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bImpartBaseVelocityZ_Bit         = 3;
        constexpr uint8_t   bImpartBaseVelocityZ_Mask        = 0x08;
        constexpr uintptr_t bImpartBaseAngularVelocity       = 0x0387; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bImpartBaseAngularVelocity_Bit   = 4;
        constexpr uint8_t   bImpartBaseAngularVelocity_Mask  = 0x10;
        constexpr uintptr_t bJustTeleported                  = 0x0387; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bJustTeleported_Bit              = 5;
        constexpr uint8_t   bJustTeleported_Mask             = 0x20;
        constexpr uintptr_t bNetworkUpdateReceived           = 0x0387; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bNetworkUpdateReceived_Bit       = 6;
        constexpr uint8_t   bNetworkUpdateReceived_Mask      = 0x40;
        constexpr uintptr_t bNetworkMovementModeChanged      = 0x0387; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bNetworkMovementModeChanged_Bit  = 7;
        constexpr uint8_t   bNetworkMovementModeChanged_Mask = 0x80;
        constexpr uintptr_t bIgnoreClientMovementErrorChecksAndCorrection = 0x0388; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bIgnoreClientMovementErrorChecksAndCorrection_Bit = 0;
        constexpr uint8_t   bIgnoreClientMovementErrorChecksAndCorrection_Mask = 0x01;
        constexpr uintptr_t bServerAcceptClientAuthoritativePosition = 0x0388; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bServerAcceptClientAuthoritativePosition_Bit = 1;
        constexpr uint8_t   bServerAcceptClientAuthoritativePosition_Mask = 0x02;
        constexpr uintptr_t bNotifyApex                      = 0x0388; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bNotifyApex_Bit                  = 2;
        constexpr uint8_t   bNotifyApex_Mask                 = 0x04;
        constexpr uintptr_t bCheatFlying                     = 0x0388; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bCheatFlying_Bit                 = 3;
        constexpr uint8_t   bCheatFlying_Mask                = 0x08;
        constexpr uintptr_t bWantsToCrouch                   = 0x0388; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bWantsToCrouch_Bit               = 4;
        constexpr uint8_t   bWantsToCrouch_Mask              = 0x10;
        constexpr uintptr_t bCrouchMaintainsBaseLocation     = 0x0388; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bCrouchMaintainsBaseLocation_Bit = 5;
        constexpr uint8_t   bCrouchMaintainsBaseLocation_Mask = 0x20;
        constexpr uintptr_t bIgnoreBaseRotation              = 0x0388; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bIgnoreBaseRotation_Bit          = 6;
        constexpr uint8_t   bIgnoreBaseRotation_Mask         = 0x40;
        constexpr uintptr_t bFastAttachedMove                = 0x0388; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bFastAttachedMove_Bit            = 7;
        constexpr uint8_t   bFastAttachedMove_Mask           = 0x80;
        constexpr uintptr_t bAlwaysCheckFloor                = 0x0389; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bAlwaysCheckFloor_Bit            = 0;
        constexpr uint8_t   bAlwaysCheckFloor_Mask           = 0x01;
        constexpr uintptr_t bUseFlatBaseForFloorChecks       = 0x0389; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bUseFlatBaseForFloorChecks_Bit   = 1;
        constexpr uint8_t   bUseFlatBaseForFloorChecks_Mask  = 0x02;
        constexpr uintptr_t bPerformingJumpOff               = 0x0389; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bPerformingJumpOff_Bit           = 2;
        constexpr uint8_t   bPerformingJumpOff_Mask          = 0x04;
        constexpr uintptr_t bWantsToLeaveNavWalking          = 0x0389; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bWantsToLeaveNavWalking_Bit      = 3;
        constexpr uint8_t   bWantsToLeaveNavWalking_Mask     = 0x08;
        constexpr uintptr_t bUseRVOAvoidance                 = 0x0389; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bUseRVOAvoidance_Bit             = 4;
        constexpr uint8_t   bUseRVOAvoidance_Mask            = 0x10;
        constexpr uintptr_t bRequestedMoveUseAcceleration    = 0x0389; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bRequestedMoveUseAcceleration_Bit = 5;
        constexpr uint8_t   bRequestedMoveUseAcceleration_Mask = 0x20;
        constexpr uintptr_t bWasSimulatingRootMotion         = 0x0389; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bWasSimulatingRootMotion_Bit     = 7;
        constexpr uint8_t   bWasSimulatingRootMotion_Mask    = 0x80;
        constexpr uintptr_t bAllowPhysicsRotationDuringAnimRootMotion = 0x038A; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bAllowPhysicsRotationDuringAnimRootMotion_Bit = 0;
        constexpr uint8_t   bAllowPhysicsRotationDuringAnimRootMotion_Mask = 0x01;
        constexpr uintptr_t bHasRequestedVelocity            = 0x038A; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bHasRequestedVelocity_Bit        = 1;
        constexpr uint8_t   bHasRequestedVelocity_Mask       = 0x02;
        constexpr uintptr_t bRequestedMoveWithMaxSpeed       = 0x038A; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bRequestedMoveWithMaxSpeed_Bit   = 2;
        constexpr uint8_t   bRequestedMoveWithMaxSpeed_Mask  = 0x04;
        constexpr uintptr_t bWasAvoidanceUpdated             = 0x038A; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bWasAvoidanceUpdated_Bit         = 3;
        constexpr uint8_t   bWasAvoidanceUpdated_Mask        = 0x08;
        constexpr uintptr_t bProjectNavMeshWalking           = 0x038A; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bProjectNavMeshWalking_Bit       = 6;
        constexpr uint8_t   bProjectNavMeshWalking_Mask      = 0x40;
        constexpr uintptr_t bProjectNavMeshOnBothWorldChannels = 0x038A; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bProjectNavMeshOnBothWorldChannels_Bit = 7;
        constexpr uint8_t   bProjectNavMeshOnBothWorldChannels_Mask = 0x80;
        constexpr uintptr_t AvoidanceConsiderationRadius     = 0x039C; // float (Size: 0x0004)
        constexpr uintptr_t RequestedVelocity                = 0x03A0; // struct FVector (Size: 0x000C)
        constexpr uintptr_t AvoidanceUID                     = 0x03AC; // int32 (Size: 0x0004)
        constexpr uintptr_t AvoidanceGroup                   = 0x03B0; // struct FNavAvoidanceMask (Size: 0x0004)
        constexpr uintptr_t GroupsToAvoid                    = 0x03B4; // struct FNavAvoidanceMask (Size: 0x0004)
        constexpr uintptr_t GroupsToIgnore                   = 0x03B8; // struct FNavAvoidanceMask (Size: 0x0004)
        constexpr uintptr_t AvoidanceWeight                  = 0x03BC; // float (Size: 0x0004)
        constexpr uintptr_t PendingLaunchVelocity            = 0x03C0; // struct FVector (Size: 0x000C)
        constexpr uintptr_t NavMeshProjectionInterval        = 0x0470; // float (Size: 0x0004)
        constexpr uintptr_t NavMeshProjectionTimer           = 0x0474; // float (Size: 0x0004)
        constexpr uintptr_t NavMeshProjectionInterpSpeed     = 0x0478; // float (Size: 0x0004)
        constexpr uintptr_t NavMeshProjectionHeightScaleUp   = 0x047C; // float (Size: 0x0004)
        constexpr uintptr_t NavMeshProjectionHeightScaleDown = 0x0480; // float (Size: 0x0004)
        constexpr uintptr_t NavWalkingFloorDistTolerance     = 0x0484; // float (Size: 0x0004)
        constexpr uintptr_t PostPhysicsTickFunction          = 0x0488; // struct FCharacterMovementComponentPostPhysicsTickFunction (Size: 0x0030)
        constexpr uintptr_t MinTimeBetweenTimeStampResets    = 0x04D0; // float (Size: 0x0004)
        constexpr uintptr_t CurrentRootMotion                = 0x0980; // struct FRootMotionSourceGroup (Size: 0x0038)
        constexpr uintptr_t ServerCorrectionRootMotion       = 0x09B8; // struct FRootMotionSourceGroup (Size: 0x0038)
        constexpr uintptr_t RootMotionParams                 = 0x0A80; // struct FRootMotionMovementParams (Size: 0x0040)
        constexpr uintptr_t AnimRootMotionVelocity           = 0x0AC0; // struct FVector (Size: 0x000C)
    }

    // -------------------------------------------------------------------------
    // Class: UClass
    // Package: CoreUObject | Size: 0x0230 | Super: UStruct (0x00B0)
    // -------------------------------------------------------------------------
    namespace UClass
    {
        constexpr uintptr_t CastFlags                        = 0x00D0; // enum class EClassCastFlags (Size: 0x0008)
        constexpr uintptr_t DefaultObject                    = 0x0118; // class UObject* (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Class: UEngine
    // Package: Engine | Size: 0x0D20 | Super: UObject (0x0028)
    // -------------------------------------------------------------------------
    namespace UEngine
    {
        constexpr uintptr_t TinyFont                         = 0x0030; // class UFont* (Size: 0x0008)
        constexpr uintptr_t TinyFontName                     = 0x0038; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t SmallFont                        = 0x0050; // class UFont* (Size: 0x0008)
        constexpr uintptr_t SmallFontName                    = 0x0058; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t MediumFont                       = 0x0070; // class UFont* (Size: 0x0008)
        constexpr uintptr_t MediumFontName                   = 0x0078; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t LargeFont                        = 0x0090; // class UFont* (Size: 0x0008)
        constexpr uintptr_t LargeFontName                    = 0x0098; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t SubtitleFont                     = 0x00B0; // class UFont* (Size: 0x0008)
        constexpr uintptr_t SubtitleFontName                 = 0x00B8; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t AdditionalFonts                  = 0x00D0; // TArray<class UFont*> (Size: 0x0010)
        constexpr uintptr_t AdditionalFontNames              = 0x00E0; // TArray<class FString> (Size: 0x0010)
        constexpr uintptr_t ConsoleClass                     = 0x00F0; // TSubclassOf<class UConsole> (Size: 0x0008)
        constexpr uintptr_t ConsoleClassName                 = 0x00F8; // struct FSoftClassPath (Size: 0x0018)
        constexpr uintptr_t GameViewportClientClass          = 0x0110; // TSubclassOf<class UGameViewportClient> (Size: 0x0008)
        constexpr uintptr_t GameViewportClientClassName      = 0x0118; // struct FSoftClassPath (Size: 0x0018)
        constexpr uintptr_t LocalPlayerClass                 = 0x0130; // TSubclassOf<class ULocalPlayer> (Size: 0x0008)
        constexpr uintptr_t LocalPlayerClassName             = 0x0138; // struct FSoftClassPath (Size: 0x0018)
        constexpr uintptr_t WorldSettingsClass               = 0x0150; // TSubclassOf<class AWorldSettings> (Size: 0x0008)
        constexpr uintptr_t WorldSettingsClassName           = 0x0158; // struct FSoftClassPath (Size: 0x0018)
        constexpr uintptr_t NavigationSystemClassName        = 0x0170; // struct FSoftClassPath (Size: 0x0018)
        constexpr uintptr_t NavigationSystemClass            = 0x0188; // TSubclassOf<class UNavigationSystemBase> (Size: 0x0008)
        constexpr uintptr_t NavigationSystemConfigClassName  = 0x0190; // struct FSoftClassPath (Size: 0x0018)
        constexpr uintptr_t NavigationSystemConfigClass      = 0x01A8; // TSubclassOf<class UNavigationSystemConfig> (Size: 0x0008)
        constexpr uintptr_t AvoidanceManagerClassName        = 0x01B0; // struct FSoftClassPath (Size: 0x0018)
        constexpr uintptr_t AvoidanceManagerClass            = 0x01C8; // TSubclassOf<class UAvoidanceManager> (Size: 0x0008)
        constexpr uintptr_t AIControllerClassName            = 0x01D0; // struct FSoftClassPath (Size: 0x0018)
        constexpr uintptr_t PhysicsCollisionHandlerClass     = 0x01E8; // TSubclassOf<class UPhysicsCollisionHandler> (Size: 0x0008)
        constexpr uintptr_t PhysicsCollisionHandlerClassName = 0x01F0; // struct FSoftClassPath (Size: 0x0018)
        constexpr uintptr_t GameUserSettingsClassName        = 0x0208; // struct FSoftClassPath (Size: 0x0018)
        constexpr uintptr_t GameUserSettingsClass            = 0x0220; // TSubclassOf<class UGameUserSettings> (Size: 0x0008)
        constexpr uintptr_t GameUserSettings                 = 0x0228; // class UGameUserSettings* (Size: 0x0008)
        constexpr uintptr_t LevelScriptActorClass            = 0x0230; // TSubclassOf<class ALevelScriptActor> (Size: 0x0008)
        constexpr uintptr_t LevelScriptActorClassName        = 0x0238; // struct FSoftClassPath (Size: 0x0018)
        constexpr uintptr_t DefaultBlueprintBaseClassName    = 0x0250; // struct FSoftClassPath (Size: 0x0018)
        constexpr uintptr_t GameSingletonClassName           = 0x0268; // struct FSoftClassPath (Size: 0x0018)
        constexpr uintptr_t GameSingleton                    = 0x0280; // class UObject* (Size: 0x0008)
        constexpr uintptr_t AssetManagerClassName            = 0x0288; // struct FSoftClassPath (Size: 0x0018)
        constexpr uintptr_t AssetManager                     = 0x02A0; // class UAssetManager* (Size: 0x0008)
        constexpr uintptr_t DefaultTexture                   = 0x02A8; // class UTexture2D* (Size: 0x0008)
        constexpr uintptr_t DefaultTextureName               = 0x02B0; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t DefaultDiffuseTexture            = 0x02C8; // class UTexture* (Size: 0x0008)
        constexpr uintptr_t DefaultDiffuseTextureName        = 0x02D0; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t DefaultBSPVertexTexture          = 0x02E8; // class UTexture2D* (Size: 0x0008)
        constexpr uintptr_t DefaultBSPVertexTextureName      = 0x02F0; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t HighFrequencyNoiseTexture        = 0x0308; // class UTexture2D* (Size: 0x0008)
        constexpr uintptr_t HighFrequencyNoiseTextureName    = 0x0310; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t DefaultBokehTexture              = 0x0328; // class UTexture2D* (Size: 0x0008)
        constexpr uintptr_t DefaultBokehTextureName          = 0x0330; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t DefaultBloomKernelTexture        = 0x0348; // class UTexture2D* (Size: 0x0008)
        constexpr uintptr_t DefaultBloomKernelTextureName    = 0x0350; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t WireframeMaterial                = 0x0368; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t WireframeMaterialName            = 0x0370; // class FString (Size: 0x0010)
        constexpr uintptr_t DebugMeshMaterial                = 0x0380; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t DebugMeshMaterialName            = 0x0388; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t EmissiveMeshMaterial             = 0x03A0; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t EmissiveMeshMaterialName         = 0x03A8; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t LevelColorationLitMaterial       = 0x03C0; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t LevelColorationLitMaterialName   = 0x03C8; // class FString (Size: 0x0010)
        constexpr uintptr_t LevelColorationUnlitMaterial     = 0x03D8; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t LevelColorationUnlitMaterialName = 0x03E0; // class FString (Size: 0x0010)
        constexpr uintptr_t LightingTexelDensityMaterial     = 0x03F0; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t LightingTexelDensityName         = 0x03F8; // class FString (Size: 0x0010)
        constexpr uintptr_t ShadedLevelColorationLitMaterial = 0x0408; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t ShadedLevelColorationLitMaterialName = 0x0410; // class FString (Size: 0x0010)
        constexpr uintptr_t ShadedLevelColorationUnlitMaterial = 0x0420; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t ShadedLevelColorationUnlitMaterialName = 0x0428; // class FString (Size: 0x0010)
        constexpr uintptr_t RemoveSurfaceMaterial            = 0x0438; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t RemoveSurfaceMaterialName        = 0x0440; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t VertexColorMaterial              = 0x0458; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t VertexColorMaterialName          = 0x0460; // class FString (Size: 0x0010)
        constexpr uintptr_t VertexColorViewModeMaterial_ColorOnly = 0x0470; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t VertexColorViewModeMaterialName_ColorOnly = 0x0478; // class FString (Size: 0x0010)
        constexpr uintptr_t VertexColorViewModeMaterial_AlphaAsColor = 0x0488; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t VertexColorViewModeMaterialName_AlphaAsColor = 0x0490; // class FString (Size: 0x0010)
        constexpr uintptr_t VertexColorViewModeMaterial_RedOnly = 0x04A0; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t VertexColorViewModeMaterialName_RedOnly = 0x04A8; // class FString (Size: 0x0010)
        constexpr uintptr_t VertexColorViewModeMaterial_GreenOnly = 0x04B8; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t VertexColorViewModeMaterialName_GreenOnly = 0x04C0; // class FString (Size: 0x0010)
        constexpr uintptr_t VertexColorViewModeMaterial_BlueOnly = 0x04D0; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t VertexColorViewModeMaterialName_BlueOnly = 0x04D8; // class FString (Size: 0x0010)
        constexpr uintptr_t DebugEditorMaterialName          = 0x04E8; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t ConstraintLimitMaterial          = 0x0500; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t ConstraintLimitMaterialX         = 0x0508; // class UMaterialInstanceDynamic* (Size: 0x0008)
        constexpr uintptr_t ConstraintLimitMaterialXAxis     = 0x0510; // class UMaterialInstanceDynamic* (Size: 0x0008)
        constexpr uintptr_t ConstraintLimitMaterialY         = 0x0518; // class UMaterialInstanceDynamic* (Size: 0x0008)
        constexpr uintptr_t ConstraintLimitMaterialYAxis     = 0x0520; // class UMaterialInstanceDynamic* (Size: 0x0008)
        constexpr uintptr_t ConstraintLimitMaterialZ         = 0x0528; // class UMaterialInstanceDynamic* (Size: 0x0008)
        constexpr uintptr_t ConstraintLimitMaterialZAxis     = 0x0530; // class UMaterialInstanceDynamic* (Size: 0x0008)
        constexpr uintptr_t ConstraintLimitMaterialPrismatic = 0x0538; // class UMaterialInstanceDynamic* (Size: 0x0008)
        constexpr uintptr_t InvalidLightmapSettingsMaterial  = 0x0540; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t InvalidLightmapSettingsMaterialName = 0x0548; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t PreviewShadowsIndicatorMaterial  = 0x0560; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t PreviewShadowsIndicatorMaterialName = 0x0568; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t ArrowMaterial                    = 0x0580; // class UMaterial* (Size: 0x0008)
        constexpr uintptr_t ArrowMaterialYellow              = 0x0588; // class UMaterialInstanceDynamic* (Size: 0x0008)
        constexpr uintptr_t ArrowMaterialName                = 0x0590; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t LightingOnlyBrightness           = 0x05A8; // struct FLinearColor (Size: 0x0010)
        constexpr uintptr_t ShaderComplexityColors           = 0x05B8; // TArray<struct FLinearColor> (Size: 0x0010)
        constexpr uintptr_t QuadComplexityColors             = 0x05C8; // TArray<struct FLinearColor> (Size: 0x0010)
        constexpr uintptr_t LightComplexityColors            = 0x05D8; // TArray<struct FLinearColor> (Size: 0x0010)
        constexpr uintptr_t StationaryLightOverlapColors     = 0x05E8; // TArray<struct FLinearColor> (Size: 0x0010)
        constexpr uintptr_t LODColorationColors              = 0x05F8; // TArray<struct FLinearColor> (Size: 0x0010)
        constexpr uintptr_t HLODColorationColors             = 0x0608; // TArray<struct FLinearColor> (Size: 0x0010)
        constexpr uintptr_t StreamingAccuracyColors          = 0x0618; // TArray<struct FLinearColor> (Size: 0x0010)
        constexpr uintptr_t MaxPixelShaderAdditiveComplexityCount = 0x0628; // float (Size: 0x0004)
        constexpr uintptr_t MaxES3PixelShaderAdditiveComplexityCount = 0x062C; // float (Size: 0x0004)
        constexpr uintptr_t MinLightMapDensity               = 0x0630; // float (Size: 0x0004)
        constexpr uintptr_t IdealLightMapDensity             = 0x0634; // float (Size: 0x0004)
        constexpr uintptr_t MaxLightMapDensity               = 0x0638; // float (Size: 0x0004)
        constexpr uintptr_t bRenderLightMapDensityGrayscale  = 0x063C; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bRenderLightMapDensityGrayscale_Bit = 0;
        constexpr uint8_t   bRenderLightMapDensityGrayscale_Mask = 0x01;
        constexpr uintptr_t RenderLightMapDensityGrayscaleScale = 0x0640; // float (Size: 0x0004)
        constexpr uintptr_t RenderLightMapDensityColorScale  = 0x0644; // float (Size: 0x0004)
        constexpr uintptr_t LightMapDensityVertexMappedColor = 0x0648; // struct FLinearColor (Size: 0x0010)
        constexpr uintptr_t LightMapDensitySelectedColor     = 0x0658; // struct FLinearColor (Size: 0x0010)
        constexpr uintptr_t StatColorMappings                = 0x0668; // TArray<struct FStatColorMapping> (Size: 0x0010)
        constexpr uintptr_t DefaultPhysMaterial              = 0x0678; // class UPhysicalMaterial* (Size: 0x0008)
        constexpr uintptr_t DefaultPhysMaterialName          = 0x0680; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t ActiveGameNameRedirects          = 0x0698; // TArray<struct FGameNameRedirect> (Size: 0x0010)
        constexpr uintptr_t ActiveClassRedirects             = 0x06A8; // TArray<struct FClassRedirect> (Size: 0x0010)
        constexpr uintptr_t ActivePluginRedirects            = 0x06B8; // TArray<struct FPluginRedirect> (Size: 0x0010)
        constexpr uintptr_t ActiveStructRedirects            = 0x06C8; // TArray<struct FStructRedirect> (Size: 0x0010)
        constexpr uintptr_t PreIntegratedSkinBRDFTexture     = 0x06D8; // class UTexture2D* (Size: 0x0008)
        constexpr uintptr_t PreIntegratedSkinBRDFTextureName = 0x06E0; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t BlueNoiseTexture                 = 0x06F8; // class UTexture2D* (Size: 0x0008)
        constexpr uintptr_t BlueNoiseTextureName             = 0x0700; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t MiniFontTexture                  = 0x0718; // class UTexture2D* (Size: 0x0008)
        constexpr uintptr_t MiniFontTextureName              = 0x0720; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t WeightMapPlaceholderTexture      = 0x0738; // class UTexture* (Size: 0x0008)
        constexpr uintptr_t WeightMapPlaceholderTextureName  = 0x0740; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t LightMapDensityTexture           = 0x0758; // class UTexture2D* (Size: 0x0008)
        constexpr uintptr_t LightMapDensityTextureName       = 0x0760; // struct FSoftObjectPath (Size: 0x0018)
        constexpr uintptr_t GameViewport                     = 0x0780; // class UGameViewportClient* (Size: 0x0008)
        constexpr uintptr_t DeferredCommands                 = 0x0788; // TArray<class FString> (Size: 0x0010)
        constexpr uintptr_t NearClipPlane                    = 0x0798; // float (Size: 0x0004)
        constexpr uintptr_t bSubtitlesEnabled                = 0x079C; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bSubtitlesEnabled_Bit            = 0;
        constexpr uint8_t   bSubtitlesEnabled_Mask           = 0x01;
        constexpr uintptr_t bSubtitlesForcedOff              = 0x079C; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bSubtitlesForcedOff_Bit          = 1;
        constexpr uint8_t   bSubtitlesForcedOff_Mask         = 0x02;
        constexpr uintptr_t MaximumLoopIterationCount        = 0x07A0; // int32 (Size: 0x0004)
        constexpr uintptr_t bCanBlueprintsTickByDefault      = 0x07A4; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bCanBlueprintsTickByDefault_Bit  = 0;
        constexpr uint8_t   bCanBlueprintsTickByDefault_Mask = 0x01;
        constexpr uintptr_t bOptimizeAnimBlueprintMemberVariableAccess = 0x07A4; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bOptimizeAnimBlueprintMemberVariableAccess_Bit = 1;
        constexpr uint8_t   bOptimizeAnimBlueprintMemberVariableAccess_Mask = 0x02;
        constexpr uintptr_t bAllowMultiThreadedAnimationUpdate = 0x07A4; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bAllowMultiThreadedAnimationUpdate_Bit = 2;
        constexpr uint8_t   bAllowMultiThreadedAnimationUpdate_Mask = 0x04;
        constexpr uintptr_t bEnableEditorPSysRealtimeLOD     = 0x07A4; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bEnableEditorPSysRealtimeLOD_Bit = 3;
        constexpr uint8_t   bEnableEditorPSysRealtimeLOD_Mask = 0x08;
        constexpr uintptr_t bSmoothFrameRate                 = 0x07A4; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bSmoothFrameRate_Bit             = 5;
        constexpr uint8_t   bSmoothFrameRate_Mask            = 0x20;
        constexpr uintptr_t bUseFixedFrameRate               = 0x07A4; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bUseFixedFrameRate_Bit           = 6;
        constexpr uint8_t   bUseFixedFrameRate_Mask          = 0x40;
        constexpr uintptr_t FixedFrameRate                   = 0x07A8; // float (Size: 0x0004)
        constexpr uintptr_t SmoothedFrameRateRange           = 0x07AC; // struct FFloatRange (Size: 0x0010)
        constexpr uintptr_t CustomTimeStep                   = 0x07C0; // class UEngineCustomTimeStep* (Size: 0x0008)
        constexpr uintptr_t CustomTimeStepClassName          = 0x07E8; // struct FSoftClassPath (Size: 0x0018)
        constexpr uintptr_t TimecodeProvider                 = 0x0800; // class UTimecodeProvider* (Size: 0x0008)
        constexpr uintptr_t TimecodeProviderClassName        = 0x0828; // struct FSoftClassPath (Size: 0x0018)
        constexpr uintptr_t bGenerateDefaultTimecode         = 0x0840; // bool (Size: 0x0001)
        constexpr uintptr_t GenerateDefaultTimecodeFrameRate = 0x0844; // struct FFrameRate (Size: 0x0008)
        constexpr uintptr_t GenerateDefaultTimecodeFrameDelay = 0x084C; // float (Size: 0x0004)
        constexpr uintptr_t bCheckForMultiplePawnsSpawnedInAFrame = 0x0850; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bCheckForMultiplePawnsSpawnedInAFrame_Bit = 0;
        constexpr uint8_t   bCheckForMultiplePawnsSpawnedInAFrame_Mask = 0x01;
        constexpr uintptr_t NumPawnsAllowedToBeSpawnedInAFrame = 0x0854; // int32 (Size: 0x0004)
        constexpr uintptr_t bShouldGenerateLowQualityLightmaps = 0x0858; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bShouldGenerateLowQualityLightmaps_Bit = 0;
        constexpr uint8_t   bShouldGenerateLowQualityLightmaps_Mask = 0x01;
        constexpr uintptr_t C_WorldBox                       = 0x085C; // struct FColor (Size: 0x0004)
        constexpr uintptr_t C_BrushWire                      = 0x0860; // struct FColor (Size: 0x0004)
        constexpr uintptr_t C_AddWire                        = 0x0864; // struct FColor (Size: 0x0004)
        constexpr uintptr_t C_SubtractWire                   = 0x0868; // struct FColor (Size: 0x0004)
        constexpr uintptr_t C_SemiSolidWire                  = 0x086C; // struct FColor (Size: 0x0004)
        constexpr uintptr_t C_NonSolidWire                   = 0x0870; // struct FColor (Size: 0x0004)
        constexpr uintptr_t C_WireBackground                 = 0x0874; // struct FColor (Size: 0x0004)
        constexpr uintptr_t C_ScaleBoxHi                     = 0x0878; // struct FColor (Size: 0x0004)
        constexpr uintptr_t C_VolumeCollision                = 0x087C; // struct FColor (Size: 0x0004)
        constexpr uintptr_t C_BSPCollision                   = 0x0880; // struct FColor (Size: 0x0004)
        constexpr uintptr_t C_OrthoBackground                = 0x0884; // struct FColor (Size: 0x0004)
        constexpr uintptr_t C_Volume                         = 0x0888; // struct FColor (Size: 0x0004)
        constexpr uintptr_t C_BrushShape                     = 0x088C; // struct FColor (Size: 0x0004)
        constexpr uintptr_t StreamingDistanceFactor          = 0x0890; // float (Size: 0x0004)
        constexpr uintptr_t GameScreenshotSaveDirectory      = 0x0898; // struct FDirectoryPath (Size: 0x0010)
        constexpr uintptr_t TransitionType                   = 0x08A8; // ETransitionType (Size: 0x0001)
        constexpr uintptr_t TransitionDescription            = 0x08B0; // class FString (Size: 0x0010)
        constexpr uintptr_t TransitionGameMode               = 0x08C0; // class FString (Size: 0x0010)
        constexpr uintptr_t bAllowMatureLanguage             = 0x08D0; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bAllowMatureLanguage_Bit         = 0;
        constexpr uint8_t   bAllowMatureLanguage_Mask        = 0x01;
        constexpr uintptr_t CameraRotationThreshold          = 0x08D4; // float (Size: 0x0004)
        constexpr uintptr_t CameraTranslationThreshold       = 0x08D8; // float (Size: 0x0004)
        constexpr uintptr_t PrimitiveProbablyVisibleTime     = 0x08DC; // float (Size: 0x0004)
        constexpr uintptr_t MaxOcclusionPixelsFraction       = 0x08E0; // float (Size: 0x0004)
        constexpr uintptr_t bPauseOnLossOfFocus              = 0x08E4; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bPauseOnLossOfFocus_Bit          = 0;
        constexpr uint8_t   bPauseOnLossOfFocus_Mask         = 0x01;
        constexpr uintptr_t MaxParticleResize                = 0x08E8; // int32 (Size: 0x0004)
        constexpr uintptr_t MaxParticleResizeWarn            = 0x08EC; // int32 (Size: 0x0004)
        constexpr uintptr_t PendingDroppedNotes              = 0x08F0; // TArray<struct FDropNoteInfo> (Size: 0x0010)
        constexpr uintptr_t NetClientTicksPerSecond          = 0x0900; // float (Size: 0x0004)
        constexpr uintptr_t DisplayGamma                     = 0x0904; // float (Size: 0x0004)
        constexpr uintptr_t MinDesiredFrameRate              = 0x0908; // float (Size: 0x0004)
        constexpr uintptr_t DefaultSelectedMaterialColor     = 0x090C; // struct FLinearColor (Size: 0x0010)
        constexpr uintptr_t SelectedMaterialColor            = 0x091C; // struct FLinearColor (Size: 0x0010)
        constexpr uintptr_t SelectionOutlineColor            = 0x092C; // struct FLinearColor (Size: 0x0010)
        constexpr uintptr_t SubduedSelectionOutlineColor     = 0x093C; // struct FLinearColor (Size: 0x0010)
        constexpr uintptr_t SelectedMaterialColorOverride    = 0x094C; // struct FLinearColor (Size: 0x0010)
        constexpr uintptr_t bIsOverridingSelectedColor       = 0x095C; // bool (Size: 0x0001)
        constexpr uintptr_t bEnableOnScreenDebugMessages     = 0x0960; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bEnableOnScreenDebugMessages_Bit = 0;
        constexpr uint8_t   bEnableOnScreenDebugMessages_Mask = 0x01;
        constexpr uintptr_t bEnableOnScreenDebugMessagesDisplay = 0x0960; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bEnableOnScreenDebugMessagesDisplay_Bit = 1;
        constexpr uint8_t   bEnableOnScreenDebugMessagesDisplay_Mask = 0x02;
        constexpr uintptr_t bSuppressMapWarnings             = 0x0960; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bSuppressMapWarnings_Bit         = 2;
        constexpr uint8_t   bSuppressMapWarnings_Mask        = 0x04;
        constexpr uintptr_t bDisableAILogging                = 0x0960; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bDisableAILogging_Bit            = 3;
        constexpr uint8_t   bDisableAILogging_Mask           = 0x08;
        constexpr uintptr_t bEnableVisualLogRecordingOnStart = 0x0964; // uint32 (Size: 0x0004)
        constexpr uintptr_t ScreenSaverInhibitorSemaphore    = 0x0968; // int32 (Size: 0x0004)
        constexpr uintptr_t bLockReadOnlyLevels              = 0x096C; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bLockReadOnlyLevels_Bit          = 0;
        constexpr uint8_t   bLockReadOnlyLevels_Mask         = 0x01;
        constexpr uintptr_t ParticleEventManagerClassPath    = 0x0970; // class FString (Size: 0x0010)
        constexpr uintptr_t SelectionHighlightIntensity      = 0x0980; // float (Size: 0x0004)
        constexpr uintptr_t BSPSelectionHighlightIntensity   = 0x0984; // float (Size: 0x0004)
        constexpr uintptr_t SelectionHighlightIntensityBillboards = 0x0988; // float (Size: 0x0004)
        constexpr uintptr_t NetDriverDefinitions             = 0x0BF8; // TArray<struct FNetDriverDefinition> (Size: 0x0010)
        constexpr uintptr_t ServerActors                     = 0x0C08; // TArray<class FString> (Size: 0x0010)
        constexpr uintptr_t RuntimeServerActors              = 0x0C18; // TArray<class FString> (Size: 0x0010)
        constexpr uintptr_t NetErrorLogInterval              = 0x0C28; // float (Size: 0x0004)
        constexpr uintptr_t bStartedLoadMapMovie             = 0x0C2C; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bStartedLoadMapMovie_Bit         = 0;
        constexpr uint8_t   bStartedLoadMapMovie_Mask        = 0x01;
        constexpr uintptr_t NextWorldContextHandle           = 0x0C48; // int32 (Size: 0x0004)
    }

    // -------------------------------------------------------------------------
    // Class: UField
    // Package: CoreUObject | Size: 0x0030 | Super: UObject (0x0028)
    // -------------------------------------------------------------------------
    namespace UField
    {
        constexpr uintptr_t Next                             = 0x0028; // class UField* (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Class: UGameInstance
    // Package: Engine | Size: 0x01A8 | Super: UObject (0x0028)
    // -------------------------------------------------------------------------
    namespace UGameInstance
    {
        constexpr uintptr_t LocalPlayers                     = 0x0038; // TArray<class ULocalPlayer*> (Size: 0x0010)
        constexpr uintptr_t OnlineSession                    = 0x0048; // class UOnlineSession* (Size: 0x0008)
        constexpr uintptr_t ReferencedObjects                = 0x0050; // TArray<class UObject*> (Size: 0x0010)
        constexpr uintptr_t OnPawnControllerChangedDelegates = 0x0078; // TMulticastInlineDelegate<void(class APawn* Pawn, class AController* Controller)> (Size: 0x0010)
    }

    // -------------------------------------------------------------------------
    // Class: ULevel
    // Package: Engine | Size: 0x0298 | Super: UObject (0x0028)
    // -------------------------------------------------------------------------
    namespace ULevel
    {
        constexpr uintptr_t Actors                           = 0x0098; // class TArray<class AActor*> (Size: 0x0010)
        constexpr uintptr_t OwningWorld                      = 0x00B8; // class UWorld* (Size: 0x0008)
        constexpr uintptr_t Model                            = 0x00C0; // class UModel* (Size: 0x0008)
        constexpr uintptr_t ModelComponents                  = 0x00C8; // TArray<class UModelComponent*> (Size: 0x0010)
        constexpr uintptr_t ActorCluster                     = 0x00D8; // class ULevelActorContainer* (Size: 0x0008)
        constexpr uintptr_t NumTextureStreamingUnbuiltComponents = 0x00E0; // int32 (Size: 0x0004)
        constexpr uintptr_t NumTextureStreamingDirtyResources = 0x00E4; // int32 (Size: 0x0004)
        constexpr uintptr_t LevelScriptActor                 = 0x00E8; // class ALevelScriptActor* (Size: 0x0008)
        constexpr uintptr_t NavListStart                     = 0x00F0; // class ANavigationObjectBase* (Size: 0x0008)
        constexpr uintptr_t NavListEnd                       = 0x00F8; // class ANavigationObjectBase* (Size: 0x0008)
        constexpr uintptr_t NavDataChunks                    = 0x0100; // TArray<class UNavigationDataChunk*> (Size: 0x0010)
        constexpr uintptr_t LightmapTotalSize                = 0x0110; // float (Size: 0x0004)
        constexpr uintptr_t ShadowmapTotalSize               = 0x0114; // float (Size: 0x0004)
        constexpr uintptr_t StaticNavigableGeometry          = 0x0118; // TArray<struct FVector> (Size: 0x0010)
        constexpr uintptr_t StreamingTextureGuids            = 0x0128; // TArray<struct FGuid> (Size: 0x0010)
        constexpr uintptr_t LevelBuildDataId                 = 0x01D0; // struct FGuid (Size: 0x0010)
        constexpr uintptr_t MapBuildData                     = 0x01E0; // class UMapBuildDataRegistry* (Size: 0x0008)
        constexpr uintptr_t LightBuildLevelOffset            = 0x01E8; // struct FIntVector (Size: 0x000C)
        constexpr uintptr_t bIsLightingScenario              = 0x01F4; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bIsLightingScenario_Bit          = 0;
        constexpr uint8_t   bIsLightingScenario_Mask         = 0x01;
        constexpr uintptr_t bTextureStreamingRotationChanged = 0x01F4; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bTextureStreamingRotationChanged_Bit = 3;
        constexpr uint8_t   bTextureStreamingRotationChanged_Mask = 0x08;
        constexpr uintptr_t bStaticComponentsRegisteredInStreamingManager = 0x01F4; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bStaticComponentsRegisteredInStreamingManager_Bit = 4;
        constexpr uint8_t   bStaticComponentsRegisteredInStreamingManager_Mask = 0x10;
        constexpr uintptr_t bIsVisible                       = 0x01F4; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bIsVisible_Bit                   = 5;
        constexpr uint8_t   bIsVisible_Mask                  = 0x20;
        constexpr uintptr_t WorldSettings                    = 0x0258; // class AWorldSettings* (Size: 0x0008)
        constexpr uintptr_t AssetUserData                    = 0x0268; // TArray<class UAssetUserData*> (Size: 0x0010)
        constexpr uintptr_t DestroyedReplicatedStaticActors  = 0x0288; // TArray<struct FReplicatedStaticActorDestructionInfo> (Size: 0x0010)
    }

    // -------------------------------------------------------------------------
    // Class: ULocalPlayer
    // Package: Engine | Size: 0x0258 | Super: UPlayer (0x0048)
    // -------------------------------------------------------------------------
    namespace ULocalPlayer
    {
        constexpr uintptr_t ViewportClient                   = 0x0070; // class UGameViewportClient* (Size: 0x0008)
        constexpr uintptr_t AspectRatioAxisConstraint        = 0x0094; // EAspectRatioAxisConstraint (Size: 0x0001)
        constexpr uintptr_t PendingLevelPlayerControllerClass = 0x0098; // TSubclassOf<class APlayerController> (Size: 0x0008)
        constexpr uintptr_t bSentSplitJoin                   = 0x00A0; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bSentSplitJoin_Bit               = 0;
        constexpr uint8_t   bSentSplitJoin_Mask              = 0x01;
        constexpr uintptr_t ControllerId                     = 0x00B8; // int32 (Size: 0x0004)
    }

    // -------------------------------------------------------------------------
    // Class: UMovementComponent
    // Package: Engine | Size: 0x00F0 | Super: UActorComponent (0x00B0)
    // -------------------------------------------------------------------------
    namespace UMovementComponent
    {
        constexpr uintptr_t UpdatedComponent                 = 0x00B0; // class USceneComponent* (Size: 0x0008)
        constexpr uintptr_t UpdatedPrimitive                 = 0x00B8; // class UPrimitiveComponent* (Size: 0x0008)
        constexpr uintptr_t Velocity                         = 0x00C4; // struct FVector (Size: 0x000C)
        constexpr uintptr_t PlaneConstraintNormal            = 0x00D0; // struct FVector (Size: 0x000C)
        constexpr uintptr_t PlaneConstraintOrigin            = 0x00DC; // struct FVector (Size: 0x000C)
        constexpr uintptr_t bUpdateOnlyIfRendered            = 0x00E8; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bUpdateOnlyIfRendered_Bit        = 0;
        constexpr uint8_t   bUpdateOnlyIfRendered_Mask       = 0x01;
        constexpr uintptr_t bAutoUpdateTickRegistration      = 0x00E8; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bAutoUpdateTickRegistration_Bit  = 1;
        constexpr uint8_t   bAutoUpdateTickRegistration_Mask = 0x02;
        constexpr uintptr_t bTickBeforeOwner                 = 0x00E8; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bTickBeforeOwner_Bit             = 2;
        constexpr uint8_t   bTickBeforeOwner_Mask            = 0x04;
        constexpr uintptr_t bAutoRegisterUpdatedComponent    = 0x00E8; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bAutoRegisterUpdatedComponent_Bit = 3;
        constexpr uint8_t   bAutoRegisterUpdatedComponent_Mask = 0x08;
        constexpr uintptr_t bConstrainToPlane                = 0x00E8; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bConstrainToPlane_Bit            = 4;
        constexpr uint8_t   bConstrainToPlane_Mask           = 0x10;
        constexpr uintptr_t bSnapToPlaneAtStart              = 0x00E8; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bSnapToPlaneAtStart_Bit          = 5;
        constexpr uint8_t   bSnapToPlaneAtStart_Mask         = 0x20;
        constexpr uintptr_t bAutoRegisterPhysicsVolumeUpdates = 0x00E8; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bAutoRegisterPhysicsVolumeUpdates_Bit = 6;
        constexpr uint8_t   bAutoRegisterPhysicsVolumeUpdates_Mask = 0x40;
        constexpr uintptr_t bComponentShouldUpdatePhysicsVolume = 0x00E8; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bComponentShouldUpdatePhysicsVolume_Bit = 7;
        constexpr uint8_t   bComponentShouldUpdatePhysicsVolume_Mask = 0x80;
        constexpr uintptr_t PlaneConstraintAxisSetting       = 0x00EB; // EPlaneConstraintAxisSetting (Size: 0x0001)
    }

    // -------------------------------------------------------------------------
    // Class: UObject
    // Package: CoreUObject | Size: 0x0028
    // -------------------------------------------------------------------------
    namespace UObject
    {
        constexpr uintptr_t GObjects                         = 0x0000; // static inline class TUObjectArrayWrapper (Size: 0x0008)
        constexpr uintptr_t VTable                           = 0x0000; // void* (Size: 0x0008)
        constexpr uintptr_t Flags                            = 0x0008; // EObjectFlags (Size: 0x0004)
        constexpr uintptr_t Index                            = 0x000C; // int32 (Size: 0x0004)
        constexpr uintptr_t Class                            = 0x0010; // class UClass* (Size: 0x0008)
        constexpr uintptr_t Name                             = 0x0018; // class FName (Size: 0x0008)
        constexpr uintptr_t Outer                            = 0x0020; // class UObject* (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Class: UPlayer
    // Package: Engine | Size: 0x0048 | Super: UObject (0x0028)
    // -------------------------------------------------------------------------
    namespace UPlayer
    {
        constexpr uintptr_t PlayerController                 = 0x0030; // class APlayerController* (Size: 0x0008)
        constexpr uintptr_t CurrentNetSpeed                  = 0x0038; // int32 (Size: 0x0004)
        constexpr uintptr_t ConfiguredInternetSpeed          = 0x003C; // int32 (Size: 0x0004)
        constexpr uintptr_t ConfiguredLanSpeed               = 0x0040; // int32 (Size: 0x0004)
    }

    // -------------------------------------------------------------------------
    // Class: UPrimitiveComponent
    // Package: Engine | Size: 0x0450 | Super: USceneComponent (0x0200)
    // -------------------------------------------------------------------------
    namespace UPrimitiveComponent
    {
        constexpr uintptr_t MinDrawDistance                  = 0x0200; // float (Size: 0x0004)
        constexpr uintptr_t LDMaxDrawDistance                = 0x0204; // float (Size: 0x0004)
        constexpr uintptr_t CachedMaxDrawDistance            = 0x0208; // float (Size: 0x0004)
        constexpr uintptr_t DepthPriorityGroup               = 0x020C; // ESceneDepthPriorityGroup (Size: 0x0001)
        constexpr uintptr_t ViewOwnerDepthPriorityGroup      = 0x020D; // ESceneDepthPriorityGroup (Size: 0x0001)
        constexpr uintptr_t IndirectLightingCacheQuality     = 0x020E; // EIndirectLightingCacheQuality (Size: 0x0001)
        constexpr uintptr_t LightmapType                     = 0x020F; // ELightmapType (Size: 0x0001)
        constexpr uintptr_t bUseMaxLODAsImposter             = 0x0210; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bUseMaxLODAsImposter_Bit         = 0;
        constexpr uint8_t   bUseMaxLODAsImposter_Mask        = 0x01;
        constexpr uintptr_t bBatchImpostersAsInstances       = 0x0210; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bBatchImpostersAsInstances_Bit   = 1;
        constexpr uint8_t   bBatchImpostersAsInstances_Mask  = 0x02;
        constexpr uintptr_t bNeverDistanceCull               = 0x0210; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bNeverDistanceCull_Bit           = 2;
        constexpr uint8_t   bNeverDistanceCull_Mask          = 0x04;
        constexpr uintptr_t bAlwaysCreatePhysicsState        = 0x0210; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bAlwaysCreatePhysicsState_Bit    = 7;
        constexpr uint8_t   bAlwaysCreatePhysicsState_Mask   = 0x80;
        constexpr uintptr_t bGenerateOverlapEvents           = 0x0211; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bGenerateOverlapEvents_Bit       = 0;
        constexpr uint8_t   bGenerateOverlapEvents_Mask      = 0x01;
        constexpr uintptr_t bMultiBodyOverlap                = 0x0211; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bMultiBodyOverlap_Bit            = 1;
        constexpr uint8_t   bMultiBodyOverlap_Mask           = 0x02;
        constexpr uintptr_t bTraceComplexOnMove              = 0x0211; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bTraceComplexOnMove_Bit          = 2;
        constexpr uint8_t   bTraceComplexOnMove_Mask         = 0x04;
        constexpr uintptr_t bReturnMaterialOnMove            = 0x0211; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bReturnMaterialOnMove_Bit        = 3;
        constexpr uint8_t   bReturnMaterialOnMove_Mask       = 0x08;
        constexpr uintptr_t bUseViewOwnerDepthPriorityGroup  = 0x0211; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bUseViewOwnerDepthPriorityGroup_Bit = 4;
        constexpr uint8_t   bUseViewOwnerDepthPriorityGroup_Mask = 0x10;
        constexpr uintptr_t bAllowCullDistanceVolume         = 0x0211; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bAllowCullDistanceVolume_Bit     = 5;
        constexpr uint8_t   bAllowCullDistanceVolume_Mask    = 0x20;
        constexpr uintptr_t bHasMotionBlurVelocityMeshes     = 0x0211; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bHasMotionBlurVelocityMeshes_Bit = 6;
        constexpr uint8_t   bHasMotionBlurVelocityMeshes_Mask = 0x40;
        constexpr uintptr_t bVisibleInReflectionCaptures     = 0x0211; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bVisibleInReflectionCaptures_Bit = 7;
        constexpr uint8_t   bVisibleInReflectionCaptures_Mask = 0x80;
        constexpr uintptr_t bVisibleInRealTimeSkyCaptures    = 0x0212; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bVisibleInRealTimeSkyCaptures_Bit = 0;
        constexpr uint8_t   bVisibleInRealTimeSkyCaptures_Mask = 0x01;
        constexpr uintptr_t bVisibleInRayTracing             = 0x0212; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bVisibleInRayTracing_Bit         = 1;
        constexpr uint8_t   bVisibleInRayTracing_Mask        = 0x02;
        constexpr uintptr_t bRenderInMainPass                = 0x0212; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bRenderInMainPass_Bit            = 2;
        constexpr uint8_t   bRenderInMainPass_Mask           = 0x04;
        constexpr uintptr_t bRenderInDepthPass               = 0x0212; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bRenderInDepthPass_Bit           = 3;
        constexpr uint8_t   bRenderInDepthPass_Mask          = 0x08;
        constexpr uintptr_t bReceivesDecals                  = 0x0212; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bReceivesDecals_Bit              = 4;
        constexpr uint8_t   bReceivesDecals_Mask             = 0x10;
        constexpr uintptr_t bOwnerNoSee                      = 0x0212; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bOwnerNoSee_Bit                  = 5;
        constexpr uint8_t   bOwnerNoSee_Mask                 = 0x20;
        constexpr uintptr_t bOnlyOwnerSee                    = 0x0212; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bOnlyOwnerSee_Bit                = 6;
        constexpr uint8_t   bOnlyOwnerSee_Mask               = 0x40;
        constexpr uintptr_t bTreatAsBackgroundForOcclusion   = 0x0212; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bTreatAsBackgroundForOcclusion_Bit = 7;
        constexpr uint8_t   bTreatAsBackgroundForOcclusion_Mask = 0x80;
        constexpr uintptr_t bUseAsOccluder                   = 0x0213; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bUseAsOccluder_Bit               = 0;
        constexpr uint8_t   bUseAsOccluder_Mask              = 0x01;
        constexpr uintptr_t bSelectable                      = 0x0213; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bSelectable_Bit                  = 1;
        constexpr uint8_t   bSelectable_Mask                 = 0x02;
        constexpr uintptr_t bForceMipStreaming               = 0x0213; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bForceMipStreaming_Bit           = 2;
        constexpr uint8_t   bForceMipStreaming_Mask          = 0x04;
        constexpr uintptr_t bHasPerInstanceHitProxies        = 0x0213; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bHasPerInstanceHitProxies_Bit    = 3;
        constexpr uint8_t   bHasPerInstanceHitProxies_Mask   = 0x08;
        constexpr uintptr_t CastShadow                       = 0x0213; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   CastShadow_Bit                   = 4;
        constexpr uint8_t   CastShadow_Mask                  = 0x10;
        constexpr uintptr_t bAffectDynamicIndirectLighting   = 0x0213; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bAffectDynamicIndirectLighting_Bit = 5;
        constexpr uint8_t   bAffectDynamicIndirectLighting_Mask = 0x20;
        constexpr uintptr_t bAffectDistanceFieldLighting     = 0x0213; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bAffectDistanceFieldLighting_Bit = 6;
        constexpr uint8_t   bAffectDistanceFieldLighting_Mask = 0x40;
        constexpr uintptr_t bCastDynamicShadow               = 0x0213; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bCastDynamicShadow_Bit           = 7;
        constexpr uint8_t   bCastDynamicShadow_Mask          = 0x80;
        constexpr uintptr_t bCastStaticShadow                = 0x0214; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bCastStaticShadow_Bit            = 0;
        constexpr uint8_t   bCastStaticShadow_Mask           = 0x01;
        constexpr uintptr_t bCastVolumetricTranslucentShadow = 0x0214; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bCastVolumetricTranslucentShadow_Bit = 1;
        constexpr uint8_t   bCastVolumetricTranslucentShadow_Mask = 0x02;
        constexpr uintptr_t bCastContactShadow               = 0x0214; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bCastContactShadow_Bit           = 2;
        constexpr uint8_t   bCastContactShadow_Mask          = 0x04;
        constexpr uintptr_t bSelfShadowOnly                  = 0x0214; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bSelfShadowOnly_Bit              = 3;
        constexpr uint8_t   bSelfShadowOnly_Mask             = 0x08;
        constexpr uintptr_t bCastFarShadow                   = 0x0214; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bCastFarShadow_Bit               = 4;
        constexpr uint8_t   bCastFarShadow_Mask              = 0x10;
        constexpr uintptr_t bCastInsetShadow                 = 0x0214; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bCastInsetShadow_Bit             = 5;
        constexpr uint8_t   bCastInsetShadow_Mask            = 0x20;
        constexpr uintptr_t bCastCinematicShadow             = 0x0214; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bCastCinematicShadow_Bit         = 6;
        constexpr uint8_t   bCastCinematicShadow_Mask        = 0x40;
        constexpr uintptr_t bCastHiddenShadow                = 0x0214; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bCastHiddenShadow_Bit            = 7;
        constexpr uint8_t   bCastHiddenShadow_Mask           = 0x80;
        constexpr uintptr_t bCastShadowAsTwoSided            = 0x0215; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bCastShadowAsTwoSided_Bit        = 0;
        constexpr uint8_t   bCastShadowAsTwoSided_Mask       = 0x01;
        constexpr uintptr_t bLightAsIfStatic                 = 0x0215; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bLightAsIfStatic_Bit             = 1;
        constexpr uint8_t   bLightAsIfStatic_Mask            = 0x02;
        constexpr uintptr_t bLightAttachmentsAsGroup         = 0x0215; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bLightAttachmentsAsGroup_Bit     = 2;
        constexpr uint8_t   bLightAttachmentsAsGroup_Mask    = 0x04;
        constexpr uintptr_t bExcludeFromLightAttachmentGroup = 0x0215; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bExcludeFromLightAttachmentGroup_Bit = 3;
        constexpr uint8_t   bExcludeFromLightAttachmentGroup_Mask = 0x08;
        constexpr uintptr_t bReceiveMobileCSMShadows         = 0x0215; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bReceiveMobileCSMShadows_Bit     = 4;
        constexpr uint8_t   bReceiveMobileCSMShadows_Mask    = 0x10;
        constexpr uintptr_t bSingleSampleShadowFromStationaryLights = 0x0215; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bSingleSampleShadowFromStationaryLights_Bit = 5;
        constexpr uint8_t   bSingleSampleShadowFromStationaryLights_Mask = 0x20;
        constexpr uintptr_t bIgnoreRadialImpulse             = 0x0215; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bIgnoreRadialImpulse_Bit         = 6;
        constexpr uint8_t   bIgnoreRadialImpulse_Mask        = 0x40;
        constexpr uintptr_t bIgnoreRadialForce               = 0x0215; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bIgnoreRadialForce_Bit           = 7;
        constexpr uint8_t   bIgnoreRadialForce_Mask          = 0x80;
        constexpr uintptr_t bApplyImpulseOnDamage            = 0x0216; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bApplyImpulseOnDamage_Bit        = 0;
        constexpr uint8_t   bApplyImpulseOnDamage_Mask       = 0x01;
        constexpr uintptr_t bReplicatePhysicsToAutonomousProxy = 0x0216; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bReplicatePhysicsToAutonomousProxy_Bit = 1;
        constexpr uint8_t   bReplicatePhysicsToAutonomousProxy_Mask = 0x02;
        constexpr uintptr_t bFillCollisionUnderneathForNavmesh = 0x0216; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bFillCollisionUnderneathForNavmesh_Bit = 2;
        constexpr uint8_t   bFillCollisionUnderneathForNavmesh_Mask = 0x04;
        constexpr uintptr_t AlwaysLoadOnClient               = 0x0216; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   AlwaysLoadOnClient_Bit           = 3;
        constexpr uint8_t   AlwaysLoadOnClient_Mask          = 0x08;
        constexpr uintptr_t AlwaysLoadOnServer               = 0x0216; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   AlwaysLoadOnServer_Bit           = 4;
        constexpr uint8_t   AlwaysLoadOnServer_Mask          = 0x10;
        constexpr uintptr_t bUseEditorCompositing            = 0x0216; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bUseEditorCompositing_Bit        = 5;
        constexpr uint8_t   bUseEditorCompositing_Mask       = 0x20;
        constexpr uintptr_t bRenderCustomDepth               = 0x0216; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bRenderCustomDepth_Bit           = 6;
        constexpr uint8_t   bRenderCustomDepth_Mask          = 0x40;
        constexpr uintptr_t bVisibleInSceneCaptureOnly       = 0x0216; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bVisibleInSceneCaptureOnly_Bit   = 7;
        constexpr uint8_t   bVisibleInSceneCaptureOnly_Mask  = 0x80;
        constexpr uintptr_t bHiddenInSceneCapture            = 0x0217; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bHiddenInSceneCapture_Bit        = 0;
        constexpr uint8_t   bHiddenInSceneCapture_Mask       = 0x01;
        constexpr uintptr_t bHasCustomNavigableGeometry      = 0x0218; // EHasCustomNavigableGeometry (Size: 0x0001)
        constexpr uintptr_t CanCharacterStepUpOn             = 0x021A; // ECanBeCharacterBase (Size: 0x0001)
        constexpr uintptr_t LightingChannels                 = 0x021B; // struct FLightingChannels (Size: 0x0001)
        constexpr uintptr_t CustomDepthStencilWriteMask      = 0x021C; // ERendererStencilMask (Size: 0x0001)
        constexpr uintptr_t CustomDepthStencilValue          = 0x0220; // int32 (Size: 0x0004)
        constexpr uintptr_t CustomPrimitiveData              = 0x0228; // struct FCustomPrimitiveData (Size: 0x0010)
        constexpr uintptr_t CustomPrimitiveDataInternal      = 0x0238; // struct FCustomPrimitiveData (Size: 0x0010)
        constexpr uintptr_t TranslucencySortPriority         = 0x0250; // int32 (Size: 0x0004)
        constexpr uintptr_t TranslucencySortDistanceOffset   = 0x0254; // float (Size: 0x0004)
        constexpr uintptr_t VisibilityId                     = 0x0258; // int32 (Size: 0x0004)
        constexpr uintptr_t RuntimeVirtualTextures           = 0x0260; // TArray<class URuntimeVirtualTexture*> (Size: 0x0010)
        constexpr uintptr_t VirtualTextureLodBias            = 0x0270; // int8 (Size: 0x0001)
        constexpr uintptr_t VirtualTextureCullMips           = 0x0271; // int8 (Size: 0x0001)
        constexpr uintptr_t VirtualTextureMinCoverage        = 0x0272; // int8 (Size: 0x0001)
        constexpr uintptr_t VirtualTextureRenderPassType     = 0x0273; // ERuntimeVirtualTextureMainPassType (Size: 0x0001)
        constexpr uintptr_t LpvBiasMultiplier                = 0x0278; // float (Size: 0x0004)
        constexpr uintptr_t BoundsScale                      = 0x0284; // float (Size: 0x0004)
        constexpr uintptr_t MoveIgnoreActors                 = 0x0298; // TArray<class AActor*> (Size: 0x0010)
        constexpr uintptr_t MoveIgnoreComponents             = 0x02A8; // TArray<class UPrimitiveComponent*> (Size: 0x0010)
        constexpr uintptr_t BodyInstance                     = 0x02C8; // struct FBodyInstance (Size: 0x0158)
        constexpr uintptr_t OnComponentHit                   = 0x0420; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnComponentBeginOverlap          = 0x0421; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnComponentEndOverlap            = 0x0422; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnComponentWake                  = 0x0423; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnComponentSleep                 = 0x0424; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnBeginCursorOver                = 0x0426; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnEndCursorOver                  = 0x0427; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnClicked                        = 0x0428; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnReleased                       = 0x0429; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnInputTouchBegin                = 0x042A; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnInputTouchEnd                  = 0x042B; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnInputTouchEnter                = 0x042C; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t OnInputTouchLeave                = 0x042D; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
        constexpr uintptr_t LODParentPrimitive               = 0x0448; // class UPrimitiveComponent* (Size: 0x0008)
    }

    // -------------------------------------------------------------------------
    // Class: USceneComponent
    // Package: Engine | Size: 0x0200 | Super: UActorComponent (0x00B0)
    // -------------------------------------------------------------------------
    namespace USceneComponent
    {
        constexpr uintptr_t PhysicsVolume                    = 0x00B8; // TWeakObjectPtr<class APhysicsVolume> (Size: 0x0008)
        constexpr uintptr_t AttachParent                     = 0x00C0; // class USceneComponent* (Size: 0x0008)
        constexpr uintptr_t AttachSocketName                 = 0x00C8; // class FName (Size: 0x0008)
        constexpr uintptr_t AttachChildren                   = 0x00D0; // TArray<class USceneComponent*> (Size: 0x0010)
        constexpr uintptr_t ClientAttachedChildren           = 0x00E0; // TArray<class USceneComponent*> (Size: 0x0010)
        constexpr uintptr_t RelativeLocation                 = 0x011C; // struct FVector (Size: 0x000C)
        constexpr uintptr_t RelativeRotation                 = 0x0128; // struct FRotator (Size: 0x000C)
        constexpr uintptr_t RelativeScale3D                  = 0x0134; // struct FVector (Size: 0x000C)
        constexpr uintptr_t ComponentVelocity                = 0x0140; // struct FVector (Size: 0x000C)
        constexpr uintptr_t bComponentToWorldUpdated         = 0x014C; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bComponentToWorldUpdated_Bit     = 0;
        constexpr uint8_t   bComponentToWorldUpdated_Mask    = 0x01;
        constexpr uintptr_t bAbsoluteLocation                = 0x014C; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bAbsoluteLocation_Bit            = 2;
        constexpr uint8_t   bAbsoluteLocation_Mask           = 0x04;
        constexpr uintptr_t bAbsoluteRotation                = 0x014C; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bAbsoluteRotation_Bit            = 3;
        constexpr uint8_t   bAbsoluteRotation_Mask           = 0x08;
        constexpr uintptr_t bAbsoluteScale                   = 0x014C; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bAbsoluteScale_Bit               = 4;
        constexpr uint8_t   bAbsoluteScale_Mask              = 0x10;
        constexpr uintptr_t bVisible                         = 0x014C; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bVisible_Bit                     = 5;
        constexpr uint8_t   bVisible_Mask                    = 0x20;
        constexpr uintptr_t bShouldBeAttached                = 0x014C; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bShouldBeAttached_Bit            = 6;
        constexpr uint8_t   bShouldBeAttached_Mask           = 0x40;
        constexpr uintptr_t bShouldSnapLocationWhenAttached  = 0x014C; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bShouldSnapLocationWhenAttached_Bit = 7;
        constexpr uint8_t   bShouldSnapLocationWhenAttached_Mask = 0x80;
        constexpr uintptr_t bShouldSnapRotationWhenAttached  = 0x014D; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bShouldSnapRotationWhenAttached_Bit = 0;
        constexpr uint8_t   bShouldSnapRotationWhenAttached_Mask = 0x01;
        constexpr uintptr_t bShouldUpdatePhysicsVolume       = 0x014D; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bShouldUpdatePhysicsVolume_Bit   = 1;
        constexpr uint8_t   bShouldUpdatePhysicsVolume_Mask  = 0x02;
        constexpr uintptr_t bHiddenInGame                    = 0x014D; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bHiddenInGame_Bit                = 2;
        constexpr uint8_t   bHiddenInGame_Mask               = 0x04;
        constexpr uintptr_t bBoundsChangeTriggersStreamingDataRebuild = 0x014D; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bBoundsChangeTriggersStreamingDataRebuild_Bit = 3;
        constexpr uint8_t   bBoundsChangeTriggersStreamingDataRebuild_Mask = 0x08;
        constexpr uintptr_t bUseAttachParentBound            = 0x014D; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bUseAttachParentBound_Bit        = 4;
        constexpr uint8_t   bUseAttachParentBound_Mask       = 0x10;
        constexpr uintptr_t Mobility                         = 0x014F; // EComponentMobility (Size: 0x0001)
        constexpr uintptr_t DetailMode                       = 0x0150; // EDetailMode (Size: 0x0001)
        constexpr uintptr_t PhysicsVolumeChangedDelegate     = 0x0151; // FMulticastSparseDelegateProperty_ (Size: 0x0001)
    }

    // -------------------------------------------------------------------------
    // Class: USkeletalMeshComponent
    // Package: Engine | Size: 0x0ED0 | Super: USkinnedMeshComponent (0x06A0)
    // -------------------------------------------------------------------------
    namespace USkeletalMeshComponent
    {
        constexpr uintptr_t AnimBlueprintGeneratedClass      = 0x06A0; // class UClass* (Size: 0x0008)
        constexpr uintptr_t AnimClass                        = 0x06A8; // TSubclassOf<class UAnimInstance> (Size: 0x0008)
        constexpr uintptr_t AnimScriptInstance               = 0x06B0; // class UAnimInstance* (Size: 0x0008)
        constexpr uintptr_t PostProcessAnimInstance          = 0x06B8; // class UAnimInstance* (Size: 0x0008)
        constexpr uintptr_t AnimationData                    = 0x06C0; // struct FSingleAnimationPlayData (Size: 0x0018)
        constexpr uintptr_t RootBoneTranslation              = 0x06E8; // struct FVector (Size: 0x000C)
        constexpr uintptr_t LineCheckBoundsScale             = 0x06F4; // struct FVector (Size: 0x000C)
        constexpr uintptr_t LinkedInstances                  = 0x0730; // TArray<class UAnimInstance*> (Size: 0x0010)
        constexpr uintptr_t CachedBoneSpaceTransforms        = 0x0740; // TArray<struct FTransform> (Size: 0x0010)
        constexpr uintptr_t CachedComponentSpaceTransforms   = 0x0750; // TArray<struct FTransform> (Size: 0x0010)
        constexpr uintptr_t GlobalAnimRateScale              = 0x08B0; // float (Size: 0x0004)
        constexpr uintptr_t KinematicBonesUpdateType         = 0x08B4; // EKinematicBonesUpdateToPhysics (Size: 0x0001)
        constexpr uintptr_t PhysicsTransformUpdateMode       = 0x08B5; // EPhysicsTransformUpdateMode (Size: 0x0001)
        constexpr uintptr_t AnimationMode                    = 0x08B7; // EAnimationMode (Size: 0x0001)
        constexpr uintptr_t bDisablePostProcessBlueprint     = 0x08B9; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bDisablePostProcessBlueprint_Bit = 0;
        constexpr uint8_t   bDisablePostProcessBlueprint_Mask = 0x01;
        constexpr uintptr_t bUpdateOverlapsOnAnimationFinalize = 0x08B9; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bUpdateOverlapsOnAnimationFinalize_Bit = 2;
        constexpr uint8_t   bUpdateOverlapsOnAnimationFinalize_Mask = 0x04;
        constexpr uintptr_t bHasValidBodies                  = 0x08B9; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bHasValidBodies_Bit              = 4;
        constexpr uint8_t   bHasValidBodies_Mask             = 0x10;
        constexpr uintptr_t bBlendPhysics                    = 0x08B9; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bBlendPhysics_Bit                = 5;
        constexpr uint8_t   bBlendPhysics_Mask               = 0x20;
        constexpr uintptr_t bEnablePhysicsOnDedicatedServer  = 0x08B9; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bEnablePhysicsOnDedicatedServer_Bit = 6;
        constexpr uint8_t   bEnablePhysicsOnDedicatedServer_Mask = 0x40;
        constexpr uintptr_t bUpdateJointsFromAnimation       = 0x08B9; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bUpdateJointsFromAnimation_Bit   = 7;
        constexpr uint8_t   bUpdateJointsFromAnimation_Mask  = 0x80;
        constexpr uintptr_t bDisableClothSimulation          = 0x08BA; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bDisableClothSimulation_Bit      = 0;
        constexpr uint8_t   bDisableClothSimulation_Mask     = 0x01;
        constexpr uintptr_t bDisableRigidBodyAnimNode        = 0x08C0; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bDisableRigidBodyAnimNode_Bit    = 1;
        constexpr uint8_t   bDisableRigidBodyAnimNode_Mask   = 0x02;
        constexpr uintptr_t bAllowAnimCurveEvaluation        = 0x08C0; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bAllowAnimCurveEvaluation_Bit    = 2;
        constexpr uint8_t   bAllowAnimCurveEvaluation_Mask   = 0x04;
        constexpr uintptr_t bDisableAnimCurves               = 0x08C0; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bDisableAnimCurves_Bit           = 3;
        constexpr uint8_t   bDisableAnimCurves_Mask          = 0x08;
        constexpr uintptr_t bCollideWithEnvironment          = 0x08C0; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bCollideWithEnvironment_Bit      = 7;
        constexpr uint8_t   bCollideWithEnvironment_Mask     = 0x80;
        constexpr uintptr_t bCollideWithAttachedChildren     = 0x08C1; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bCollideWithAttachedChildren_Bit = 0;
        constexpr uint8_t   bCollideWithAttachedChildren_Mask = 0x01;
        constexpr uintptr_t bLocalSpaceSimulation            = 0x08C1; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bLocalSpaceSimulation_Bit        = 1;
        constexpr uint8_t   bLocalSpaceSimulation_Mask       = 0x02;
        constexpr uintptr_t bResetAfterTeleport              = 0x08C1; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bResetAfterTeleport_Bit          = 2;
        constexpr uint8_t   bResetAfterTeleport_Mask         = 0x04;
        constexpr uintptr_t bDeferKinematicBoneUpdate        = 0x08C1; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bDeferKinematicBoneUpdate_Bit    = 4;
        constexpr uint8_t   bDeferKinematicBoneUpdate_Mask   = 0x10;
        constexpr uintptr_t bNoSkeletonUpdate                = 0x08C1; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bNoSkeletonUpdate_Bit            = 5;
        constexpr uint8_t   bNoSkeletonUpdate_Mask           = 0x20;
        constexpr uintptr_t bPauseAnims                      = 0x08C1; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bPauseAnims_Bit                  = 6;
        constexpr uint8_t   bPauseAnims_Mask                 = 0x40;
        constexpr uintptr_t bUseRefPoseOnInitAnim            = 0x08C1; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bUseRefPoseOnInitAnim_Bit        = 7;
        constexpr uint8_t   bUseRefPoseOnInitAnim_Mask       = 0x80;
        constexpr uintptr_t bEnablePerPolyCollision          = 0x08C2; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bEnablePerPolyCollision_Bit      = 0;
        constexpr uint8_t   bEnablePerPolyCollision_Mask     = 0x01;
        constexpr uintptr_t bForceRefpose                    = 0x08C2; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bForceRefpose_Bit                = 1;
        constexpr uint8_t   bForceRefpose_Mask               = 0x02;
        constexpr uintptr_t bOnlyAllowAutonomousTickPose     = 0x08C2; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bOnlyAllowAutonomousTickPose_Bit = 2;
        constexpr uint8_t   bOnlyAllowAutonomousTickPose_Mask = 0x04;
        constexpr uintptr_t bIsAutonomousTickPose            = 0x08C2; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bIsAutonomousTickPose_Bit        = 3;
        constexpr uint8_t   bIsAutonomousTickPose_Mask       = 0x08;
        constexpr uintptr_t bOldForceRefPose                 = 0x08C2; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bOldForceRefPose_Bit             = 4;
        constexpr uint8_t   bOldForceRefPose_Mask            = 0x10;
        constexpr uintptr_t bShowPrePhysBones                = 0x08C2; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bShowPrePhysBones_Bit            = 5;
        constexpr uint8_t   bShowPrePhysBones_Mask           = 0x20;
        constexpr uintptr_t bRequiredBonesUpToDate           = 0x08C2; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bRequiredBonesUpToDate_Bit       = 6;
        constexpr uint8_t   bRequiredBonesUpToDate_Mask      = 0x40;
        constexpr uintptr_t bAnimTreeInitialised             = 0x08C2; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bAnimTreeInitialised_Bit         = 7;
        constexpr uint8_t   bAnimTreeInitialised_Mask        = 0x80;
        constexpr uintptr_t bIncludeComponentLocationIntoBounds = 0x08C3; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bIncludeComponentLocationIntoBounds_Bit = 0;
        constexpr uint8_t   bIncludeComponentLocationIntoBounds_Mask = 0x01;
        constexpr uintptr_t bEnableLineCheckWithBounds       = 0x08C3; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bEnableLineCheckWithBounds_Bit   = 1;
        constexpr uint8_t   bEnableLineCheckWithBounds_Mask  = 0x02;
        constexpr uintptr_t bPropagateCurvesToSlaves         = 0x08C3; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bPropagateCurvesToSlaves_Bit     = 2;
        constexpr uint8_t   bPropagateCurvesToSlaves_Mask    = 0x04;
        constexpr uintptr_t bSkipKinematicUpdateWhenInterpolating = 0x08C3; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bSkipKinematicUpdateWhenInterpolating_Bit = 3;
        constexpr uint8_t   bSkipKinematicUpdateWhenInterpolating_Mask = 0x08;
        constexpr uintptr_t bSkipBoundsUpdateWhenInterpolating = 0x08C3; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bSkipBoundsUpdateWhenInterpolating_Bit = 4;
        constexpr uint8_t   bSkipBoundsUpdateWhenInterpolating_Mask = 0x10;
        constexpr uintptr_t bNeedsQueuedAnimEventsDispatched = 0x08C3; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bNeedsQueuedAnimEventsDispatched_Bit = 7;
        constexpr uint8_t   bNeedsQueuedAnimEventsDispatched_Mask = 0x80;
        constexpr uintptr_t CachedAnimCurveUidVersion        = 0x08C6; // uint16 (Size: 0x0002)
        constexpr uintptr_t ClothBlendWeight                 = 0x08C8; // float (Size: 0x0004)
        constexpr uintptr_t bWaitForParallelClothTask        = 0x08CC; // bool (Size: 0x0001)
        constexpr uintptr_t DisallowedAnimCurves             = 0x08D0; // TArray<class FName> (Size: 0x0010)
        constexpr uintptr_t BodySetup                        = 0x08E0; // class UBodySetup* (Size: 0x0008)
        constexpr uintptr_t OnConstraintBroken               = 0x08F0; // TMulticastInlineDelegate<void(int32 ConstraintIndex)> (Size: 0x0010)
        constexpr uintptr_t ClothingSimulationFactory        = 0x0900; // TSubclassOf<class UClothingSimulationFactory> (Size: 0x0008)
        constexpr uintptr_t TeleportDistanceThreshold        = 0x09D8; // float (Size: 0x0004)
        constexpr uintptr_t TeleportRotationThreshold        = 0x09DC; // float (Size: 0x0004)
        constexpr uintptr_t LastPoseTickFrame                = 0x09E8; // uint32 (Size: 0x0004)
        constexpr uintptr_t ClothingInteractor               = 0x0A40; // class UClothingSimulationInteractor* (Size: 0x0008)
        constexpr uintptr_t OnAnimInitialized                = 0x0B10; // TMulticastInlineDelegate<void()> (Size: 0x0010)
    }

    // -------------------------------------------------------------------------
    // Class: USkinnedMeshComponent
    // Package: Engine | Size: 0x06A0 | Super: UMeshComponent (0x0480)
    // -------------------------------------------------------------------------
    namespace USkinnedMeshComponent
    {
        constexpr uintptr_t SkeletalMesh                     = 0x0480; // class USkeletalMesh* (Size: 0x0008)
        constexpr uintptr_t MasterPoseComponent              = 0x0488; // TWeakObjectPtr<class USkinnedMeshComponent> (Size: 0x0008)
        constexpr uintptr_t SkinCacheUsage                   = 0x0490; // TArray<ESkinCacheUsage> (Size: 0x0010)
        constexpr uintptr_t VertexOffsetUsage                = 0x04A0; // TArray<struct FVertexOffsetUsage> (Size: 0x0010)
        constexpr uintptr_t PhysicsAssetOverride             = 0x05A8; // class UPhysicsAsset* (Size: 0x0008)
        constexpr uintptr_t ForcedLodModel                   = 0x05B0; // int32 (Size: 0x0004)
        constexpr uintptr_t MinLodModel                      = 0x05B4; // int32 (Size: 0x0004)
        constexpr uintptr_t StreamingDistanceMultiplier      = 0x05C0; // float (Size: 0x0004)
        constexpr uintptr_t LODInfo                          = 0x05D0; // TArray<struct FSkelMeshComponentLODInfo> (Size: 0x0010)
        constexpr uintptr_t VisibilityBasedAnimTickOption    = 0x0604; // EVisibilityBasedAnimTickOption (Size: 0x0001)
        constexpr uintptr_t bOverrideMinLOD                  = 0x0606; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bOverrideMinLOD_Bit              = 3;
        constexpr uint8_t   bOverrideMinLOD_Mask             = 0x08;
        constexpr uintptr_t bUseBoundsFromMasterPoseComponent = 0x0606; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bUseBoundsFromMasterPoseComponent_Bit = 4;
        constexpr uint8_t   bUseBoundsFromMasterPoseComponent_Mask = 0x10;
        constexpr uintptr_t bForceWireframe                  = 0x0606; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bForceWireframe_Bit              = 5;
        constexpr uint8_t   bForceWireframe_Mask             = 0x20;
        constexpr uintptr_t bDisplayBones                    = 0x0606; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bDisplayBones_Bit                = 6;
        constexpr uint8_t   bDisplayBones_Mask               = 0x40;
        constexpr uintptr_t bDisableMorphTarget              = 0x0606; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bDisableMorphTarget_Bit          = 7;
        constexpr uint8_t   bDisableMorphTarget_Mask         = 0x80;
        constexpr uintptr_t bHideSkin                        = 0x0607; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bHideSkin_Bit                    = 0;
        constexpr uint8_t   bHideSkin_Mask                   = 0x01;
        constexpr uintptr_t bPerBoneMotionBlur               = 0x0607; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bPerBoneMotionBlur_Bit           = 1;
        constexpr uint8_t   bPerBoneMotionBlur_Mask          = 0x02;
        constexpr uintptr_t bComponentUseFixedSkelBounds     = 0x0607; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bComponentUseFixedSkelBounds_Bit = 2;
        constexpr uint8_t   bComponentUseFixedSkelBounds_Mask = 0x04;
        constexpr uintptr_t bConsiderAllBodiesForBounds      = 0x0607; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bConsiderAllBodiesForBounds_Bit  = 3;
        constexpr uint8_t   bConsiderAllBodiesForBounds_Mask = 0x08;
        constexpr uintptr_t bSyncAttachParentLOD             = 0x0607; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bSyncAttachParentLOD_Bit         = 4;
        constexpr uint8_t   bSyncAttachParentLOD_Mask        = 0x10;
        constexpr uintptr_t bCanHighlightSelectedSections    = 0x0607; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bCanHighlightSelectedSections_Bit = 5;
        constexpr uint8_t   bCanHighlightSelectedSections_Mask = 0x20;
        constexpr uintptr_t bRecentlyRendered                = 0x0607; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bRecentlyRendered_Bit            = 6;
        constexpr uint8_t   bRecentlyRendered_Mask           = 0x40;
        constexpr uintptr_t bCastCapsuleDirectShadow         = 0x0607; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bCastCapsuleDirectShadow_Bit     = 7;
        constexpr uint8_t   bCastCapsuleDirectShadow_Mask    = 0x80;
        constexpr uintptr_t bCastCapsuleIndirectShadow       = 0x0608; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bCastCapsuleIndirectShadow_Bit   = 0;
        constexpr uint8_t   bCastCapsuleIndirectShadow_Mask  = 0x01;
        constexpr uintptr_t bCPUSkinning                     = 0x0608; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bCPUSkinning_Bit                 = 1;
        constexpr uint8_t   bCPUSkinning_Mask                = 0x02;
        constexpr uintptr_t bEnableUpdateRateOptimizations   = 0x0608; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bEnableUpdateRateOptimizations_Bit = 2;
        constexpr uint8_t   bEnableUpdateRateOptimizations_Mask = 0x04;
        constexpr uintptr_t bDisplayDebugUpdateRateOptimizations = 0x0608; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bDisplayDebugUpdateRateOptimizations_Bit = 3;
        constexpr uint8_t   bDisplayDebugUpdateRateOptimizations_Mask = 0x08;
        constexpr uintptr_t bRenderStatic                    = 0x0608; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bRenderStatic_Bit                = 4;
        constexpr uint8_t   bRenderStatic_Mask               = 0x10;
        constexpr uintptr_t bIgnoreMasterPoseComponentLOD    = 0x0608; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bIgnoreMasterPoseComponentLOD_Bit = 5;
        constexpr uint8_t   bIgnoreMasterPoseComponentLOD_Mask = 0x20;
        constexpr uintptr_t bCachedLocalBoundsUpToDate       = 0x0609; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bCachedLocalBoundsUpToDate_Bit   = 0;
        constexpr uint8_t   bCachedLocalBoundsUpToDate_Mask  = 0x01;
        constexpr uintptr_t bForceMeshObjectUpdate           = 0x0609; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bForceMeshObjectUpdate_Bit       = 2;
        constexpr uint8_t   bForceMeshObjectUpdate_Mask      = 0x04;
        constexpr uintptr_t CapsuleIndirectShadowMinVisibility = 0x060C; // float (Size: 0x0004)
        constexpr uintptr_t CachedWorldSpaceBounds           = 0x0620; // struct FBoxSphereBounds (Size: 0x001C)
        constexpr uintptr_t CachedWorldToLocalTransform      = 0x0640; // struct FMatrix (Size: 0x0040)
    }

    // -------------------------------------------------------------------------
    // Class: UStaticMeshComponent
    // Package: Engine | Size: 0x04E0 | Super: UMeshComponent (0x0480)
    // -------------------------------------------------------------------------
    namespace UStaticMeshComponent
    {
        constexpr uintptr_t ForcedLodModel                   = 0x0478; // int32 (Size: 0x0004)
        constexpr uintptr_t PreviousLODLevel                 = 0x047C; // int32 (Size: 0x0004)
        constexpr uintptr_t MinLOD                           = 0x0480; // int32 (Size: 0x0004)
        constexpr uintptr_t SubDivisionStepSize              = 0x0484; // int32 (Size: 0x0004)
        constexpr uintptr_t StaticMesh                       = 0x0488; // class UStaticMesh* (Size: 0x0008)
        constexpr uintptr_t WireframeColorOverride           = 0x0490; // struct FColor (Size: 0x0004)
        constexpr uintptr_t bEvaluateWorldPositionOffset     = 0x0494; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bEvaluateWorldPositionOffset_Bit = 0;
        constexpr uint8_t   bEvaluateWorldPositionOffset_Mask = 0x01;
        constexpr uintptr_t bOverrideWireframeColor          = 0x0494; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bOverrideWireframeColor_Bit      = 1;
        constexpr uint8_t   bOverrideWireframeColor_Mask     = 0x02;
        constexpr uintptr_t bOverrideMinLOD                  = 0x0494; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bOverrideMinLOD_Bit              = 2;
        constexpr uint8_t   bOverrideMinLOD_Mask             = 0x04;
        constexpr uintptr_t bOverrideNavigationExport        = 0x0494; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bOverrideNavigationExport_Bit    = 3;
        constexpr uint8_t   bOverrideNavigationExport_Mask   = 0x08;
        constexpr uintptr_t bForceNavigationObstacle         = 0x0494; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bForceNavigationObstacle_Bit     = 4;
        constexpr uint8_t   bForceNavigationObstacle_Mask    = 0x10;
        constexpr uintptr_t bDisallowMeshPaintPerInstance    = 0x0494; // uint8 : 1 (BitIndex: 5, Mask: 0x20)
        constexpr uint8_t   bDisallowMeshPaintPerInstance_Bit = 5;
        constexpr uint8_t   bDisallowMeshPaintPerInstance_Mask = 0x20;
        constexpr uintptr_t bIgnoreInstanceForTextureStreaming = 0x0494; // uint8 : 1 (BitIndex: 6, Mask: 0x40)
        constexpr uint8_t   bIgnoreInstanceForTextureStreaming_Bit = 6;
        constexpr uint8_t   bIgnoreInstanceForTextureStreaming_Mask = 0x40;
        constexpr uintptr_t bOverrideLightMapRes             = 0x0494; // uint8 : 1 (BitIndex: 7, Mask: 0x80)
        constexpr uint8_t   bOverrideLightMapRes_Bit         = 7;
        constexpr uint8_t   bOverrideLightMapRes_Mask        = 0x80;
        constexpr uintptr_t bCastDistanceFieldIndirectShadow = 0x0495; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bCastDistanceFieldIndirectShadow_Bit = 0;
        constexpr uint8_t   bCastDistanceFieldIndirectShadow_Mask = 0x01;
        constexpr uintptr_t bOverrideDistanceFieldSelfShadowBias = 0x0495; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bOverrideDistanceFieldSelfShadowBias_Bit = 1;
        constexpr uint8_t   bOverrideDistanceFieldSelfShadowBias_Mask = 0x02;
        constexpr uintptr_t bUseSubDivisions                 = 0x0495; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bUseSubDivisions_Bit             = 2;
        constexpr uint8_t   bUseSubDivisions_Mask            = 0x04;
        constexpr uintptr_t bUseDefaultCollision             = 0x0495; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bUseDefaultCollision_Bit         = 3;
        constexpr uint8_t   bUseDefaultCollision_Mask        = 0x08;
        constexpr uintptr_t bReverseCulling                  = 0x0495; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bReverseCulling_Bit              = 4;
        constexpr uint8_t   bReverseCulling_Mask             = 0x10;
        constexpr uintptr_t OverriddenLightMapRes            = 0x0498; // int32 (Size: 0x0004)
        constexpr uintptr_t DistanceFieldIndirectShadowMinVisibility = 0x049C; // float (Size: 0x0004)
        constexpr uintptr_t DistanceFieldSelfShadowBias      = 0x04A0; // float (Size: 0x0004)
        constexpr uintptr_t StreamingDistanceMultiplier      = 0x04A4; // float (Size: 0x0004)
        constexpr uintptr_t LODData                          = 0x04A8; // TArray<struct FStaticMeshComponentLODInfo> (Size: 0x0010)
        constexpr uintptr_t StreamingTextureData             = 0x04B8; // TArray<struct FStreamingTextureBuildInfo> (Size: 0x0010)
        constexpr uintptr_t LightmassSettings                = 0x04C8; // struct FLightmassPrimitiveSettings (Size: 0x0018)
    }

    // -------------------------------------------------------------------------
    // Class: UStruct
    // Package: CoreUObject | Size: 0x00B0 | Super: UField (0x0030)
    // -------------------------------------------------------------------------
    namespace UStruct
    {
        constexpr uintptr_t Super                            = 0x0040; // class UStruct* (Size: 0x0008)
        constexpr uintptr_t Children                         = 0x0048; // class UField* (Size: 0x0008)
        constexpr uintptr_t ChildProperties                  = 0x0050; // class FField* (Size: 0x0008)
        constexpr uintptr_t Size                             = 0x0058; // int32 (Size: 0x0004)
        constexpr uintptr_t MinAlignemnt                     = 0x005C; // int32 (Size: 0x0004)
    }

    // -------------------------------------------------------------------------
    // Class: UUserWidget
    // Package: UMG | Size: 0x0260 | Super: UWidget (0x0108)
    // -------------------------------------------------------------------------
    namespace UUserWidget
    {
        constexpr uintptr_t ColorAndOpacity                  = 0x0110; // struct FLinearColor (Size: 0x0010)
        constexpr uintptr_t ColorAndOpacityDelegate          = 0x0120; // TDelegate<void()> (Size: 0x0010)
        constexpr uintptr_t ForegroundColor                  = 0x0130; // struct FSlateColor (Size: 0x0028)
        constexpr uintptr_t ForegroundColorDelegate          = 0x0158; // TDelegate<void()> (Size: 0x0010)
        constexpr uintptr_t OnVisibilityChanged              = 0x0168; // TMulticastInlineDelegate<void(ESlateVisibility InVisibility)> (Size: 0x0010)
        constexpr uintptr_t Padding                          = 0x0190; // struct FMargin (Size: 0x0010)
        constexpr uintptr_t ActiveSequencePlayers            = 0x01A0; // TArray<class UUMGSequencePlayer*> (Size: 0x0010)
        constexpr uintptr_t AnimationTickManager             = 0x01B0; // class UUMGSequenceTickManager* (Size: 0x0008)
        constexpr uintptr_t StoppedSequencePlayers           = 0x01B8; // TArray<class UUMGSequencePlayer*> (Size: 0x0010)
        constexpr uintptr_t NamedSlotBindings                = 0x01C8; // TArray<struct FNamedSlotBinding> (Size: 0x0010)
        constexpr uintptr_t WidgetTree                       = 0x01D8; // class UWidgetTree* (Size: 0x0008)
        constexpr uintptr_t Priority                         = 0x01E0; // int32 (Size: 0x0004)
        constexpr uintptr_t bSupportsKeyboardFocus           = 0x01E4; // uint8 : 1 (BitIndex: 0, Mask: 0x01)
        constexpr uint8_t   bSupportsKeyboardFocus_Bit       = 0;
        constexpr uint8_t   bSupportsKeyboardFocus_Mask      = 0x01;
        constexpr uintptr_t bIsFocusable                     = 0x01E4; // uint8 : 1 (BitIndex: 1, Mask: 0x02)
        constexpr uint8_t   bIsFocusable_Bit                 = 1;
        constexpr uint8_t   bIsFocusable_Mask                = 0x02;
        constexpr uintptr_t bStopAction                      = 0x01E4; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bStopAction_Bit                  = 2;
        constexpr uint8_t   bStopAction_Mask                 = 0x04;
        constexpr uintptr_t bHasScriptImplementedTick        = 0x01E4; // uint8 : 1 (BitIndex: 3, Mask: 0x08)
        constexpr uint8_t   bHasScriptImplementedTick_Bit    = 3;
        constexpr uint8_t   bHasScriptImplementedTick_Mask   = 0x08;
        constexpr uintptr_t bHasScriptImplementedPaint       = 0x01E4; // uint8 : 1 (BitIndex: 4, Mask: 0x10)
        constexpr uint8_t   bHasScriptImplementedPaint_Bit   = 4;
        constexpr uint8_t   bHasScriptImplementedPaint_Mask  = 0x10;
        constexpr uintptr_t TickFrequency                    = 0x01F0; // EWidgetTickFrequency (Size: 0x0001)
        constexpr uintptr_t InputComponent                   = 0x01F8; // class UInputComponent* (Size: 0x0008)
        constexpr uintptr_t AnimationCallbacks               = 0x0200; // TArray<struct FAnimationEventBinding> (Size: 0x0010)
    }

    // -------------------------------------------------------------------------
    // Class: UWorld
    // Package: Engine | Size: 0x0798 | Super: UObject (0x0028)
    // -------------------------------------------------------------------------
    namespace UWorld
    {
        constexpr uintptr_t PersistentLevel                  = 0x0030; // class ULevel* (Size: 0x0008)
        constexpr uintptr_t NetDriver                        = 0x0038; // class UNetDriver* (Size: 0x0008)
        constexpr uintptr_t LineBatcher                      = 0x0040; // class ULineBatchComponent* (Size: 0x0008)
        constexpr uintptr_t PersistentLineBatcher            = 0x0048; // class ULineBatchComponent* (Size: 0x0008)
        constexpr uintptr_t ForegroundLineBatcher            = 0x0050; // class ULineBatchComponent* (Size: 0x0008)
        constexpr uintptr_t NetworkManager                   = 0x0058; // class AGameNetworkManager* (Size: 0x0008)
        constexpr uintptr_t PhysicsCollisionHandler          = 0x0060; // class UPhysicsCollisionHandler* (Size: 0x0008)
        constexpr uintptr_t ExtraReferencedObjects           = 0x0068; // TArray<class UObject*> (Size: 0x0010)
        constexpr uintptr_t PerModuleDataObjects             = 0x0078; // TArray<class UObject*> (Size: 0x0010)
        constexpr uintptr_t StreamingLevels                  = 0x0088; // TArray<class ULevelStreaming*> (Size: 0x0010)
        constexpr uintptr_t StreamingLevelsToConsider        = 0x0098; // struct FStreamingLevelsToConsider (Size: 0x0028)
        constexpr uintptr_t StreamingLevelsPrefix            = 0x00C0; // class FString (Size: 0x0010)
        constexpr uintptr_t CurrentLevelPendingVisibility    = 0x00D0; // class ULevel* (Size: 0x0008)
        constexpr uintptr_t CurrentLevelPendingInvisibility  = 0x00D8; // class ULevel* (Size: 0x0008)
        constexpr uintptr_t DemoNetDriver                    = 0x00E0; // class UDemoNetDriver* (Size: 0x0008)
        constexpr uintptr_t MyParticleEventManager           = 0x00E8; // class AParticleEventManager* (Size: 0x0008)
        constexpr uintptr_t DefaultPhysicsVolume             = 0x00F0; // class APhysicsVolume* (Size: 0x0008)
        constexpr uintptr_t bAreConstraintsDirty             = 0x010E; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bAreConstraintsDirty_Bit         = 2;
        constexpr uint8_t   bAreConstraintsDirty_Mask        = 0x04;
        constexpr uintptr_t NavigationSystem                 = 0x0110; // class UNavigationSystemBase* (Size: 0x0008)
        constexpr uintptr_t AuthorityGameMode                = 0x0118; // class AGameModeBase* (Size: 0x0008)
        constexpr uintptr_t GameState                        = 0x0120; // class AGameStateBase* (Size: 0x0008)
        constexpr uintptr_t AISystem                         = 0x0128; // class UAISystemBase* (Size: 0x0008)
        constexpr uintptr_t AvoidanceManager                 = 0x0130; // class UAvoidanceManager* (Size: 0x0008)
        constexpr uintptr_t Levels                           = 0x0138; // TArray<class ULevel*> (Size: 0x0010)
        constexpr uintptr_t LevelCollections                 = 0x0148; // TArray<struct FLevelCollection> (Size: 0x0010)
        constexpr uintptr_t OwningGameInstance               = 0x0180; // class UGameInstance* (Size: 0x0008)
        constexpr uintptr_t ParameterCollectionInstances     = 0x0188; // TArray<class UMaterialParameterCollectionInstance*> (Size: 0x0010)
        constexpr uintptr_t CanvasForRenderingToTarget       = 0x0198; // class UCanvas* (Size: 0x0008)
        constexpr uintptr_t CanvasForDrawMaterialToRenderTarget = 0x01A0; // class UCanvas* (Size: 0x0008)
        constexpr uintptr_t PhysicsField                     = 0x01F8; // class UPhysicsFieldComponent* (Size: 0x0008)
        constexpr uintptr_t ComponentsThatNeedPreEndOfFrameSync = 0x0200; // TSet<class UActorComponent*> (Size: 0x0050)
        constexpr uintptr_t ComponentsThatNeedEndOfFrameUpdate = 0x0250; // TArray<class UActorComponent*> (Size: 0x0010)
        constexpr uintptr_t ComponentsThatNeedEndOfFrameUpdate_OnGameThread = 0x0260; // TArray<class UActorComponent*> (Size: 0x0010)
        constexpr uintptr_t WorldComposition                 = 0x05E0; // class UWorldComposition* (Size: 0x0008)
        constexpr uintptr_t PSCPool                          = 0x0678; // struct FWorldPSCPool (Size: 0x0058)
    }

}
