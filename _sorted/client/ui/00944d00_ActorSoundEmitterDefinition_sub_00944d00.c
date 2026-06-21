// addr: 0x00944d00
// name: ActorSoundEmitterDefinition_sub_00944d00
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 ActorSoundEmitterDefinition_sub_00944d00(undefined4 param_1)

{
  int iVar1;
  
                    /* Casts a SensoryEffectDefinition to ActorSoundEmitterDefinition and returns
                       the 32-bit field at offset +0x1b0. Field meaning is not identified. */
  iVar1 = FUN_00d8d382(param_1,0,&SensoryEffectDefinition::RTTI_Type_Descriptor,
                       &ActorSoundEmitterDefinition::RTTI_Type_Descriptor,0);
  return *(undefined4 *)(iVar1 + 0x1b0);
}

