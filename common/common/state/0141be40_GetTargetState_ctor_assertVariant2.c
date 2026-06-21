// addr: 0x0141be40
// name: GetTargetState_ctor_assertVariant2
// subsystem: common/common/state
// source (binary assert): common/common/state/GetTargetState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GetTargetState_ctor_assertVariant2(void * this) */

void * __fastcall GetTargetState_ctor_assertVariant2(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GetTargetState object with base initialization, vftable install,
                       and zeroed members, then asserts false at GetTargetState.cpp line 0x34.
                       Likely an unsupported constructor overload. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01693bf2;
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
  FUN_012f5a60("false","..\\common\\common\\state\\GetTargetState.cpp",0x34);
  ExceptionList = local_c;
  return this;
}

