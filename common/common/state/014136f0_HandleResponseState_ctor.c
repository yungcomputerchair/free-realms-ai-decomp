// addr: 0x014136f0
// name: HandleResponseState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * HandleResponseState_ctor(void * this) */

void * __fastcall HandleResponseState_ctor(void *this)

{
  uint uVar1;
  uint local_18 [2];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs HandleResponseState, initializing base state, vtable, name,
                       random-target map/list fields, and default flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01692b90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  CancellableStateMachineState_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  *(undefined ***)this = HandleResponseState::vftable;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  local_4._0_1_ = 3;
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "HandleResponseState",0x13);
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 5;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  uVar1 = *(uint *)((int)this + 0x110);
  if (uVar1 < *(uint *)((int)this + 0x10c)) {
    FUN_00d83c2d();
  }
  local_18[0] = *(uint *)((int)this + 0x10c);
  if (*(uint *)((int)this + 0x110) < local_18[0]) {
    FUN_00d83c2d();
  }
  FUN_01412e00(local_18,(int)this + 0x108,local_18[0],(int)this + 0x108,uVar1);
  *(undefined1 *)((int)this + 0x130) = 1;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined1 *)((int)this + 0x138) = 0;
  *(undefined1 *)((int)this + 0x158) = 1;
  ExceptionList = local_c;
  return this;
}

