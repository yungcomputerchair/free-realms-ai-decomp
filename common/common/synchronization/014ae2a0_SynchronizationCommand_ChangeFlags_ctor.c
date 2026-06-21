// addr: 0x014ae2a0
// name: SynchronizationCommand_ChangeFlags_ctor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_ChangeFlags_ctor(void * this) */

void * __fastcall SynchronizationCommand_ChangeFlags_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ChangeFlags synchronization command and zeroes six payload
                       fields after installing its vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a67e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SynchronizationCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = SynchronizationCommand_ChangeFlags::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  ExceptionList = local_c;
  return this;
}

