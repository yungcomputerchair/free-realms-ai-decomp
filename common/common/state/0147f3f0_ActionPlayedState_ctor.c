// addr: 0x0147f3f0
// name: ActionPlayedState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ActionPlayedState_ctor(void * this) */

void * __fastcall ActionPlayedState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an ActionPlayedState, initializing base state, maps, vtable, state
                       name, action/player/target fields, and default boolean flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a0812;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *(undefined ***)this = ActionPlayedState::vftable;
  MessageText_ctor();
  local_4._0_1_ = 1;
  MessageText_ctor();
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "ActionPlayedState",0x11);
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined1 *)((int)this + 0x10c) = 0;
  *(undefined1 *)((int)this + 0x10d) = 0;
  *(undefined1 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 10;
  *(undefined1 *)((int)this + 0x11d) = 0;
  *(undefined1 *)((int)this + 0x11c) = 0;
  *(undefined1 *)((int)this + 0x11e) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined1 *)((int)this + 0x124) = 0;
  *(undefined1 *)((int)this + 0x125) = 0;
  *(undefined1 *)((int)this + 0x160) = 0;
  *(undefined1 *)((int)this + 0x161) = 1;
  *(undefined1 *)((int)this + 0x162) = 1;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined1 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined1 *)((int)this + 0x199) = 0;
  *(undefined1 *)((int)this + 0x19a) = 0;
  *(undefined1 *)((int)this + 0x19b) = 0;
  ExceptionList = local_c;
  return this;
}

