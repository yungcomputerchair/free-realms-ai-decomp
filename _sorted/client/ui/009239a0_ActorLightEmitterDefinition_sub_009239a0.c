// addr: 0x009239a0
// name: ActorLightEmitterDefinition_sub_009239a0
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 ActorLightEmitterDefinition_sub_009239a0(undefined4 param_1)

{
  int iVar1;
  
                    /* Casts a SensoryEffectDefinition to ActorLightEmitterDefinition and returns
                       the 32-bit field at offset +0xd0. Field meaning is not identified. */
  iVar1 = FUN_00d8d382(param_1,0,&SensoryEffectDefinition::RTTI_Type_Descriptor,
                       &ActorLightEmitterDefinition::RTTI_Type_Descriptor,0);
  return *(undefined4 *)(iVar1 + 0xd0);
}

