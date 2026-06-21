// addr: 0x013f6300
// name: StateMachine_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StateMachine_ctor(void * this) */

void * __fastcall StateMachine_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
                    /* Constructs a StateMachine PersistentComponent, initializes many string/list
                       fields and state members, and installs StateMachine vtable. Vtable symbols
                       identify the class. */
  puStack_8 = &LAB_0168f70c;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(undefined ***)this = PersistentBase::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = StateMachine::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x58) = 0xf;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x44) = 0;
  uStack_3 = 0;
  *(undefined4 *)((int)this + 0x74) = 0xf;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined1 *)((int)this + 0x60) = 0;
  local_4 = 6;
  MessageText_ctor(uVar1);
  local_4 = 7;
  MessageText_ctor();
  *(undefined4 *)((int)this + 200) = 0xf;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined1 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0xf;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined1 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0x100) = 0xf;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined1 *)((int)this + 0xec) = 0;
  local_4 = 0xb;
  FUN_013f6260();
  *(undefined4 *)((int)this + 300) = 0xf;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined1 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x148) = 0xf;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined1 *)((int)this + 0x134) = 0;
  local_4 = 0xe;
  MessageText_ctor();
  _local_4 = CONCAT31(uStack_3,0xf);
  MessageText_ctor();
  *(undefined4 *)((int)this + 0x19c) = 0xf;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0xf;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined1 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  ExceptionList = local_c;
  return this;
}

