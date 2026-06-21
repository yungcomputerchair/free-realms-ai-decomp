// addr: 0x013d3040
// name: SynchronizationCommand_Update_dtor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_Update_dtor(void * this) */

void __fastcall SynchronizationCommand_Update_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for SynchronizationCommand_Update; reinstalls the Update vtable
                       and delegates to the SynchronizationCommand base destructor. */
  puStack_8 = &LAB_0168b428;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SynchronizationCommand_Update::vftable;
  local_4 = 0xffffffff;
  SynchronizationCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

