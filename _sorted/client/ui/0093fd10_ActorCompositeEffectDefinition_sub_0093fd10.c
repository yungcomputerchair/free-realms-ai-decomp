// addr: 0x0093fd10
// name: ActorCompositeEffectDefinition_sub_0093fd10
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 ActorCompositeEffectDefinition_sub_0093fd10(undefined4 param_1)

{
  int iVar1;
  
                    /* Casts a SensoryEffectDefinition to ActorCompositeEffectDefinition and returns
                       the 32-bit field at offset +0x40. Field meaning is not identified. */
  iVar1 = FUN_00d8d382(param_1,0,&SensoryEffectDefinition::RTTI_Type_Descriptor,
                       &ActorCompositeEffectDefinition::RTTI_Type_Descriptor,0);
  return *(undefined4 *)(iVar1 + 0x40);
}

