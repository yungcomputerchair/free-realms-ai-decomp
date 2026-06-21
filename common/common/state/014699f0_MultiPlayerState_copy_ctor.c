// addr: 0x014699f0
// name: MultiPlayerState_copy_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MultiPlayerState_copy_ctor(void * this, void * other) */

void * __thiscall MultiPlayerState_copy_ctor(void *this,void *other)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a MultiPlayerState with initialized maps, vtable, name, and
                       multiplayer fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169e474;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctorWithMachine(other);
  local_4 = 0;
  *(undefined ***)this = MultiPlayerState::vftable;
  FUN_012fa910(uVar1);
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  local_4 = CONCAT31((int3)((uint)local_4 >> 8),2);
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(void **)((int)this + 8) = other;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "MultiPlayerState",0x10);
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  ExceptionList = local_c;
  return this;
}

