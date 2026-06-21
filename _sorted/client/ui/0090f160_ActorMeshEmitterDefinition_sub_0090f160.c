// addr: 0x0090f160
// name: ActorMeshEmitterDefinition_sub_0090f160
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 ActorMeshEmitterDefinition_sub_0090f160(undefined4 param_1)

{
  int iVar1;
  
                    /* Casts a SensoryEffectDefinition to ActorMeshEmitterDefinition and returns the
                       32-bit field at offset +0xc0. Field meaning is not identified. */
  iVar1 = FUN_00d8d382(param_1,0,&SensoryEffectDefinition::RTTI_Type_Descriptor,
                       &ActorMeshEmitterDefinition::RTTI_Type_Descriptor,0);
  return *(undefined4 *)(iVar1 + 0xc0);
}

