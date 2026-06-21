// addr: 0x00946220
// name: ActorSoundEmitterDefinition_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
ActorSoundEmitterDefinition_ctor
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an ActorSoundEmitterDefinition, including ActorEffectDefinition
                       base state, DeferredPlayListLoader, sound-control defaults, and
                       playlist/default fields. Evidence: direct
                       ActorSoundEmitterDefinition::vftable assignment and calls to
                       DeferredPlayListLoader_ctor and SoundControlDefinition_initDefaults. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015936b1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorEffectDefinition_ctor();
  local_4 = 0;
  *param_1 = ActorSoundEmitterDefinition::vftable;
  DeferredPlayListLoader_ctor();
  local_4._0_1_ = 1;
  SoundControlDefinition_initDefaults(param_1 + 0x56);
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined1 *)(param_1 + 0x68) = 1;
  param_1[0x54] = 2;
  param_1[0x55] = 1;
  pvVar1 = Mem_Alloc(0x5c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_007c9ca0();
  }
  param_1[0x53] = uVar2;
  param_1[0x69] = 0;
  param_1[0x25] = param_4;
  ExceptionList = local_c;
  return param_1;
}

