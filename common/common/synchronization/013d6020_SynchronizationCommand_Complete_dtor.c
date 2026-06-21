// addr: 0x013d6020
// name: SynchronizationCommand_Complete_dtor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_Complete_dtor(void * this) */

void __fastcall SynchronizationCommand_Complete_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for SynchronizationCommand_Complete that reinstalls the Complete
                       vtable before calling the base SynchronizationCommand destructor. */
  puStack_8 = &LAB_0168b968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SynchronizationCommand_Complete::vftable;
  local_4 = 0xffffffff;
  SynchronizationCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

