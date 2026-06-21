// addr: 0x007bb560
// name: AnimationCompositeEffectReference_ctor
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
AnimationCompositeEffectReference_ctor(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an AnimationCompositeEffectReference by initializing the
                       AnimationEvent base fields and installing the
                       AnimationCompositeEffectReference vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155f703;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007bb4f0(param_2,param_3);
  param_1[0xe] = AnimationEvent::vftable;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *param_1 = AnimationCompositeEffectReference::vftable;
  param_1[0xe] = AnimationCompositeEffectReference::vftable;
  ExceptionList = local_c;
  return param_1;
}

