// addr: 0x00924840
// name: ActorLightsaberTrailDefinition_sub_00924840
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 ActorLightsaberTrailDefinition_sub_00924840(undefined4 param_1)

{
  int iVar1;
  
                    /* Casts a SensoryEffectDefinition to ActorLightsaberTrailDefinition and returns
                       the 32-bit field at offset +0xc0. Field meaning is not identified. */
  iVar1 = FUN_00d8d382(param_1,0,&SensoryEffectDefinition::RTTI_Type_Descriptor,
                       &ActorLightsaberTrailDefinition::RTTI_Type_Descriptor,0);
  return *(undefined4 *)(iVar1 + 0xc0);
}

