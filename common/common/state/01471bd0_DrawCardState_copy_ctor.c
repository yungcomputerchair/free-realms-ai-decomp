// addr: 0x01471bd0
// name: DrawCardState_copy_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DrawCardState_copy_ctor(void * this, void * other) */

void * __thiscall DrawCardState_copy_ctor(void *this,void *other)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a DrawCardState with initialized maps, vtable, name, and
                       draw-card fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f206;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctorWithMachine(other);
  local_4 = 0;
  *(undefined ***)this = DrawCardState::vftable;
  FUN_012fa910(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "DrawCardState",0xd);
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined1 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  ExceptionList = local_c;
  return this;
}

