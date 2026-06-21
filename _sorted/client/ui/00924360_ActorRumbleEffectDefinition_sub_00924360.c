// addr: 0x00924360
// name: ActorRumbleEffectDefinition_sub_00924360
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 ActorRumbleEffectDefinition_sub_00924360(undefined4 param_1)

{
  int iVar1;
  
                    /* Casts a SensoryEffectDefinition to ActorRumbleEffectDefinition and returns
                       the 32-bit field at offset +0xc0. Field meaning is not identified. */
  iVar1 = FUN_00d8d382(param_1,0,&SensoryEffectDefinition::RTTI_Type_Descriptor,
                       &ActorRumbleEffectDefinition::RTTI_Type_Descriptor,0);
  return *(undefined4 *)(iVar1 + 0xc0);
}

