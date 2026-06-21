// addr: 0x014afac0
// name: SynchronizationCommand_SetModID_ctor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_SetModID_ctor(void * this) */

void * __fastcall SynchronizationCommand_SetModID_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a SetModID synchronization command, installing its vftable and
                       clearing the mod id field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a6bd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SynchronizationCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = SynchronizationCommand_SetModID::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  ExceptionList = local_c;
  return this;
}

