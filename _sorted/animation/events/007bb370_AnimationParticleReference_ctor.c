// addr: 0x007bb370
// name: AnimationParticleReference_ctor
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
AnimationParticleReference_ctor(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an AnimationParticleReference by initializing the AnimationEvent
                       base fields and installing the AnimationParticleReference vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155f653;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007bb300(param_2,param_3);
  param_1[0xf] = AnimationEvent::vftable;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *param_1 = AnimationParticleReference::vftable;
  param_1[0xf] = AnimationParticleReference::vftable;
  ExceptionList = local_c;
  return param_1;
}

