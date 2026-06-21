// addr: 0x0090f640
// name: ActorProjectileDefinition_sub_0090f640
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 ActorProjectileDefinition_sub_0090f640(undefined4 param_1)

{
  int iVar1;
  
                    /* Casts a SensoryEffectDefinition to ActorProjectileDefinition and returns the
                       32-bit field at offset +0xb0. Field meaning is not identified. */
  iVar1 = FUN_00d8d382(param_1,0,&SensoryEffectDefinition::RTTI_Type_Descriptor,
                       &ActorProjectileDefinition::RTTI_Type_Descriptor,0);
  return *(undefined4 *)(iVar1 + 0xb0);
}

