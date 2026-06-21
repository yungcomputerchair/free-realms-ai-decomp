// addr: 0x014afb80
// name: SynchronizationCommand_SetModID_dtor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_SetModID_dtor(void * this) */

void __fastcall SynchronizationCommand_SetModID_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for SynchronizationCommand_SetModID; reinstalls its vtable and
                       calls the SynchronizationCommand base destructor. */
  puStack_8 = &LAB_016a6c08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SynchronizationCommand_SetModID::vftable;
  local_4 = 0xffffffff;
  SynchronizationCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

