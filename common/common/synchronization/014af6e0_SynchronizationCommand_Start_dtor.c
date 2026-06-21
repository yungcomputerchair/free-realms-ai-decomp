// addr: 0x014af6e0
// name: SynchronizationCommand_Start_dtor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_Start_dtor(void * this) */

void __fastcall SynchronizationCommand_Start_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for SynchronizationCommand_Start; reinstalls its vtable and calls
                       the base SynchronizationCommand destructor. */
  puStack_8 = &LAB_016a6b18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SynchronizationCommand_Start::vftable;
  local_4 = 0xffffffff;
  SynchronizationCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

