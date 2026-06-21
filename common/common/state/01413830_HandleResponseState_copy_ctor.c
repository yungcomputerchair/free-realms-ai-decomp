// addr: 0x01413830
// name: HandleResponseState_copy_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * HandleResponseState_copy_ctor(void * this, void * other) */

void * __thiscall HandleResponseState_copy_ctor(void *this,void *other)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs HandleResponseState, initializing maps/lists, vtable, name,
                       and default flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01692bf0;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctorWithMachine(other);
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
  FUN_012fa910(uVar2);
  local_4 = CONCAT31(local_4._1_3_,4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "HandleResponseState",0x13);
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 5;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  uVar2 = *(uint *)((int)this + 0x110);
  if (uVar2 < *(uint *)((int)this + 0x10c)) {
    FUN_00d83c2d();
  }
  uVar1 = *(uint *)((int)this + 0x10c);
  if (*(uint *)((int)this + 0x110) < uVar1) {
    FUN_00d83c2d();
  }
  FUN_01412e00(local_14,(int)this + 0x108,uVar1,(int)this + 0x108,uVar2);
  *(undefined1 *)((int)this + 0x130) = 1;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined1 *)((int)this + 0x138) = 0;
  *(undefined1 *)((int)this + 0x158) = 1;
  ExceptionList = local_c;
  return this;
}

