// addr: 0x014b08f0
// name: SynchronizationCommand_SendInstances_ctor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_SendInstances_ctor(void * this) */

void * __fastcall SynchronizationCommand_SendInstances_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a SendInstances synchronization command, installing its vftable
                       and clearing multiple collection/vector payload fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a6dde;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SynchronizationCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = SynchronizationCommand_SendInstances::vftable;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  ExceptionList = local_c;
  return this;
}

