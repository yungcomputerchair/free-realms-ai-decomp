// addr: 0x0146ad00
// name: MultiActionState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MultiActionState_ctor(void * this) */

void * __fastcall MultiActionState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a MultiActionState, initializing base state, maps, action lists,
                       vtable, and state name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169e640;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *(undefined ***)this = MultiActionState::vftable;
  FUN_012fa910();
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  local_4._0_1_ = 3;
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined1 *)((int)this + 0x114) = 1;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "MultiActionState",0x10);
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined1 *)((int)this + 0x160) = 0;
  *(undefined1 *)((int)this + 0x161) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined1 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined1 *)((int)this + 0x174) = 0;
  ExceptionList = local_c;
  return this;
}

