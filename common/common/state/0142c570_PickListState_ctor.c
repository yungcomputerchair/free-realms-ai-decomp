// addr: 0x0142c570
// name: PickListState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PickListState_ctor(void * this) */

void * __fastcall PickListState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Default-constructs PickListState, installs PickListState::vftable,
                       initializes ValueData/string members, sets the state name to 'PickListState',
                       and clears flags. Evidence is vftable and name string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01695b32;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  *(undefined ***)this = PickListState::vftable;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x134) = 0xf;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined1 *)((int)this + 0x120) = 0;
  local_4._1_3_ = 0;
  local_4._0_1_ = 2;
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "PickListState",0xd);
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x11c),
             "",0);
  *(undefined1 *)((int)this + 0x138) = 0;
  *(undefined1 *)((int)this + 0x139) = 0;
  *(undefined1 *)((int)this + 0x148) = 0;
  *(undefined1 *)((int)this + 0x149) = 0;
  ExceptionList = local_c;
  return this;
}

