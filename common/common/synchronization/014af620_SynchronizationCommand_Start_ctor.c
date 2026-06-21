// addr: 0x014af620
// name: SynchronizationCommand_Start_ctor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_Start_ctor(void * this) */

void * __fastcall SynchronizationCommand_Start_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Start synchronization command, installing its vftable and
                       clearing four payload fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a6ae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SynchronizationCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = SynchronizationCommand_Start::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  ExceptionList = local_c;
  return this;
}

