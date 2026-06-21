// addr: 0x007bb180
// name: AnimationSoundReference_ctor
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
AnimationSoundReference_ctor(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an AnimationSoundReference by initializing the AnimationEvent base
                       fields and installing the AnimationSoundReference vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155f5a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007bb110(param_2,param_3);
  param_1[0xe] = AnimationEvent::vftable;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *param_1 = AnimationSoundReference::vftable;
  param_1[0xe] = AnimationSoundReference::vftable;
  ExceptionList = local_c;
  return param_1;
}

