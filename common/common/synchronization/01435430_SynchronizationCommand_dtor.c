// addr: 0x01435430
// name: SynchronizationCommand_dtor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_dtor(void * this) */

void __fastcall SynchronizationCommand_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Base destructor for SynchronizationCommand; reinstalls the base vtable and
                       delegates to the parent command destructor. */
  puStack_8 = &LAB_01696e68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SynchronizationCommand::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

