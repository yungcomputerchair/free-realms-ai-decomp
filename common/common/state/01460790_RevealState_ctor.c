// addr: 0x01460790
// name: RevealState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RevealState_ctor(void * this) */

void * __fastcall RevealState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a RevealState, initializing base state, value maps, state name,
                       target/pile fields, and default reveal flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169d3f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  *(undefined ***)this = RevealState::vftable;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_012fa910();
  local_4._0_1_ = 2;
  FUN_012fa910();
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "RevealState",0xb);
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined1 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined1 *)((int)this + 0x130) = 1;
  *(undefined1 *)((int)this + 0x131) = 0;
  *(undefined1 *)((int)this + 0x132) = 0;
  *(undefined4 *)((int)this + 0x140) = 1;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined1 *)((int)this + 0x158) = 1;
  *(undefined1 *)((int)this + 0x15a) = 1;
  ExceptionList = local_c;
  return this;
}

