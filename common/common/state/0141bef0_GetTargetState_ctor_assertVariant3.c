// addr: 0x0141bef0
// name: GetTargetState_ctor_assertVariant3
// subsystem: common/common/state
// source (binary assert): common/common/state/GetTargetState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GetTargetState_ctor_assertVariant3(void * this) */

void * __fastcall GetTargetState_ctor_assertVariant3(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a GetTargetState instance and clears target fields, then
                       unconditionally asserts false at GetTargetState.cpp line 0x39. This looks
                       like another disabled constructor overload. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01693c42;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = GetTargetState::vftable;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  local_4 = 3;
  FUN_012f5a60("false","..\\common\\common\\state\\GetTargetState.cpp",0x39);
  ExceptionList = local_c;
  return this;
}

