// addr: 0x014b14f0
// name: SynchronizationCommand_RemoveInstances_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_RemoveInstances_dtor(void * this) */

void __fastcall SynchronizationCommand_RemoveInstances_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for SynchronizationCommand_RemoveInstances, chaining to
                       synchronization command base cleanup. */
  puStack_8 = &LAB_016a7013;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = SynchronizationCommand_RemoveInstances::vftable;
  local_4 = 0;
  FUN_012c2de0(uVar1);
  local_4 = 0xffffffff;
  SynchronizationCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

