// addr: 0x014ae6a0
// name: SynchronizationCommand_StartInstances_dtor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_StartInstances_dtor(void * this) */

void __fastcall SynchronizationCommand_StartInstances_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for SynchronizationCommand_StartInstances; reinstalls its vtable
                       and calls the SynchronizationCommand base destructor. */
  puStack_8 = &LAB_016a68c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SynchronizationCommand_StartInstances::vftable;
  local_4 = 0xffffffff;
  SynchronizationCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

