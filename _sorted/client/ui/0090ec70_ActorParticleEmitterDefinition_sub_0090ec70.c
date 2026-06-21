// addr: 0x0090ec70
// name: ActorParticleEmitterDefinition_sub_0090ec70
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 ActorParticleEmitterDefinition_sub_0090ec70(undefined4 param_1)

{
  int iVar1;
  
                    /* Casts a SensoryEffectDefinition to ActorParticleEmitterDefinition and returns
                       the 32-bit field at offset +0xd0. Field meaning is not identified. */
  iVar1 = FUN_00d8d382(param_1,0,&SensoryEffectDefinition::RTTI_Type_Descriptor,
                       &ActorParticleEmitterDefinition::RTTI_Type_Descriptor,0);
  return *(undefined4 *)(iVar1 + 0xd0);
}

