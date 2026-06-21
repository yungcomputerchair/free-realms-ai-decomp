// addr: 0x0145d8c0
// name: StateMachineState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StateMachineState_ctor(void * this) */

void * __fastcall StateMachineState_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
                    /* Constructs the base StateMachineState, installing
                       PersistentBase/PersistentComponent/StateMachineState vtables, initializing
                       strings/maps/fields, and setting the default name. */
  puStack_8 = &LAB_0169ce66;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *(undefined ***)this = PersistentBase::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = StateMachineState::vftable;
  *(undefined4 *)((int)this + 0x34) = 0xf;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x50) = 0xf;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined1 *)((int)this + 0x3c) = 0;
  uStack_3 = 0;
  local_4 = 3;
  MessageText_ctor(uVar1);
  local_4 = 4;
  MessageText_ctor();
  *(undefined4 *)((int)this + 0xa4) = 0xf;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined1 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0xf;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined1 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0xf;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined1 *)((int)this + 200) = 0;
  _local_4 = CONCAT31(uStack_3,8);
  *(undefined4 *)((int)this + 4) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "Basic StateMachineState",0x17);
  *(undefined1 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined1 *)((int)this + 0xf0) = 0;
  ExceptionList = local_c;
  return this;
}

