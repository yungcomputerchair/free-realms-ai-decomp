// addr: 0x0093c370
// name: ActorModelMaterialDefinition_sub_0093c370
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 ActorModelMaterialDefinition_sub_0093c370(undefined4 param_1)

{
  int iVar1;
  
                    /* Casts a SensoryEffectDefinition to ActorModelMaterialDefinition and returns
                       the 32-bit field at offset +0x60. Field meaning is not identified. */
  iVar1 = FUN_00d8d382(param_1,0,&SensoryEffectDefinition::RTTI_Type_Descriptor,
                       &ActorModelMaterialDefinition::RTTI_Type_Descriptor,0);
  return *(undefined4 *)(iVar1 + 0x60);
}

