// addr: 0x0145b390
// name: WhileState_copy_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * WhileState_copy_ctor(void * this, void * other) */

void * __thiscall WhileState_copy_ctor(void *this,void *other)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a WhileState from another instance and initializes its maps,
                       name, previous-state pointer, and flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169cb80;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctorWithMachine(other);
  local_4 = 0;
  *(undefined ***)this = WhileState::vftable;
  FUN_012fa910(uVar1);
  local_4._0_1_ = 1;
  FUN_012fa910();
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "WhileState",10);
  *(void **)((int)this + 8) = other;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined1 *)((int)this + 0x128) = 0;
  ExceptionList = local_c;
  return this;
}

